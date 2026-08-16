#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Render comparison artefacts for an ArcResSimulator result and an official screenshot.

The simulator intentionally accepts user-provided jacket/character artwork, so a full-frame
pixel score is not meaningful. This utility writes visual comparison sheets and reports the
MAE on static UI regions only (top bar, title banner, left difficulty strip, score panel).
"""
import argparse
import os
from pathlib import Path

from PIL import Image, ImageChops, ImageDraw, ImageStat

# Coordinates are normalized from the official 1280x894 iPad reference.  The character and
# jacket are deliberately excluded from the metric because they are user supplied.
STATIC_UI_REGIONS = (
    (0, 0, 1280, 92),       # TopBar
    (0, 145, 980, 270),     # title / artist banner (right edge is normally character art)
    (0, 270, 430, 355),     # difficulty / max-recall strip
    (430, 355, 900, 710),   # score card core; avoids its character-overlap right edge
)


def scaled_regions(size):
    sx, sy = size[0] / 1280.0, size[1] / 894.0
    return tuple(tuple(int(round(v * (sx if i % 2 == 0 else sy)))
                       for i, v in enumerate(region))
                 for region in STATIC_UI_REGIONS)


def image_metric(reference, candidate, regions):
    values = []
    for box in regions:
        diff = ImageChops.difference(reference.crop(box), candidate.crop(box))
        values.extend(ImageStat.Stat(diff).mean[:3])
    return sum(values) / len(values) if values else 0.0


def mark_regions(image, regions):
    out = image.copy()
    draw = ImageDraw.Draw(out)
    for box in regions:
        draw.rectangle(box, outline=(80, 255, 230, 255), width=max(1, image.width // 640))
    return out


def main():
    ap = argparse.ArgumentParser(description="生成模拟器与官方参考的对比图")
    ap.add_argument("reference", help="官方参考 PNG")
    ap.add_argument("candidate", help="ArcResSimulator 输出 PNG")
    ap.add_argument("--out-dir", default="compare", help="产物目录")
    args = ap.parse_args()

    ref = Image.open(args.reference).convert("RGBA")
    cur = Image.open(args.candidate).convert("RGBA")
    if cur.size != ref.size:
        cur = cur.resize(ref.size, Image.LANCZOS)

    out_dir = Path(args.out_dir)
    out_dir.mkdir(parents=True, exist_ok=True)
    regions = scaled_regions(ref.size)
    metric = image_metric(ref, cur, regions)

    side = Image.new("RGBA", (ref.width * 2, ref.height), (0, 0, 0, 255))
    side.alpha_composite(mark_regions(ref, regions), (0, 0))
    side.alpha_composite(mark_regions(cur, regions), (ref.width, 0))
    side.convert("RGB").save(out_dir / "side_by_side.png")

    Image.blend(ref, cur, 0.5).convert("RGB").save(out_dir / "overlay.png")
    # Amplify the difference only for inspection; this is not a pass/fail bitmap.
    diff = ImageChops.difference(ref, cur).convert("RGB").point(lambda v: min(255, v * 2))
    diff.save(out_dir / "difference_x2.png")

    names = ("topbar", "banner", "difficulty", "score_core")
    for name, box in zip(names, regions):
        crop = Image.new("RGBA", ((box[2] - box[0]) * 2, box[3] - box[1]), (0, 0, 0, 255))
        crop.alpha_composite(ref.crop(box), (0, 0))
        crop.alpha_composite(cur.crop(box), (box[2] - box[0], 0))
        crop.convert("RGB").save(out_dir / f"{name}.png")

    report = out_dir / "report.txt"
    report.write_text(
        "static-ui mean absolute RGB difference: %.2f / 255\n"
        "regions: %s\n"
        "Left = official reference; right = simulator.\n"
        "Jacket and character art are excluded from the metric because they are user supplied.\n"
        % (metric, regions), encoding="utf-8")
    print("saved %s (static-ui MAE %.2f / 255)" % (out_dir, metric))


if __name__ == "__main__":
    main()
