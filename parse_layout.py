#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
parse_layout.py —— 把 csb2csd 输出的 .csd（XML）解析成节点树
==========================================================================
.cs/.csb 里的 UI 树本质是一个 XML 化的节点层级。每个节点是 AbstractNodeData，
ctype 决定类型（SpriteObjectData / TextObjectData / ImageViewObjectData /
ButtonObjectData / SingleNodeObjectData / GameNodeObjectData）。

本模块把 CSD 解析为 dict 树并保留渲染顺序（= 子节点顺序），供
arc_res_simulator.py 直接使用。同时提供 CLI 输出 layout/Results.json 方便调试。

坐标约定（与 Cocos 一致）：
- 位置/尺寸单位为「设计单位」，基准设计分辨率 1280x720，原点在左下角
- Position 是节点锚点在父节点坐标系里的位置
- AnchorPoint 是 (0..1) 的归一化锚点；绘制时
  top_left = pos - (anchor.x*width, anchor.y*height)
"""
import json
import sys
import xml.etree.ElementTree as ET

# ctype → 可读类型
CTYPE = {
    "GameNodeObjectData": "Layer",
    "SingleNodeObjectData": "Node",
    "SpriteObjectData": "Sprite",
    "ImageViewObjectData": "ImageView",
    "ButtonObjectData": "Button",
    "TextObjectData": "Text",
    "TextBMFontObjectData": "BMFont",
    "ParticleObjectData": "Particle",
    "ScrollViewObjectData": "ScrollView",
    "ListViewObjectData": "ListView",
    "LoadingBarObjectData": "LoadingBar",
    "SliderObjectData": "Slider",
    "LayoutObjectData": "Layout",
}


def _pt(elem):
    """Position 用 X/Y，Scale/AnchorPoint 用 ScaleX/ScaleY，两个都兼容。"""
    if elem is None:
        return (0.0, 0.0)
    return (float(elem.get("X", elem.get("ScaleX", 0.0))),
            float(elem.get("Y", elem.get("ScaleY", 0.0))))


def _scale_of(elem):
    """Cocos 节点默认 Scale=1；CSD 省略 <Scale> 时按 1 处理。"""
    se = _child(elem, "Scale")
    if se is None:
        return (1.0, 1.0)
    return (float(se.get("ScaleX", 1.0)), float(se.get("ScaleY", 1.0)))


def _child(elem, name):
    if elem is None:
        return None
    return elem.find(name)


def _color(elem, default=(255, 255, 255, 255)):
    if elem is None:
        return default
    return (int(elem.get("R", 255)), int(elem.get("G", 255)),
            int(elem.get("B", 255)), int(elem.get("A", 255)))


def parse_node(elem):
    """把单个 <AbstractNodeData> 解析成 dict（含 children）。"""
    a = elem.attrib
    node = {
        "name": a.get("Name", ""),
        "ctype": a.get("ctype", ""),
        "type": CTYPE.get(a.get("ctype", ""), a.get("ctype", "")),
        "action_tag": int(a.get("ActionTag", 0)),
        "visible": a.get("Visible", "True") != "False",
        "alpha": float(a.get("Alpha", 255)),
        "rotation": (float(a.get("RotationSkewX", 0)), float(a.get("RotationSkewY", 0))),
        "position": _pt(_child(elem, "Position")),
        "anchor": _pt(_child(elem, "AnchorPoint")),
        # Cocos 默认缩放为 1（CSD 里省略 <Scale> 的节点，如根 Layer，Scale=1）
        "scale": _scale_of(elem),
        "size": _pt(_child(elem, "Size")),
        "color": _color(_child(elem, "CColor")),
        "flip": (a.get("FlipX", "False") == "True", a.get("FlipY", "False") == "True"),
        "touch_enable": a.get("TouchEnable", "False") == "True",
        "children": [],
    }
    # 图片类
    fd = _child(elem, "FileData")
    if fd is not None:
        node["file"] = fd.get("Path", "")
    nd = _child(elem, "NormalFileData")
    if nd is not None:
        node["normal_file"] = nd.get("Path", "")
    pd = _child(elem, "PressedFileData")
    if pd is not None:
        node["pressed_file"] = pd.get("Path", "")
    dd = _child(elem, "DisabledFileData")
    if dd is not None:
        node["disabled_file"] = dd.get("Path", "")
    # 文本类
    if node["type"] == "Text":
        node["font_size"] = float(a.get("FontSize", 20))
        node["text"] = a.get("LabelText", "")
        node["halign"] = a.get("HorizontalAlignmentType", "")
        node["valign"] = a.get("VerticalAlignmentType", "")
        fr = _child(elem, "FontResource")
        if fr is not None:
            node["font"] = fr.get("Path", "")
        node["outline_enabled"] = a.get("OutlineEnabled", "False") == "True"
        node["outline_size"] = float(a.get("OutlineSize", 0))
        node["shadow_enabled"] = a.get("ShadowEnabled", "False") == "True"
        node["shadow_offset"] = (float(a.get("ShadowOffsetX", 0)), float(a.get("ShadowOffsetY", 0)))
        node["outline_color"] = _color(_child(elem, "OutlineColor"))
        node["shadow_color"] = _color(_child(elem, "ShadowColor"))
    # 按钮文本
    bt = _child(elem, "ButtonText")
    if bt is not None:
        node["button_text"] = bt.get("Text", "")
    tc = _child(elem, "TextColor")
    if tc is not None:
        node["text_color"] = _color(tc)

    ch = _child(elem, "Children")
    if ch is not None:
        for c in ch:
            node["children"].append(parse_node(c))
    return node


def load_csd(path):
    """解析 CSD 文件，返回根节点 dict（渲染顺序 = children 顺序）。"""
    tree = ET.parse(path)
    root = tree.getroot()
    inner = root.find("Content").find("Content")
    layer = inner.find("ObjectData")
    return parse_node(layer)


def find(node, name):
    """按名字在树里找节点（深度优先，返回第一个匹配）。"""
    if node["name"] == name:
        return node
    for c in node["children"]:
        r = find(c, name)
        if r is not None:
            return r
    return None


def find_all(node, name, out=None):
    if out is None:
        out = []
    if node["name"] == name:
        out.append(node)
    for c in node["children"]:
        find_all(c, name, out)
    return out


def dump_tree(node, depth=0, out=None):
    """文本转储节点树（与 nodes_dump.txt 同风格）。"""
    if out is None:
        out = []
    pos = node["position"]
    sc = node["scale"]
    an = node["anchor"]
    sz = node["size"]
    extra = ""
    if node["type"] == "Text":
        extra = f" text={node.get('text', '')!r} size={node.get('font_size', '')}"
    if "file" in node:
        extra += f" file={node['file']}"
    out.append(f"{'  '*depth}{node['name']} [{node['type']}] "
               f"pos=({pos[0]:.3f},{pos[1]:.3f}) scale=({sc[0]:.3f},{sc[1]:.3f}) "
               f"anchor=({an[0]:.3f},{an[1]:.3f}) size=({sz[0]:.3f},{sz[1]:.3f}) "
               f"alpha={node['alpha']:.0f} vis={node['visible']}{extra}")
    for c in node["children"]:
        dump_tree(c, depth + 1, out)
    return out


def main():
    src = sys.argv[1] if len(sys.argv) > 1 else "layout/Results.csd"
    out = sys.argv[2] if len(sys.argv) > 2 else "layout/Results.json"
    root = load_csd(src)
    with open(out, "w", encoding="utf-8") as f:
        json.dump(root, f, ensure_ascii=False, indent=1)
    print(f"parsed {src} -> {out}")
    for line in dump_tree(root):
        print(line)


if __name__ == "__main__":
    main()
