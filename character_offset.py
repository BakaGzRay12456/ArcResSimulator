#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Character::getResultsOffset / Character::getCenterScreenOffset 的忠实 Python 移植
=================================================================================
来源：IDA 反编译 `Character_getResultsOffset.c` / `Character_getCenterScreenOffset.c`
（Arcaea iOS 版 arm64 二进制）。

游戏里结算界面的角色立绘并不是简单地放在布局坐标上，而是：
    final_pos = CSB_position + (-120, 0) + getCenterScreenOffset() + getResultsOffset()
随后还会播放 0.8s 的 MoveBy(-200, 0) + FadeIn 出场动画（EaseCubicActionOut）。

关键修正（2026-08 反汇编验证）：
「按屏幕高度放大角色」是误读。3100.so 里 vtable 偏移 0xd8=setPositionY / 0xe0=getPositionY
（不是 setScale/getScale），0xa8=getPosition / 0x98=setPosition。setupResultUI 的
0xd3edb0-0xd3edc8 是：
    setPositionY(getPositionY() + (v43 / 240.0) * 100.0)   # v43 = clamp(visH-720, 0, 240)
所以更方/更高的屏幕上角色只是**往下平移**（最多 +100 设计单位），缩放恒为 1。
按钮则相反（GameResultScene_init，0x10f00f0 起）：y 减去 120*(v43/240)，即上移。

