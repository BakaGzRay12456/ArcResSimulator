#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
ArcResSimulator —— Arcaea 结算界面（Results）模拟器
=====================================================
纯 Python (Pillow) 渲染，忠实还原 3100 版本的结算界面布局与角色偏移算法。

坐标系统（与 Cocos / 游戏一致）：
- 设计基准分辨率 1280x720，原点在左下角，y 向上
- 屏幕比例自定义：--width/--height 为输出画布像素尺寸
  采用 Cocos SHOW_ALL 策略：scale = min(W/1280, H/720)，可见区域 (vis_w, vis_h)
  大于等于设计矩形，设计矩形在可见区域内居中（off_x/off_y 平分多出的边）
  （3100.so 里按钮按 (visibleW-1280)*±0.5 补偿，正是 SHOW_ALL 的证据）
- 角色偏移：character_offset.character_transform(char_id, is_partner, vis_w, vis_h)
  （3100.so 反汇编：CSB_pos + (-120,0) + centerScreenOffset + resultsOffset
   再 y += (v8/240)*100，v8 = clamp(vis_h-720, 0, 240)，缩放恒为 1）

用法示例：
    python3 arc_res_simulator.py --char char.png --char-icon char_icon.png
    python3 arc_res_simulator.py --char char.png --char-icon char_icon.png \
        --width 1280 --height 960 --char-id 1 --song 'Sayonara Hatsukoi' \
        --score 9912345 --grade ex --clear full --difficulty ftr --level 12 \
        --combo 1234 --pure 1765 --far 24 --lost 0 --jacket jacket.png
