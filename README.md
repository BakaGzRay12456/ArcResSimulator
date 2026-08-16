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

- 默认 csb2csd：`/Users/wangjingkai/Documents/GitHub/csb2csd`
- 默认 Assets6：`/Users/wangjingkai/Desktop/Arcaea/Assets/Assets6`

三个结算 CSB 的加载点（IDA 逆向确认）：
- `GameResultScene::init` → `layouts/results/Results.csb`
- `GameResultScene::setupResultUI` → `layouts/results/Results.csb`
- `GameResultScene::init`（多人） → `layouts/multiplayer/MultiplayerResultsContent.csb`

## 资源收集

```bash
python3 collect_assets.py [Assets6目录]
```

资源清单覆盖：
1. 三个 CSD 里 `Path=` 引用的全部文件（Results 31 个、CourseMode 21 个、MP 28 个）
2. 源码（IDA）引用但 CSB 没有的文件：曲封阴影、评级图、通关图、clear_type、多人按钮、CJK 兜底字体等

## 角色立绘

- 布局里角色节点 `character` 默认贴图 `startup/1080/char_h.png`（会被替换）
- 模拟器使用用户传入的 `char.png`（立绘）与 `char_icon.png`（头像）
- 偏移算法见 `ida_dump/Character_getResultsOffset.c` 与 `getResultsOffset.c`：
  结算界面角色不是居中放，而是根据屏幕比例算一个横向偏移
  （详见 `ida_dump/Character_getResultsOffset.c` 注释）

## 屏幕比例

模拟器渲染视口（画布）比例可自定义，布局以 1280x720 为设计基准，
宽高比变化时按游戏逻辑重新计算角色偏移与缩放。
