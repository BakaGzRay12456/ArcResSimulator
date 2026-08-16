#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
convert_layouts.py —— 用 csb2csd 把结算界面的 CSB 反编译成 CSD（参考项目：https://github.com/DavidFeng/csb2csd）
用法: python3 convert_layouts.py [csb2csd 目录] [Assets6 根目录]
默认:  csb2csd=/Users/wangjingkai/Documents/GitHub/csb2csd
       Assets6=/Users/wangjingkai/Desktop/Arcaea/Assets/Assets6
产物:  layout/*.csd（Results / Results_CourseMode / MultiplayerResultsContent）
"""
import os, subprocess, sys, re, tempfile

DEFAULT_CSB2CSD = "/Users/wangjingkai/Documents/GitHub/csb2csd"
DEFAULT_ASSETS6 = "/Users/wangjingkai/Desktop/Arcaea/Assets/Assets6"
HERE = os.path.dirname(os.path.abspath(__file__))
LAYOUT_DIR = os.path.join(HERE, "layout")

# 结算界面相关的 CSB（源码里 GameResultScene::init / setupResultUI 加载的）
LAYOUTS = [
    "layouts/results/Results.csb",
    "layouts/results/Results_CourseMode.csb",
    "layouts/multiplayer/MultiplayerResultsContent.csb",
    "layouts/topbar/TopBar.csb",
]

def main():
    csb2csd = sys.argv[1] if len(sys.argv) > 1 else DEFAULT_CSB2CSD
    assets6 = sys.argv[2] if len(sys.argv) > 2 else DEFAULT_ASSETS6
    convert_py = os.path.join(csb2csd, "convert.py")
    if not os.path.isfile(convert_py):
        sys.exit(f"找不到 csb2csd/convert.py: {convert_py}")

    os.makedirs(LAYOUT_DIR, exist_ok=True)
    for rel in LAYOUTS:
        src = os.path.join(assets6, rel)
        if not os.path.isfile(src):
            print(f"!! 跳过（源文件不存在）: {src}")
            continue
        out = os.path.join(LAYOUT_DIR, os.path.basename(rel).replace(".csb", ".csd"))
        # csb2csd 会生成随机 ID，直接在 layout/ 里再跑一次即可
        r = subprocess.run([sys.executable, convert_py, src, out], capture_output=True, text=True)
        if r.returncode != 0:
            print(f"!! 转换失败: {rel}\n{r.stderr}")
        else:
            print(f"ok: {rel} -> {os.path.relpath(out, HERE)}")

    print("\n完成。可继续用 collect_assets.py 校验资源覆盖。")

if __name__ == "__main__":
    main()
