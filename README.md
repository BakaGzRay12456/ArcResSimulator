# ArcResSimulator

Arcaea 结算界面（Results）模拟器项目。把游戏结算界面的 CSB 布局、资源、以及 IDA 逆向的初始化逻辑整理成一份可复现的工程。

## 目录结构

```
ArcResSimulator/
├── assets/                 # 从 Assets6 拷出的结算界面用到的资源
│   ├── Default/  Fonts/  img/  layouts/  startup/
├── layout/
│   ├── Results.csd                 # 主结算界面（源码 GameResultScene 加载 layouts/results/Results.csb）
│   ├── Results_CourseMode.csd      # 结算界面课程模式（Results_CourseMode.csb）
│   ├── MultiplayerResultsContent.csd # 多人结算内容（MultiplayerResultsContent.csb）
│   └── nodes_dump.txt              # 节点树转储（供手写渲染器参考）
├── ida_dump/               # IDA 反编译的关键函数
│   ├── GameResultScene_init.c          # 结算场景初始化（加载 CSB、设置字号、角色等）
│   ├── GameResultScene_setupResultUI.c # 结算 UI 组装（成绩、评级、曲封、角色立绘）
│   ├── Character_init.c                # 角色节点初始化
│   ├── Character_getResultsOffset.c    # 角色立绘在结算界面的偏移计算
│   ├── Character_getCenterScreenOffset.c
│   ├── getResultsOffset.c / getSpriteFilename.c / getImagePathForGrade.c
│   └── updateCharacterStatsFromJson.c
├── convert_layouts.py      # 用 csb2csd 把 CSB 反编译成 CSD 的一键脚本
└── collect_assets.py       # 把 CSB/代码引用到的资源拷进 assets/
```

## 布局来源（CSB → CSD）