两个偏移函数都以「屏幕可见尺寸（设计单位，基准 1280x720）」为输入，
先算出一个「超出 720 的纵向余量」v8，再按角色 ID 分档给出横向/纵向偏移。
"""


def visible_delta(height: float) -> float:
    """IDA 中的 v8 = clamp(visibleHeight - 720, 0, 240)。

    游戏按 1280x720 设计基准；当设计坐标系下的可见高度 > 720 时（更方的屏幕，如 4:3），
    角色会额外往下平移（见 character_transform，不再缩放）。常见手机横屏
    （16:9 ~ 21:9，可见高度 ≤ 720）此项恒为 0。
    """
    if height <= 960.0:
        return max(height - 720.0, 0.0)
    return 240.0


def get_results_offset(char_id: int, is_partner: bool, width: float, height: float):
    """对应 Character::getResultsOffset (switch on *(this+3))。

    is_partner 对应反编译里的 v4 = *(this+145) && !*(this+146)
    （结算界面显示的是玩家选中的角色，通常是 is_partner=True）。
    返回 (x, y) 设计单位偏移。
    """
    v8 = visible_delta(height)
    x, y = 0.0, 0.0
    h720_w1280 = (height == 720.0 and width > 1280.0)

    if char_id == 0:
        # Hikari 系：y = (v8 / -240) * 80   （v44 = 0x42a00000 = 80.0）
        if is_partner:
            y = (v8 / -240.0) * 80.0
    elif char_id == 1:
        # Tairitsu 系：x = 70
        if is_partner:
            x = 70.0
    elif char_id == 0xB:  # 11
        if is_partner:
            x = 20.0 if h720_w1280 else 0.0
            y = (v8 / -240.0) * 90.0
    elif char_id == 0xC:  # 12
        if is_partner:
            x = 40.0
    elif char_id == 0x12:  # 18
        # y = 70 + (v8 / -240) * 70
        y = 70.0 + (v8 / -240.0) * 70.0
    elif char_id == 0x24:  # 36
        x = -40.0
    elif char_id == 0x27:  # 39
        x = 10.0
    elif char_id == 0x28:  # 40
        y = (v8 / 240.0) * 30.0
    elif char_id == 0x2A:  # 42
        if is_partner:
            # 默认 -20；仅当 h==720 且 w>1280 时为 0
            x = -20.0 if not h720_w1280 else 0.0
    elif char_id == 0x2D:  # 45
        if h720_w1280:
            x = 10.0
    elif char_id == 0x2F:  # 47
        x = 25.0
    elif char_id == 0x33:  # 51
        x = 40.0 if h720_w1280 else 20.0
    elif char_id == 0x34:  # 52
        x = 45.0
    elif char_id == 0x63:  # 99
        x, y = 60.0, 30.0
    # default: (0, 0)
    return (x, y)


def get_center_screen_offset(char_id: int, is_partner: bool, width: float, height: float):
    """对应 Character::getCenterScreenOffset (switch on *(this+12))。

    注意反编译里 LABEL_21 的 _ZF = !v3：非 partner 时才用 v6 覆盖 v7，
    即「搭档位」角色很多档位的 x 偏移会被压成 0。
    返回 (x, y) 设计单位偏移。
    """
    v8 = visible_delta(height)
    p = is_partner
    h720_w1280 = (height == 720.0 and width > 1280.0)

    if char_id == 0:
        return (160.0, 0.0) if not p else (0.0, 0.0)
    if char_id == 1:
        return (110.0, 0.0) if not p else (0.0, 0.0)
    if char_id == 2:
        x = 100.0 if p else 110.0
        y = 50.0 + (v8 / -240.0) * 40.0 if p else 0.0
        return (x, y)
    if char_id == 4:
        x = 0.0 if p else 110.0
        y = 20.0 if p else 0.0
        return (x, y)
    if char_id in (8, 0xF, 0x21):
        return (90.0, 0.0)
    if char_id in (9, 0x15, 0x17):
        return (120.0, 0.0)
    if char_id == 0xB:  # 11
        if p:
            x = 130.0 if (height != 720.0 or width <= 1280.0) else 150.0
            return (x, 50.0)
        return (110.0, 0.0)
    if char_id == 0xC:  # 12
        if p:
            return (0.0, 50.0)
        return (40.0, 0.0)
    if char_id == 0xD:  # 13
        # v6=110, v7=30; 非 partner 时 v7=v6
        return (110.0, 0.0) if not p else (30.0, 0.0)
    if char_id == 0xE:  # 14
        return (125.0, 0.0)
    if char_id == 0x12:  # 18
        return (65.0, 0.0)
    if char_id == 0x14:  # 20
        return (130.0, 0.0)
    if char_id in (0x18, 0x1C):  # 24, 28
        return (0.0, 0.0)
    if char_id == 0x1D:  # 29
        return (70.0, 0.0)
    if char_id == 0x1E:  # 30
        return (160.0, 100.0)
    if char_id == 0x23:  # 35
        # y = 120 + (v8 / -240) * 50, x 保持 0
        return (0.0, 120.0 + (v8 / -240.0) * 50.0)
    if char_id == 0x24:  # 36
        # y = 120 + (v8 / -240) * 30, x 保持 0
        return (0.0, 120.0 + (v8 / -240.0) * 30.0)
    if char_id == 0x25:  # 37
        return (30.0, -30.0)
    if char_id == 0x26:  # 38
        return (-30.0, 0.0)
    if char_id == 0x27:  # 39
        return (0.0, 75.0 + (v8 / -240.0) * 35.0)
    if char_id == 0x28:  # 40
        return (110.0, (v8 / -240.0) * 30.0)
    if char_id == 0x2A:  # 42
        if not p:
            return (50.0, -20.0)
        x = 40.0 if (height != 720.0 or width <= 1280.0) else 70.0
        return (x, 20.0)
    if char_id == 0x2B:  # 43
        return (70.0 if p else 110.0, 0.0)
    if char_id == 0x2C:  # 44
        return (180.0, 0.0)
    if char_id == 0x2D:  # 45
        return (-30.0, 10.0)
    if char_id == 0x32:  # 50
        return (-20.0, 0.0)
    if char_id == 0x33:  # 51
        return (20.0, 0.0)
    if char_id == 0x34:  # 52
        return (50.0, 0.0)
    return (110.0, 0.0)  # default


def character_transform(char_id: int, is_partner: bool, width: float, height: float,
                        base_pos=(750.0, 670.031982), base_scale=1.0):
    """结算界面角色节点的完整变换（setupResultUI 逻辑，3100.so 反汇编验证）。

    - setPositionY(getPositionY() + (v8/240)*100)：y 方向下移（v8 见 visible_delta）
    - pos    = CSB_position + (-120, 0) + centerScreenOffset + resultsOffset
    - scale 恒为 base_scale（1.0）——不存在按屏幕高度放大
    - 入场动画：0.8s FadeIn(0→255) + MoveBy(-200, 0)（EaseCubicActionOut，Spawn）
    """
    v8 = visible_delta(height)
    cx, cy = get_center_screen_offset(char_id, is_partner, width, height)
    rx, ry = get_results_offset(char_id, is_partner, width, height)
    px = base_pos[0] + (-120.0) + cx + rx
    py = base_pos[1] + (v8 / 240.0) * 100.0 + cy + ry
    return {
        "scale": base_scale,
        "pos": (px, py),
        "move_delta": (-200.0, 0.0),   # MoveBy，0.8s ease-out
        "center_offset": (cx, cy),
        "results_offset": (rx, ry),
    }


if __name__ == "__main__":
    print("角色偏移表（is_partner=True，结算界面场景）：")
    print(f"{'char':>4} {'w×h':>12} {'center':>12} {'results':>12} {'scale':>6} {'pos':>16}")
    for cid in (0, 1, 11, 12, 18, 36, 39, 40, 42, 45, 47, 51, 52, 99):
        for (w, h) in ((1280, 720), (1280, 853), (1280, 960), (1280, 1280)):
            t = character_transform(cid, True, w, h)
            print(f"{cid:>4} {f'{w}×{h}':>12} "
                  f"{str(t['center_offset']):>12} {str(t['results_offset']):>12} "
                  f"{t['scale']:>6.3f} ({t['pos'][0]:>7.1f},{t['pos'][1]:>6.1f})")
