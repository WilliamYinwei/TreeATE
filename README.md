[![Github issues](https://img.shields.io/github/issues/WilliamYinwei/TreeATE)](https://github.com/WilliamYinwei/TreeATE/issues)
[![Github release (latest SemVer)](https://img.shields.io/github/v/release/WilliamYinwei/TreeATE)](https://github.com/WilliamYinwei/TreeATE/releases/latest)
[![Github All Releases](https://img.shields.io/github/downloads/WilliamYinwei/TreeATE/total)](https://github.com/WilliamYinwei/TreeATE/releases)

# TreeATE

> TreeATE 是 Tree Automatic Test Equipment 的缩写，是面向工厂成品与半成品测试自动化的开源软件工具平台。基于 Qt 与多进程架构，为产线提供统一、简单、稳定的测试人机交互界面。
>
> **详情请访问 www.treeate.top**

## 目录

1. [项目简介](#1-项目简介)
2. [v3.1.0 版本亮点](#2-v310-版本亮点)
3. [功能特性](#3-功能特性)
4. [界面组成](#4-界面组成)
5. [快速开始](#5-快速开始)
6. [测试状态说明](#6-测试状态说明)
7. [主题与语言](#7-主题与语言)
8. [本地测试结果](#8-本地测试结果treeResults)
9. [目录结构](#9-目录结构)
10. [编译与运行](#10-编译与运行)
11. [打包安装](#11-打包安装)
12. [二次开发](#12-二次开发)
13. [支持与联系](#13-支持与联系)

---

## 1. 项目简介

TreeATE 借鉴 Chrome 的多进程设计思路，支持并行化测试。每个独立的测试进程由 **Test Engine** 承接，**TreeATE（GUI）** 是面向工厂用户的 HMI（人机交互界面）。

Test Engine 是平台核心：向下管理不同设备驱动，对接 MES 系统与测试结果输出（数据库），承载图形化人机界面插件；向上接收不同语言的测试用例（当前支持 JavaScript / QtScript 与 Python）以及测试参数配置数据。

树形测试结构为三级：**测试工程 → 测试套 → 测试项**。一个测试工程可包含多个测试套，一个测试套可包含多个测试项。多个测试工程可同时加载并并行测试。

### 目标

对接工业物联网，打造简单易用的工厂自动化测试开源软件工具。

## 2. v3.1.0 版本亮点

- TreeATE 与 TreeResults 版本号统一为 `3.1.0`（TestEngine 保持 `2.4.0`），并新增单一版本源，关于窗口与 exe 文件属性版本一致。
- 主界面骨架重做：**应用栏**、**扫码执行条**、UUT 顶部页签与 KPI、结果浮层，并适配 1024×768 紧凑布局。
- 新增**经典 / 浅色 / 深色**三套主题，运行时切换并记住选择。
- 支持**中文 / 英文**界面运行时切换，无需重启。
- 错误分级提示：顶部横幅、扫描框行内提示与按钮抖动反馈。
- 菜单“测试工程 → 开发”改为使用 VS Code 打开当前测试工程目录；未安装时给出安装引导。
- TreeResults 查询台改进：结果库只读打开、条码查询参数化、分页浏览、CSV 导出（UTF-8）、结果联动与空状态、三主题与中英文。
- 工具栏与浮动窗口位置可记忆：退出时写入 `Config/layout.ini`，下次启动恢复；计数浮动窗口默认停靠右下角。
- 条码工具栏最右侧状态位在测试完成后显示“完成”，失败显示“失败”，异常显示“错误 / ERROR”。

## 3. 功能特性

- 为工厂提供统一且简单易用的操作界面，降低不同产品测试程序的学习成本。
- 采用多进程技术，支持成品或半成品并行测试，运行更稳定。
- 主界面支持中文和英文，可在应用栏直接切换并立即生效。
- 支持测试工程整体循环测试，可设置循环次数。
- 支持“测试失败则停止”，包括当次停止与循环停止两种策略。
- 支持扫码加载测试工程、扫码开始测试。
- 支持无服务器或网络中断时自动切换本地工作模式，测试结果本地留存。
- 支持本地测试结果查看、分页查询、CSV 导出与管理。
- 支持经典 / 浅色 / 深色三套主题，运行时切换并记住选择。
- 提供界面插件扩展接口。
- 支持二次自定义开发（TreeATE Copilot）：
  - 支持 QtScript（类 JavaScript，基于 ECMA 标准）快速开发自动化测试用例；
  - 支持 Python 语言开发自动化测试用例；
  - 提供设备控制组件化支持；
  - 提供辅助二次开发的人机交互公共组件；
  - 提供 TreeATE 与 MES 系统的扩展接口和组件样例；
  - 支持测试参数 CSV 格式文件导入和导出。

## 4. 界面组成

v3.1.0 主界面自上而下分为五个区域：

| 区域 | 说明 |
| --- | --- |
| 应用栏 | 品牌与版本、菜单、加载 / 测试 / 停止 / 属性、产线工站、语言、主题、退出 |
| 条码工具栏 | 条码输入框（扫码 / 回车）、最右侧状态位 |
| 错误横幅 | 按警告 / 错误分级显示，可附带操作按钮，限时自动隐藏 |
| UUT 工作区 | 每个测试工程一个顶部页签；通过 / 失败 / 异常 / 总数 / 通过率 KPI；右侧为属性检查器（约 320px，可收起） |
| 底部信息区 | 日志、计数等页签；日志支持暂停、清空、复制；底部状态栏显示工程路径、历史结果、当前用户、设备 ID、当前时间 |

### 应用栏

- 左侧：程序图标、**TreeATE** 品牌名与版本号 `v3.1.0`、☰ 菜单按钮。
- 操作按钮：加载、测试、停止、属性；属性按钮用于显示或隐藏右侧属性检查器。
- 右侧：产线与工站名称、语言切换、主题切换、退出按钮。

### 条码工具栏

- 条码输入框支持扫描枪输入与手动回车提交。
- 最右侧状态位使用颜色和文字同步表达测试状态，完成后显示“完成”。

### UUT 工作区与 KPI

- 每个加载的测试工程对应一个顶部页签，可平铺、并排或标签全屏显示。
- 每个工程展示通过、失败、异常、总数与通过率等关键指标。
- 未加载工程时，工作区中央显示提示：**请加载测试工程后启动测试**。

### 属性检查器

- 位于窗口右侧，默认约 320px；未选中测试工程时显示操作引导。
- 选中测试工程后显示可修改属性，修改后点击“保存”生效。
- 1024×768 等紧凑尺寸下自动收起，可从“视图”菜单或应用栏属性按钮重新打开。

### 底部信息区与状态栏

- 日志页签支持暂停、清空、复制；计数页签展示良品次数与不良次数。
- 状态栏显示工程路径、历史结果、当前用户、设备 ID 与当前时间；工程路径可点击复制。
- 历史结果以橙色标识存在尚未上传服务器的本地记录。

### 常用快捷键

| 快捷键 | 功能 |
| --- | --- |
| `F2` | 加载测试工程 |
| `F5` | 开始测试 |
| `F8` | 停止测试 |
| `Ctrl+L` | 定位到条码输入框并全选 |
| `Ctrl+F` | 定位到当前测试树的搜索 / 焦点 |
| `F11` | 全屏切换 |
| `Esc` | 关闭测试树上的结果浮层 |
| `Alt` | 显示或隐藏传统菜单栏 |

## 5. 快速开始

1. **启动与登录**：运行 `TreeATE.exe`，在登录对话框输入用户名和密码。默认本地调试账号为 `admin`，密码 `123`。正式产线建议连接 MES 服务器。
2. **配置系统选项**：菜单“系统 → 系统选项”，设置产线名称、工站名称、服务器地址、界面语言、界面主题、工作路径与扫码加载规则。
3. **加载测试工程**：点击应用栏“加载”或按 `F2`，选择 `*.tpx` 文件；也可扫描已配置规则的条码自动加载。
4. **选择测试项并输入条码**：在测试树中勾选需要执行的测试项，在条码输入框中扫描或输入被测产品条码。
5. **开始测试**：点击“测试”或按 `F5`。测试过程中可点击“停止”或按 `F8`，停止会在当前测试项结束后生效。
6. **查看结果**：菜单“系统 → 本地测试结果”打开 TreeResults 查询台，按条码查询、分页浏览或导出 CSV。

> 示例工程位于 `Example` 目录，包含 `TestDemo`、`TestDemoPy`、`TestDemoPy2`、`TestCppDemo` 等，可用于快速体验加载、测试与结果查询流程。

## 6. 测试状态说明

条码工具栏状态位、测试树与计数区域共享同一套测试状态。状态位文字与颜色同步变化：

| 状态 | 状态位显示 | 含义 |
| --- | --- | --- |
| Unload | 未加载 / Unload | 尚未加载测试工程，或工程已关闭 |
| Loading | 加载中 / Loading... | 正在解析并加载测试工程 |
| Ready | 就绪 / Ready | 工程已加载，等待输入条码并开始测试 |
| Testing / GO | 测试中 / GO... | 测试正在执行 |
| Pass | 完成 / Done | 本轮测试完成且结果通过 |
| Fail | 失败 / Failed | 测试结果未通过 |
| Exception | 错误 / ERROR | 测试过程出现异常或错误 |

> “完成”状态使用独立文案，不再与计数卡片的“良品次数”共用同一翻译源串，避免状态位误显示为“良品次数”。

## 7. 主题与语言

### 主题

应用栏提供主题切换按钮，支持**经典（Classic）**、**浅色（Light）**、**深色（Dark）**三套主题。切换立即生效，选择会被记住；主题文件缺失时自动回退到内置资源。

### 语言

应用栏提供语言切换入口，当前支持**简体中文**与**English**。默认跟随操作系统语言，无法识别时使用英文；切换立即生效，无需重启。语言清单由 `Src/TreeATE/i18n/languages.json` 描述，翻译文件为 `zh.qm` 与 `en.qm`。

## 8. 本地测试结果（TreeResults）

- 结果库以**只读**方式打开，避免误修改历史数据。
- 支持按条码 / SN 查询，查询参数化，避免拼接 SQL。
- 支持分页浏览，结果按“测试工程结果 → 测试项结果 → 详细测试结果”三层联动展示。
- 支持导出 CSV，编码为 UTF-8，可直接用 Excel 打开。
- 跟随主程序的主题与中英文设置，并提供空状态提示。

入口：菜单“系统 → 本地测试结果”。

## 9. 目录结构

```text
TreeATE/
├─ Src/
│  ├─ TreeATE/          主程序（GUI、应用栏、扫码条、主题、语言、属性面板）
│  ├─ TreeResults/      本地测试结果查询工具
│  ├─ TestEngine/       测试引擎（多进程执行核心）
│  └─ ...               公共库与插件源码
├─ Libs/                公共库
├─ Plugins/             界面与设备插件
├─ Example/             示例测试工程（TestDemo、TestDemoPy、TestDemoPy2、TestCppDemo）
├─ Doc/                 文档与图片
├─ Setup/               Inno Setup 安装脚本
├─ 3part/               第三方依赖（PythonQt 等）
├─ TreeATE.pro          qmake 工程入口
└─ README.md            原始 Markdown README
```

## 10. 编译与运行

### 开发环境

- Qt 6.11.1（MSVC 2022 64-bit）
- Python 3.14 64 位
- [PythonQt 4.1.0](https://github.com/MeVisLab/pythonqt/tags)，按其说明编译出 dll 与 lib，并将 lib 复制到 `3part/PythonQt/lib`
- Visual Studio 2022（MSVC x64 工具链）

推荐统一采用 64 位编译，并选择 Release 配置运行。

### 环境变量

根据本机 Python 3.14 安装路径设置以下变量（示例）：

```text
PYTHON_PATH     x:\Python314\
PYTHON_LIB      x:\Python314\libs\
PYTHON_VERSION  314
QTDIR           x:\Qt6\6.11.1\msvc2022_64\bin
```

### 编译

使用 Qt 6.11.1 (MSVC 2022 64-bit) 命令行进入构建目录，执行：

```bat
qmake ..\..\TreeATE.pro CONFIG+=release
nmake
```

### 部署运行

在输出目录（例如 `build\...\bin\x64`）执行：

```bat
windeployqt TestEngine.exe
windeployqt TreeATE.exe
windeployqt TreeResults.exe
```

并确认已将 `3part\PythonQt\lib\PythonQt-Qt6-Python3.14.dll` 复制到运行目录。随后启动 `TreeATE.exe`。

## 11. 打包安装

安装包依赖 **Inno Setup**。使用 Inno Setup 打开 `Setup/setup.iss`，确认 `[Files]` 中的源目录与实际构建输出目录一致，然后执行 *Build → Compile*（`Ctrl+F9`）或 *Run*（`F9`）。

输出文件名格式为 `Setup_TreeATE_x64_V3.1.0.exe`，默认输出到 `Setup` 目录。安装包默认包含 `Example` 下的示例工程与 `Config/sys.cfg`，并附带 `THIRD-PARTY-NOTICES.txt`、`Changelog.txt` 与 `COPYRIGHT`。

> 请以管理员身份运行安装包。安装目录默认为 `{pf}\TreeATE`，安装完成后可从开始菜单或桌面快捷方式启动。

## 12. 二次开发

TreeATE 3.x 起移除 TreeATE Dev，改用基于 VS Code 的 **TreeATE Copilot**。菜单“测试工程 → 开发”会用 VS Code 打开当前测试工程目录；若未安装 VS Code，程序会给出安装 VS Code 与 TreeATE Copilot 扩展的引导。

### 测试用例

- **QtScript**：类 JavaScript，基于 ECMA 标准，适合快速编写自动化测试用例。
- **Python**：适合复杂逻辑、数据处理与设备库复用。
- **C++**：可通过插件方式扩展设备控制与人机交互组件。

### 扩展接口

- 设备控制组件化接口。
- 人机交互公共组件（多窗口、多对话框等）。
- TreeATE 与 MES 系统扩展接口及组件样例。
- 测试参数 CSV 导入与导出。

测试工程采用 `.tpx` 工程文件与 `.tp` 测试套文件组织，可在 VS Code 中直接编辑。

## 13. 支持与联系

| 项目 | 内容 |
| --- | --- |
| 官方网站 | [www.treeate.top](http://www.treeate.top) |
| 源码仓库 | [github.com/WilliamYinwei/TreeATE](https://github.com/WilliamYinwei/TreeATE) |
| 技术专栏 | [CSDN TreeATE 专栏](https://blog.csdn.net/vivasoft/column/info/31202) |
| 电子邮箱 | willage.yin@163.com |
| 技术交流 | QQ：499722676 / 226406709 |

**详情请访问 www.treeate.top**

---

**TreeATE v3.1.0** · 开源软件工具平台 · 详情请访问 www.treeate.top

本文档基于 v3.1.0 实际功能编写。原始 Markdown 版 README 仍保留在仓库根目录 `README.md`。