`layout/*.csd` 由参考项目 [csb2csd](https://github.com/DavidFeng/csb2csd)（Python + flatbuffers 实现）
把官方 `*.csb` 反编译得到：

```bash
python3 convert_layouts.py [csb2csd目录] [Assets6目录]
```

- 默认 csb2csd：`/Users/啊啊啊啊啊啊啊我是钩子/Documents/GitHub/csb2csd`
- 默认 Assets6：`/Users/啊啊啊啊啊啊啊我是钩子/Desktop/Arcaea/Assets/Assets6`

三个结算 CSB 的加载点（IDA 逆向确认）：
- `GameResultScene::init` → `layouts/results/Results.csb`
- `GameResultScene::setupResultUI` → `layouts/results/Results.csb`
- `GameResultScene::init`（多人） → `layouts/multiplayer/MultiplayerResultsContent.csb`

## 资源收集

```bash
python3 collect_assets.py [Assets6目录]
```

资源清单覆盖：
1. 三个 CSD 里 `Path=` 引用的全部文件（Results 31 个、CourseMode 21 个、MP 44 个，含 grade/mini 评级与 tag-difficulty 难度标）
2. 源码（IDA）引用但 CSB 没有的文件：曲封阴影、评级图、通关图、clear_type、多人按钮、CJK 兜底字体等

## 三种模式

```bash
python3 arc_res_simulator.py --mode single       # 默认：单人结算
python3 arc_res_simulator.py --mode course       # 课程模式结算（--progress/--condition-* 覆盖进度与条件）
python3 arc_res_simulator.py --mode multiplayer  # 多人结算（4 张玩家卡）
```

多人结算 = `Results.csd` 底层（成绩面板、曲封、分数、按钮，与单人同一棵树）
+ `MultiplayerResultsContent.csd` 玩家卡覆盖树 + 顶栏 + 左下 Continue 返回按钮
（IDA：GameResultScene::init 同时加载两个 CSB，`TopBar::create` 无条件调用；
多人分支把 `retryButton`/`retryText` setOpacity(0)，并新建 btn-back-onlinealt 按钮）。

多人结算默认四席玩家数据，可用 `--mp-json` 整体覆盖（数组元素字段：
name/score/grade/clear/diff/you/pure/far/lost/early/late/lifebar/icon）：

```bash
python3 arc_res_simulator.py --mode multiplayer --mp-json '[{"name":"Hikari","score":9900000,"grade":"ex","clear":"pure","diff":"ftr","you":true,"pure":1200,"far":5,"lost":0,"early":1,"late":2,"lifebar":"100%","icon":"/path/to/char_icon.png"}, ...]'
```

其他参数：`--partner-name` 顶栏搭档名、`--no-topbar`、`--time 0~0.8` 入场动画、
`--char-fit contain/fill/cover/none` 立绘适配方式等（默认 `contain`：等比缩放）。

## 角色立绘

- 布局里角色节点 `character` 默认贴图 `startup/1080/char_h.png`（会被替换）
- 模拟器使用用户传入的 `char.png`（立绘）与 `char_icon.png`（头像）
- 立绘**等比缩放**：默认 `--char-fit contain`，按原图宽高比缩放到
  `character` 节点 1200×920 内容盒内（不变形、不裁切，锚点 (0,1)
  = 左上角，节点位置对齐立绘顶部，主体向下延伸，右侧/下方被屏幕裁掉
  与游戏一致）；`fill` 会拉伸铺满（不推荐，会变形），`cover` 等比裁切铺满，
  `none` 保持原尺寸。
- 偏移算法见 `ida_dump/Character_getResultsOffset.c` 与 `getResultsOffset.c`：
  3100 的 `Character::getResultsOffset` / `getCenterScreenOffset` 按角色 ID
  分档给出横向/纵向偏移；**社区投稿预览统一使用 default 分支 (0, 0)**
  （`character_offset.USE_DEFAULT_OFFSET = True`），避免未知新角色错位。
  角色仍保留 setupResultUI 的通用定位：CSB 位置 + (-120, 0)，更方屏幕上
  最多向下平移 100 设计单位，入场动画结束后 x 再 -200（MoveBy）。

## 内嵌动画（CSB Timeline）

三个结算 CSB 里 `Results.csb` 内嵌了入场动画（`<Animation Duration="180">`），
CourseMode / 多人内容树为静态（Duration=0）。游戏会播放该动画，因此模拟器
按用户指示「直接跑动画结束」：解析 `<Timeline>` 关键帧，每个属性取**最后一个
关键帧**作为节点最终状态（`parse_layout.parse_animation_end`），再参与渲染：

- `gradeImage`：静态 Scale 3.0（动画起帧）→ 结束 0.8
- `clearTypeImage`：静态 Scale 1.6 → 结束 0.7
- `hpNode` / `songImage`：x 左移约 59（曲封从 (90,452) → (31.3,452)）
- PURE/FAR/LOST 计数、MAX COMBO、旧分数/分差：位置左移 + FadeIn 到 255

`layout/nodes_dump.txt` 里被动画改动的节点带 `anim_end=` 标记。

## 3100 布局与 Assets6 纹理尺寸

3100 本身**没有** 5.x/6.x 才出现的 `/1080/`、`1080_` 资源管理模式。
但是 3100、6.3/Arc-mobile 的 Results/TopBar CSD 节点几何基本一致：这里借用
后者只确认布局，不把后者的内容资源或版本逻辑当成 3100 内容。

本项目资源来自 Assets6。630/Arc-mobile 的 `Texture2D::initWithImage` 会在
纹理路径含 `/1080/` 或 `1080_` 时把 **Sprite 的纹理 contentSize** 乘
`0.66666666667`。模拟器只在绘制 `SpriteObjectData` 时模拟这一步；
`ImageView`/`Button` 仍使用 CSD 明确的 `<Size>` 和 `<Scale>`，避免重复缩放。
因此 `res_scoresection` 的原始 691x394 会显示为约 461x263，而结算布局的
坐标仍是 CSD 的 1280x720 设计坐标。用户传入的 `char.png`/`char_icon.png`
不按文件名套用该规则。

## 屏幕比例

模拟器渲染视口（画布）比例可自定义，布局以 1280x720 为设计基准，
宽高比变化时按游戏逻辑重新计算角色偏移与缩放。

## BEYOND 结算面板

`--beyond` 显示 BEYOND 结算附加面板（Performance / Partner / Affinity /
Frag Boost / TOTAL）。CSD 里该节点默认 `Visible=False` 且位于不透明成绩卡
（scoreSection）之前，游戏运行时才打开；模拟器在 `--beyond` 时强制显示，
并延后到成绩卡之后绘制（否则会被完全盖住）。左下角按钮在 BEYOND 模式下
由 Back 换成 Continue（beyond_back_button.png）。面板数值可用以下参数覆盖：

```bash
python3 arc_res_simulator.py --beyond \
    --beyond-performance '6.16%' --beyond-partner 'x 1.0' \
    --beyond-affinity 'x 1.0' --beyond-fragboost 'x 1.0' --beyond-total '61.6%'
```

旋转节点（如 BEYOND 面板的 45° 菱形 `scaled_and_rotated_pixel`）按 Cocos
旋转语义渲染（设计坐标 y 向上，正角逆时针，映射到 Pillow y 向下后取反）。

## 课程模式进度滑块

课程模式结算左侧有进度竖条（`progress_line`，设计坐标底 y=134、高 446）与
菱形标记（`progress_diamond`）。模拟器按 `--progress/--progress-total` 计算
进度比例 `r`：滑块高度 = 446·r（底固定，顶随进度上移）；菱形标记从 CSD 默认
位置（= 满进度，顶 y=659）下移 (1−r)·446，x 不变。满进度时与 CSD 默认布局
逐像素一致（无 IDA 依据，属合理视觉推断）。

```bash
python3 arc_res_simulator.py --mode course --progress 2 --progress-total 4
```

## NOT SAVED 覆盖条

结算成绩未保存时游戏会显示黑色半透明横条 + 白字红边 "NOT SAVED"
（`notsaved_back` 1×1 white.png 缩放 200×25、CColor 黑、alpha 204；
`notsaved_text` Outline 红色）。CSD 里两者默认 `Visible=False`，用 `--notsaved`
强制显示：

```bash
python3 arc_res_simulator.py --notsaved
```

## 搭档位

`--partner`（默认）按搭档位计算立绘偏移；`--no-partner` 按非搭档位
（IDA 中非搭档位会有一档 x 偏移被压成 0）。`--partner` 为显式参数，
避免被 argparse 缩写匹配到 `--partner-name`。
