#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
collect_assets.py —— 把结算界面用到的资源从 Assets6 拷进 ArcResSimulator/assets/
用法: python3 collect_assets.py [资源根目录]
默认资源根目录: /Users/wangjingkai/Desktop/Arcaea/Assets/Assets6
"""
import os, shutil, sys

ASSETS6 = "/Users/wangjingkai/Desktop/Arcaea/Assets/Assets6"

# ---------------------------------------------------------------
# 资源清单
# 1) Results.csd 里实际引用的路径（含按钮/文字/图片）
# 2) MP / TopBar CSD 引用（多人结算、顶栏，可选但一起打包）
# 3) 代码引用但 CSB 里没有的（曲封阴影、评级、通关、多人按钮等）
# ---------------------------------------------------------------
RESULTS_CSB = [
    "Default/Button_Disable.png", "Default/ImageFile.png",
    "Fonts/Exo-Medium.ttf", "Fonts/Exo-Regular.ttf", "Fonts/GeosansLight.ttf",
    "Fonts/L2-Regular.ttf", "Fonts/L2-Semibold.ttf",
    "img/clear_normal.png", "img/grade_ex.png", "img/white.png",
    "layouts/1080/breached/results/disabled-stat.png",
    "layouts/1080/results/back.png", "layouts/1080/results/back_pressed.png",
    "layouts/1080/results/far-count.png", "layouts/1080/results/lost-count.png",
    "layouts/1080/results/max-recall-byd.png",
    "layouts/1080/results/max-recall-etr.png",
    "layouts/1080/results/max-recall-ftr.png",
    "layouts/1080/results/max-recall-prs.png",
    "layouts/1080/results/max-recall-pst.png",
    "layouts/1080/results/mid_button.png",
    "layouts/1080/results/mid_button_pressed.png",
    "layouts/1080/results/pure-count.png",
    "layouts/1080/results/res_banner.png",
    "layouts/1080/results/res_scoresection.png",
    "layouts/1080/results/res_scoresection_high.png",
    "layouts/1080/results/results_bg.png",
    "layouts/multiplayer/sticker_tray/sticker-button-pressed.png",
    "layouts/multiplayer/sticker_tray/sticker-button.png",
    "layouts/results/beyond_back_button.png",
    "layouts/results/beyond_back_button_pressed.png",
    "layouts/results/beyond_cool_line.png",
    "layouts/results/percentage_back.png",
    "layouts/results/res_scoresection_beyond.png",
    "startup/1080/char_h.png",           # 角色默认立绘（被用户 char.png 替换）
]

MP_CSB = [
    "Fonts/Exo-Medium.ttf", "Fonts/GeosansLight.ttf",
    "img/grade_diamond_back.png", "img/white.png",
    "layouts/1080/multiplayer/results/gauge-ez.png",
    "layouts/1080/multiplayer/results/gauge-normal.png",
    "layouts/1080/multiplayer/results/resultcard-extra_01.png",
    "layouts/1080/multiplayer/results/resultcard-extra_02.png",
    "layouts/1080/multiplayer/results/resultcard-extra_03.png",
    "layouts/1080/multiplayer/results/resultcard-extra_04.png",
    "layouts/multiplayer/explus.png", "layouts/multiplayer/pure.png",
    "layouts/multiplayer/unknown_icon.png",
    "layouts/multiplayer/ingame/V1/1-position.png",
    "layouts/multiplayer/ingame/V1/2-position.png",
    "layouts/multiplayer/ingame/V1/3-position.png",
    "layouts/multiplayer/ingame/V1/4-position.png",
    "layouts/multiplayer/results/PST_tag.png",
    "layouts/multiplayer/results/glow-bronze.png",
    "layouts/multiplayer/results/glow-gold.png",
    "layouts/multiplayer/results/glow-purple.png",
    "layouts/multiplayer/results/glow-silver.png",
    "layouts/multiplayer/results/result-leftrail.png",
    "layouts/multiplayer/results/resultcard_01.png",
    "layouts/multiplayer/results/resultcard_02.png",
    "layouts/multiplayer/results/resultcard_03.png",
    "layouts/multiplayer/results/resultcard_04.png",
    "layouts/multiplayer/results/you-tag.png",
]

COURSEMODE_CSB = [
    "Fonts/Exo-Regular.ttf", "Fonts/Exo-SemiBold.ttf",
    "layouts/1080/results/mid_button.png",
    "layouts/1080/results/mid_button_pressed.png",
    "layouts/1080/results/res_banner.png",
    "layouts/results/coursemode/banner.png",
    "layouts/results/coursemode/button-backing.png",
    "layouts/results/coursemode/button-pressed.png",
    "layouts/results/coursemode/button.png",
    "layouts/results/coursemode/condition-bottom-backing.png",
    "layouts/results/coursemode/condition-top-backing.png",
    "layouts/results/coursemode/prog-icon.png",
    "layouts/results/coursemode/prog-slider_backing.png",
    "layouts/results/coursemode/prog-slider_grad.png",
    "layouts/results/coursemode/score.png",
    "layouts/results/coursemode/side-rail.png",
    "layouts/results/coursemode/tag_course-progress.png",
]

TOPBAR_CSB = [
    "Default/Button_Disable.png",
    "Fonts/Exo-SemiBold.ttf", "Fonts/L2-Regular.ttf", "Fonts/L2-Semibold.ttf",
    "layouts/1080/topbar/fragstack-single.png",
    "layouts/1080/topbar/fragstack-singleplus.png",
    "layouts/1080/topbar/top_button.png",
    "layouts/1080/topbar/top_button_disable_solid.png",
    "layouts/1080/topbar/top_button_max.png",
    "layouts/1080/topbar/top_button_pressed.png",
    "layouts/1080/topbar/top_button_settings.png",
    "layouts/1080/topbar/top_button_special.png",
    "layouts/1080/topbar/top_button_special_pressed.png",
    "layouts/topbar/cloud_sync.png", "layouts/topbar/settings.png",
    "layouts/topbar/status_bg.png", "layouts/topbar/top_bar_bg.png",
]

CODE_REF = [
    "img/bg_light.jpg",                 # init 背景
    "img/jacket_shadow.png",            # 曲封阴影
    "img/clear_full.png", "img/clear_pure.png", "img/clear_fail.png",
    "img/grade/a.png", "img/grade/aa.png", "img/grade/b.png",
    "img/grade/c.png", "img/grade/d.png", "img/grade/ex.png",
    "img/grade/explus.png",
    "img/grade_diamond_back.png",
    "img/top_white_shadow.png",         # playtype 7/8 顶部阴影
    "img/multiplayer/btn-back-onlinealt-backing.png",
    "img/multiplayer/btn-back-onlinealt-pressed.png",
    "img/multiplayer/btn-back-onlinealt.png",
    "img/clear_type/easy.png", "img/clear_type/fail.png",
    "img/clear_type/full.png", "img/clear_type/hard.png",
    "img/clear_type/normal.png", "img/clear_type/pure.png",
    # CJK 兜底字体（中文曲名/曲师）
    "Fonts/NotoSansCJKsc-Regular.otf", "Fonts/NotoSansCJKsc-Bold.otf",
    "Fonts/L2-Light.ttf",
]

ALL = RESULTS_CSB + MP_CSB + COURSEMODE_CSB + TOPBAR_CSB + CODE_REF

def main():
    root = sys.argv[1] if len(sys.argv) > 1 else ASSETS6
    out = os.path.join(os.path.dirname(os.path.abspath(__file__)), "assets")
    ok, missing = 0, []
    for rel in ALL:
        src = os.path.join(root, rel)
        dst = os.path.join(out, rel)
        if not os.path.isfile(src):
            missing.append(rel)
            continue
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        shutil.copy2(src, dst)
        ok += 1
    print(f"copied {ok}/{len(ALL)} files -> {out}")
    if missing:
        print("MISSING:")
        for m in missing:
            print("  ", m)

if __name__ == "__main__":
    main()