"""
import argparse
import math
import os
import sys

from PIL import Image, ImageDraw, ImageFont

BASE = os.path.dirname(os.path.abspath(__file__))
ASSETS = os.path.join(BASE, "assets")
LAYOUT = os.path.join(BASE, "layout", "Results.csd")
sys.path.insert(0, BASE)

import parse_layout       # noqa: E402
import character_offset   # noqa: E402

DESIGN_W = 1280.0
DESIGN_H = 720.0
FONT_DIR = os.path.join(ASSETS, "Fonts")
CJK_FONT = "NotoSansCJKsc-Regular.otf"
CJK_FONT_BOLD = "NotoSansCJKsc-Bold.otf"

DIFFICULTIES = {
    "pst": dict(texture="max-recall-pst.png", label="PAST",    color=(95, 165, 240)),
    "prs": dict(texture="max-recall-prs.png", label="PRESENT", color=(120, 210, 140)),
    "ftr": dict(texture="max-recall-ftr.png", label="FUTURE",  color=(245, 110, 130)),
    "byd": dict(texture="max-recall-byd.png", label="BEYOND",  color=(175, 120, 240)),
    "etr": dict(texture="max-recall-etr.png", label="ETERNAL", color=(250, 200, 110)),
}
GRADE_FILES = {
    "d": "grade/d.png", "c": "grade/c.png", "b": "grade/b.png",
    "a": "grade/a.png", "aa": "grade/aa.png", "ex": "grade/ex.png",
    "explus": "grade/explus.png",
}
CLEAR_FILES = {
    "normal": "img/clear_normal.png", "full": "img/clear_full.png",
    "pure": "img/clear_pure.png", "fail": "img/clear_fail.png",
    "hard": "img/clear_type/hard.png", "easy": "img/clear_type/easy.png",
}

# ---------------------------------------------------------------------------
# 工具函数
# ---------------------------------------------------------------------------
def asset(rel):
    """把 CSD 里的相对路径（如 layouts/1080/results/back.png）解析为本地文件。"""
    rel = rel.replace("\\", "/")
    while rel.startswith("assets/"):
        rel = rel[len("assets/"):]
    p = os.path.join(ASSETS, rel)
    if os.path.exists(p):
        return p
    name = os.path.basename(rel)
    for root, _, files in os.walk(ASSETS):
        if name in files:
            return os.path.join(root, name)
    return None


def font_path(name, bold=False):
    base = os.path.basename(name or "")
    p = os.path.join(FONT_DIR, base)
    if os.path.exists(p):
        return p
    for f in os.listdir(FONT_DIR):
        if f.lower() == base.lower():
            return os.path.join(FONT_DIR, f)
    return os.path.join(FONT_DIR, CJK_FONT_BOLD if bold else CJK_FONT)


def has_cjk(s):
    return any('\u3040' <= c <= '\u30ff' or '\u4e00' <= c <= '\u9fff'
               or '\uff00' <= c <= '\uffef' or '\uac00' <= c <= '\ud7af'
               for c in s)


def score_text(score):
    """Arcaea 分数格式：09'123'456 / 10'000'000。"""
    s = str(int(score))
    if len(s) <= 9:
        s = s.zfill(9)
        return "%s'%s'%s" % (s[:2], s[2:5], s[5:])
    out = []
    while s:
        out.insert(0, s[-3:])
        s = s[:-3]
    return "'".join(out)


def num_text(n):
    s = str(abs(int(n)))
    out = []
    while s:
        out.insert(0, s[-3:])
        s = s[:-3]
    return "'".join(out)


def ease_out_cubic(f):
    return 1.0 - (1.0 - f) ** 3


def cover_crop(im, size):
    """等比缩放铺满 size 并居中裁切。"""
    tw, th = size
    iw, ih = im.size
    s = max(tw / iw, th / ih)
    nw, nh = int(round(iw * s)), int(round(ih * s))
    im = im.resize((nw, nh), Image.LANCZOS)
    l = (nw - tw) // 2
    t = (nh - th) // 2
    return im.crop((l, t, l + tw, t + th))

# ---------------------------------------------------------------------------
# 渲染器
# ---------------------------------------------------------------------------
class ResultsRenderer:
    def __init__(self, opts):
        self.opts = opts
        self.W = int(opts.width)
        self.H = int(opts.height)
        # SHOW_ALL 策略（3100 init 里按钮按 (visibleW-1280)*-0.5 补偿，证明设计矩形
        # 在可见区域内居中）：缩放取 min(W/1280, H/720)，多出的宽/高平分到两侧
        self.scale = min(self.W / DESIGN_W, self.H / DESIGN_H)   # 像素 / 设计单位
        self.vis_w = self.W / self.scale        # 设计坐标系下的可见宽度（>= 1280）
        self.vis_h = self.H / self.scale        # 设计坐标系下的可见高度（>= 720）
        self.off_x = (self.vis_w - DESIGN_W) / 2.0
        self.off_y = (self.vis_h - DESIGN_H) / 2.0
        self.canvas = Image.new("RGBA", (self.W, self.H), (0, 0, 0, 255))
        self.draw = ImageDraw.Draw(self.canvas)
        self._font_cache = {}

        self.char_img = self._load_alpha(opts.char) if opts.char else None
        self.char_icon = self._load_alpha(opts.char_icon) if opts.char_icon else None

        if not opts.no_background:
            self._draw_background()

    # ---- 坐标 ----
    def to_px(self, x, y):
        """设计坐标（y 向上, 左下原点）→ 画布像素（y 向下, 左上原点）。

        设计矩形 (0..1280, 0..720) 在可见区域内居中：x 加 off_x，y 加 off_y。
        """
        return ((x + self.off_x) * self.scale, self.H - (y + self.off_y) * self.scale)

    def _load_alpha(self, path):
        if not path or not os.path.exists(path):
            return None
        return Image.open(path).convert("RGBA")

    # ---- 背景 ----
    def _draw_background(self):
        bg = asset("img/bg_light.jpg")
        if bg and os.path.exists(bg):
            im = cover_crop(Image.open(bg).convert("RGB"), (self.W, self.H)).convert("RGBA")
            im.putalpha(Image.new("L", (self.W, self.H), 170))   # init: setOpacity(170)
            self.canvas.alpha_composite(im)
        else:
            self.canvas.paste((18, 22, 30, 255), (0, 0, self.W, self.H))

    # ---- 字体 ----
    def get_font(self, node_size, font_name="", bold=False, text=""):
        px = max(1, int(round(float(node_size) * self.scale)))
        cjk = has_cjk(text)
        key = (px, font_name, bold, cjk)
        if key in self._font_cache:
            return self._font_cache[key]
        if cjk and "cjk" not in font_name.lower():
            path = os.path.join(FONT_DIR, CJK_FONT_BOLD if bold else CJK_FONT)
        else:
            path = font_path(font_name, bold)
        f = ImageFont.truetype(path, px)
        self._font_cache[key] = f
        return f

    # ---- 绘制原语 ----
    def draw_sprite(self, img, spec, alpha=255, color=None):
        """按 Cocos 节点语义贴图：缩放围绕锚点，支持负 scale 镜像。

        spec 可以是解析出的 node dict，或 (pos, size, anchor, scale)。
        """
        if isinstance(spec, dict):
            pos = spec["position"]
            size = spec["size"]
            anchor = spec["anchor"]
            sx, sy = spec["scale"]
        else:
            pos, size, anchor, (sx, sy) = spec
        if img is None:
            return
        cw, ch = size
        w = cw * abs(sx)
        h = ch * abs(sy)
        if sx >= 0:
            left = pos[0] - anchor[0] * w
        else:
            left = pos[0] - (1 - anchor[0]) * w
        if sy >= 0:
            y_lo = pos[1] - anchor[1] * h
            y_hi = y_lo + h
        else:
            y_lo = pos[1] - (1 - anchor[1]) * h
            y_hi = y_lo + h
        pw = max(1, int(round(w * self.scale)))
        ph = max(1, int(round(h * self.scale)))
        im = img.convert("RGBA")
        if im.size != (pw, ph):
            im = im.resize((pw, ph), Image.LANCZOS)
        if sx < 0:
            im = im.transpose(Image.FLIP_LEFT_RIGHT)
        if sy < 0:
            im = im.transpose(Image.FLIP_TOP_BOTTOM)
        px, py = self.to_px(left, y_hi)
        a = int(round(alpha))
        if a < 255:
            im.putalpha(im.getchannel("A").point(lambda v: v * a // 255))
        if color is not None:
            r, g, b = color[:3]
            r2 = Image.new("L", im.size, r)
            g2 = Image.new("L", im.size, g)
            b2 = Image.new("L", im.size, b)
            im = Image.merge("RGBA", (r2, g2, b2, im.getchannel("A")))
        self.canvas.alpha_composite(im, (int(px), int(py)))

    def draw_text(self, text, node, alpha=255, color=None, outline_color=None):
        """按节点语义绘制文本（锚点、描边、阴影）。node 为解析出的 Text dict。"""
        if not text:
            return
        size = float(node.get("font_size", 20))
        font_name = node.get("font", "")
        bold = "Semibold" in font_name or "Bold" in font_name
        font = self.get_font(size, font_name, bold, text)
        pos = node["position"]
        anchor = node["anchor"]

        bbox = font.getbbox(text)
        tw = font.getlength(text)
        th = bbox[3] - bbox[1] if bbox else 0
        if th <= 0:
            th = font.getmetrics()[0] + font.getmetrics()[1]

        # 设计坐标：文本盒以锚点为中心
        w_d = tw / self.scale
        h_d = th / self.scale
        top_x = pos[0] - anchor[0] * w_d
        top_y = pos[1] - anchor[1] * h_d
        px = top_x * self.scale
        py = self.H - (top_y + h_d + self.off_y) * self.scale

        if color is None:
            color = node.get("color", (255, 255, 255, 255))
        fill = (color[0], color[1], color[2], alpha)
        shadow = node.get("shadow_enabled", False)
        outline = node.get("outline_enabled", False)

        if shadow:
            so = node.get("shadow_offset", (0, 0))
            sc = node.get("shadow_color", (20, 20, 20, 255))
            o = (so[0] * self.scale, -so[1] * self.scale)   # Cocos y 向上 → Pillow 翻转
            self.draw.text((px + o[0], py + o[1]), text, font=font,
                           fill=(sc[0], sc[1], sc[2], alpha * sc[3] // 255))
        stroke_w = 0
        stroke_fill = None
        if outline:
            stroke_w = max(1, int(round(node.get("outline_size", 1) * self.scale)))
            oc = outline_color or node.get("outline_color", (0, 0, 0, 255))
            stroke_fill = (oc[0], oc[1], oc[2], alpha)
        self.draw.text((px, py), text, font=font, fill=fill,
                       stroke_width=stroke_w, stroke_fill=stroke_fill)

    # ---- 主渲染 ----
    def render(self):
        root = parse_layout.load_csd(LAYOUT)
        self._walk(root)
        if not self.opts.no_topbar:
            self._draw_topbar()
        return self.canvas

    def _walk(self, node):
        """按 CSD 树顺序绘制（最终状态：所有 FadeIn 完成，alpha 视为 255）。"""
        if not node.get("visible", True):
            return
        name = node["name"]
        t = node["type"]

        # ---- 特殊节点（setupResultUI 逻辑）----
        if name == "back" and t == "ImageView":
            self._draw_sprite_node(node, "layouts/1080/results/results_bg.png")
            return
        if name == "back_bar":
            self._draw_sprite_node(node, "layouts/1080/results/res_banner.png")
            return
        if name == "character":
            self._draw_character(node)
            return
        if name == "songImage":
            self._draw_jacket(node)
            return
        if name == "songNameLabel-fullnolocalize":
            self.draw_text(self.opts.song, node, alpha=255)
            return
        if name == "songArtistLabel-fullnolocalize":
            self.draw_text(self.opts.artist, node, alpha=255)
            return
        if name == "scoreLabel":
            self.draw_text(score_text(self.opts.score), node, alpha=255,
                           color=(255, 255, 255, 255))
            if self.opts.best:
                so = node.get("shadow_offset", (3, -3))
                self._draw_text_shadow(score_text(self.opts.score), node, (3.0, -3.0),
                                       (15, 113, 133))
            return
        if name == "pastScoreLabel":
            if self.opts.past_score is not None:
                self.draw_text(score_text(self.opts.past_score), node, alpha=255)
            return
        if name == "scoreDiffLabel":
            if self.opts.score_diff is not None:
                d = int(self.opts.score_diff)
                sign = "+" if d >= 0 else "-"
                self.draw_text(sign + num_text(abs(d)), node, alpha=255)
            return
        if name == "difficultyBacking":
            d = DIFFICULTIES.get(self.opts.difficulty, DIFFICULTIES["ftr"])
            self._draw_sprite_node(node, "layouts/1080/results/" + d["texture"])
            return
        if name == "difficultyLabel":
            level, _ = self._level_parts()
            self.draw_text(level, node, alpha=255, color=(255, 255, 255, 255),
                           outline_color=self._diff_color())
            return
        if name == "difficultyPlusLabel":
            _, plus = self._level_parts()
            if plus:
                self.draw_text("+", node, alpha=255, color=(255, 255, 255, 255),
                               outline_color=self._diff_color())
            return
        if name == "difficultyNameLabel":
            d = DIFFICULTIES.get(self.opts.difficulty, DIFFICULTIES["ftr"])
            self.draw_text(d["label"], node, alpha=255, color=self._diff_color())
            return
        if name == "maxComboCountLabel":
            self.draw_text(str(self.opts.combo), node, alpha=255)
            return
        if name == "perfectCountLabel":
            self.draw_text(str(self.opts.pure), node, alpha=255)
            return
        if name == "nearCountLabel":
            self.draw_text(str(self.opts.far), node, alpha=255)
            return
        if name == "missCountLabel":
            self.draw_text(str(self.opts.lost), node, alpha=255)
            return
        if name == "shiningPerfectCountLabel":
            if self.opts.shining is not None:
                self.draw_text("+" + str(self.opts.shining), node, alpha=255)
            return
        if name == "lateEarlyCountLabel":
            if self.opts.late is not None or self.opts.early is not None:
                late = self.opts.late if self.opts.late is not None else 0
                early = self.opts.early if self.opts.early is not None else 0
                self.draw_text("L%d  E%d" % (late, early), node, alpha=255)
            return
        if name == "gradeImage":
            self._draw_grade(node)
            return
        if name == "clearTypeImage":
            self._draw_clear_type(node)
            return
        if name in ("nextButton", "shareButton", "retryButton", "sticker_button"):
            self._draw_button(node)
            return
        if name == "notsaved_back":
            self._draw_sprite_node(node, "img/white.png", alpha=204)
            return
        if name == "notsaved_text":
            self.draw_text("NOT SAVED", node, alpha=255)
            return

        # ---- 可选/隐藏节点 ----
        if name.startswith("beyond_result_node"):
            if self.opts.beyond:
                for c in node["children"]:
                    self._walk(c)
            return
        if name == "scoreSectionHigh":
            if self.opts.best:
                self._draw_sprite_node(node, "layouts/1080/results/res_scoresection_high.png")
            return
        if name == "additionalInfoButton":
            return

        # ---- 通用节点 ----
        if t == "Text":
            txt = node.get("text", "")
            if txt:
                self.draw_text(txt, node, alpha=255)
            return
        if t in ("Sprite", "ImageView", "Button"):
            f = node.get("normal_file") or node.get("file")
            if f:
                self._draw_sprite_node(node, f)
            return
        for c in node["children"]:
            self._walk(c)

    # ---- 具体绘制 ----
    def _draw_sprite_node(self, node, file, alpha=None, color=None):
        p = asset(file)
        if not p:
            return
        img = Image.open(p).convert("RGBA")
        if alpha is None:
            alpha = 255 if node["alpha"] == 0 else node["alpha"]
        self.draw_sprite(img, node, alpha=alpha, color=color)

    def _diff_color(self):
        if self.opts.difficulty_color:
            s = self.opts.difficulty_color.lstrip("#")
            return tuple(int(s[i:i + 2], 16) for i in (0, 2, 4))
        return DIFFICULTIES.get(self.opts.difficulty, DIFFICULTIES["ftr"])["color"]

    def _level_parts(self):
        try:
            v = float(self.opts.level)
        except (TypeError, ValueError):
            return str(self.opts.level), False
        whole = int(math.floor(v))
        plus = (v - whole) > 0.001
        return str(whole), plus

    def _draw_jacket(self, node):
        shadow_path = asset("img/jacket_shadow.png")
        if shadow_path:
            sh = Image.open(shadow_path).convert("RGBA")
            self.draw_sprite(sh, ((node["position"][0] - 9, node["position"][1] - 9),
                                  (393, 393), (0, 0), (1, 1)), alpha=200)
        if self.opts.jacket and os.path.exists(self.opts.jacket):
            img = Image.open(self.opts.jacket).convert("RGBA")
        else:
            img = Image.new("RGBA", (2, 2), (40, 44, 58, 255))
        self.draw_sprite(img, node, alpha=255)

    def _draw_character(self, node):
        if self.char_img is None:
            p = asset("startup/1080/char_h.png")
            self.char_img = Image.open(p).convert("RGBA") if p else None
        if self.char_img is None:
            return

        cid = int(self.opts.char_id)
        t = character_offset.character_transform(cid, self.opts.partner,
                                                 self.vis_w, self.vis_h)
        pos = t["pos"]

        # 入场动画：0.8s FadeIn + MoveBy(-200,0)，EaseCubicActionOut，Spawn
        time = min(max(float(self.opts.time), 0.0), 0.8)
        e = ease_out_cubic(time / 0.8)
        alpha = 255 if time >= 0.8 else int(round(255 * e))
        x0 = pos[0] + t["move_delta"][0] * (1.0 - e)
        y0 = pos[1]

        box_w, box_h = 1200.0, 920.0
        fit = self.opts.char_fit
        img = self.char_img
        iw, ih = img.size
        if fit == "fill":
            dw, dh = box_w, box_h
        elif fit == "cover":
            s = max(box_w / iw, box_h / ih)
            dw, dh = iw * s, ih * s
        elif fit == "none":
            dw, dh = iw, ih
        else:  # contain（默认）：整幅放进框内，不变形不裁切
            s = min(box_w / iw, box_h / ih)
            dw, dh = iw * s, ih * s

        left = x0
        top = y0
        if fit == "cover":
            left = x0 - (dw - box_w) / 2.0
            top = y0 - (dh - box_h) / 2.0
        self.draw_sprite(img, ((left, top), (dw, dh), (0, 1), (1, 1)), alpha=alpha)

        if self.opts.verbose:
            print("character: char_id=%d partner=%s canvas=%dx%d vis_w=%.1f vis_h=%.2f"
                  % (cid, self.opts.partner, self.W, self.H, self.vis_w, self.vis_h))
            print("  transform pos=%s center=%s results=%s scale=%s"
                  % (t["pos"], t["center_offset"], t["results_offset"], t["scale"]))
            print("  drawn box: left=%.1f top=%.1f size=%.0fx%.0f alpha=%d"
                  % (left, top, dw, dh, alpha))

    def _draw_grade(self, node):
        grade = self.opts.grade if self.opts.grade in GRADE_FILES else "ex"
        p = asset("img/" + GRADE_FILES[grade])
        if not p:
            return
        self.draw_sprite(Image.open(p).convert("RGBA"), node, alpha=255)

    def _draw_clear_type(self, node):
        ct = self.opts.clear if self.opts.clear in CLEAR_FILES else "normal"
        p = asset(CLEAR_FILES[ct])
        if not p:
            return
        self.draw_sprite(Image.open(p).convert("RGBA"), node, alpha=255)

    def _draw_button(self, node):
        f = node.get("normal_file") or node.get("file")
        if not f:
            return
        p = asset(f)
        if not p:
            return
        self.draw_sprite(Image.open(p).convert("RGBA"), node, alpha=255)

    def _draw_text_shadow(self, text, node, offset, color):
        font = self.get_font(float(node.get("font_size", 60)), node.get("font", ""),
                             False, text)
        bbox = font.getbbox(text)
        tw = font.getlength(text)
        th = bbox[3] - bbox[1] if bbox else 0
        w_d = tw / self.scale
        h_d = th / self.scale
        anchor = node["anchor"]
        top_x = node["position"][0] - anchor[0] * w_d
        top_y = node["position"][1] - anchor[1] * h_d
        px = top_x * self.scale + offset[0] * self.scale
        py = self.H - (top_y + h_d + self.off_y) * self.scale - offset[1] * self.scale
        self.draw.text((px, py), text, font=font,
                       fill=(color[0], color[1], color[2], 255))

    # ---- 顶栏（TopBar 简化版）----
    def _draw_topbar(self):
        p = asset("layouts/topbar/top_bar_bg.png")
        if not p:
            return
        bar = Image.open(p).convert("RGBA")
        bw, bh = bar.size
        w_px = self.W
        h_px = max(1, int(round(self.W * bh / bw)))
        bar = bar.resize((w_px, h_px), Image.LANCZOS)
        self.canvas.alpha_composite(bar, (0, 0))

        # 头像（左）
        icon_size = int(round(58 * self.scale))
        if self.char_icon:
            ic = self.char_icon.resize((icon_size, icon_size), Image.LANCZOS)
            self.canvas.alpha_composite(ic,
                (int(14 * self.scale), int((h_px - icon_size) / 2)))

        # frag 徽章
        fp = asset("layouts/1080/topbar/fragstack-singleplus.png") \
             or asset("layouts/1080/topbar/fragstack-single.png")
        if fp:
            pill = Image.open(fp).convert("RGBA")
            pw = int(round(96 * self.scale))
            phh = int(round(pill.size[1] * pw / pill.size[0]))
            pill = pill.resize((pw, phh), Image.LANCZOS)
            self.canvas.alpha_composite(pill,
                (int((14 + 58 + 10) * self.scale), int((h_px - phh) / 2)))
            font = self.get_font(18, "Exo-SemiBold.ttf", True, str(self.opts.frag))
            bbox = font.getbbox(str(self.opts.frag))
            tw = font.getlength(str(self.opts.frag))
            th = bbox[3] - bbox[1]
            tx = int((14 + 58 + 10) * self.scale) + (pw - tw) // 2
            ty = int((h_px - th) / 2) + bbox[1]
            self.draw.text((tx, ty), str(self.opts.frag), font=font,
                           fill=(255, 255, 255, 235))

        # 设置按钮（右）
        sp = asset("layouts/1080/topbar/top_button_settings.png") \
             or asset("layouts/1080/topbar/top_button.png")
        if sp:
            btn = Image.open(sp).convert("RGBA")
            bw2 = int(round(56 * self.scale))
            bh2 = int(round(btn.size[1] * bw2 / btn.size[0]))
            btn = btn.resize((bw2, bh2), Image.LANCZOS)
            self.canvas.alpha_composite(btn, (int(self.W - (14 + bw2) * self.scale),
                                              int((h_px - bh2) / 2)))


# ---------------------------------------------------------------------------
# CLI
# ---------------------------------------------------------------------------
def parse_args(argv=None):
    ap = argparse.ArgumentParser(
        description="Arcaea 结算界面模拟器（3100 布局 + 角色偏移算法）",
        formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    ap.add_argument("--char", default=None, help="角色立绘 PNG（用户传入）")
    ap.add_argument("--char-icon", dest="char_icon", default=None, help="角色头像 PNG")
    ap.add_argument("--char-id", type=int, default=0, help="角色 ID（决定偏移分档）")
    ap.add_argument("--no-partner", dest="partner", action="store_false",
                    help="按非搭档位计算偏移（默认搭档位）")
    ap.add_argument("--char-fit", default="contain",
                    choices=["contain", "fill", "cover", "none"],
                    help="立绘放进 1200x920 框的方式：contain 不变形；fill 拉伸；cover 裁切；none 原尺寸")
    ap.add_argument("--width", type=int, default=1280, help="画布宽度（像素）")
    ap.add_argument("--height", type=int, default=720, help="画布高度（像素）")
    ap.add_argument("--song", default="Sayonara Hatsukoi", help="曲名")
    ap.add_argument("--artist", default="REDSHiFT", help="曲师")
    ap.add_argument("--jacket", default=None, help="曲封图片（可选）")
    ap.add_argument("--score", type=int, default=9912345, help="当前分数")
    ap.add_argument("--past-score", type=int, default=None, help="过往分数（可选）")
    ap.add_argument("--score-diff", type=int, default=None, help="分数差（可选，如 450000）")
    ap.add_argument("--best", action="store_true", help="新纪录：高亮分数区块 + 分数青色阴影")
    ap.add_argument("--grade", default="ex", choices=list(GRADE_FILES),
                    help="评级：d/c/b/a/aa/ex/explus")
    ap.add_argument("--clear", default="full", choices=list(CLEAR_FILES),
                    help="通关类型：normal/full/pure/fail/hard/easy")
    ap.add_argument("--difficulty", default="ftr",
                    choices=list(DIFFICULTIES), help="难度：pst/prs/ftr/byd/etr")
    ap.add_argument("--difficulty-color", default=None, metavar="RRGGBB",
                    help="难度文字/描边颜色覆盖，如 FF6666")
    ap.add_argument("--level", default=12.0, type=float, help="难度等级（如 12 或 12.5）")
    ap.add_argument("--combo", type=int, default=None, help="最大连击（默认 pure+far）")
    ap.add_argument("--pure", type=int, default=1765, help="Pure 数")
    ap.add_argument("--far", type=int, default=24, help="Far 数")
    ap.add_argument("--lost", type=int, default=0, help="Lost 数")
    ap.add_argument("--shining", type=int, default=None, help="回忆率溢出 Pure 数（显示 +N）")
    ap.add_argument("--late", type=int, default=None, help="Late 数（显示 L.. E..）")
    ap.add_argument("--early", type=int, default=None, help="Early 数")
    ap.add_argument("--frag", type=int, default=24, help="顶栏碎片数")
    ap.add_argument("--time", type=float, default=0.8,
                    help="入场动画时刻 0~0.8 秒（0=初始 0.8=完成）")
    ap.add_argument("--beyond", action="store_true", help="显示 BEYOND 结算附加面板")
    ap.add_argument("--not-saved", dest="not_saved", action="store_true",
                    help="显示 NOT SAVED 提示")
    ap.add_argument("--no-background", dest="no_background", action="store_true",
                    help="不铺 bg_light 底图（透明背景）")
    ap.add_argument("--no-topbar", dest="no_topbar", action="store_true",
                    help="不绘制顶栏")
    ap.add_argument("--out", default="results.png", help="输出 PNG 路径")
    ap.add_argument("-v", "--verbose", action="store_true", help="打印角色偏移信息")
    return ap.parse_args(argv)


def main(argv=None):
    opts = parse_args(argv)
    if opts.combo is None:
        opts.combo = opts.pure + opts.far
    r = ResultsRenderer(opts)
    img = r.render()
    out = opts.out
    if not out.lower().endswith(".png"):
        out += ".png"
    img.convert("RGB").save(out)
    print("saved %s (%dx%d, 可见 %.0fx%.0f 设计单位)" % (out, r.W, r.H, r.vis_w, r.vis_h))
    return 0


if __name__ == "__main__":
    sys.exit(main())
