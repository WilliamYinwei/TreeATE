[![Github issues](https://img.shields.io/github/issues/WilliamYinwei/TreeATE)](https://github.com/WilliamYinwei/TreeATE/issues)
[![Github release (latest SemVer)](https://img.shields.io/github/v/release/WilliamYinwei/TreeATE)](https://github.com/WilliamYinwei/TreeATE/releases/latest)
[![Github All Releases](https://img.shields.io/github/downloads/WilliamYinwei/TreeATE/total)](https://github.com/WilliamYinwei/TreeATE/releases)

# TreeATE

> TreeATE stands for Tree Automatic Test Equipment. It is an open-source software tool platform for factory end-of-line and semi-finished product test automation. Built on Qt with a multi-process architecture, it provides a unified, simple and stable test HMI for production lines.
>
> **For details, please visit www.treeate.top**

## Table of Contents

1. [Introduction](#1-introduction)
2. [What's New in v3.1.0](#2-whats-new-in-v310)
3. [Features](#3-features)
4. [User Interface](#4-user-interface)
5. [Quick Start](#5-quick-start)
6. [Test Status](#6-test-status)
7. [Themes and Language](#7-themes-and-language)
8. [Local Test Results](#8-local-test-results-treeresults)
9. [Directory Structure](#9-directory-structure)
10. [Build and Run](#10-build-and-run)
11. [Packaging and Installation](#11-packaging-and-installation)
12. [Secondary Development](#12-secondary-development)
13. [Support and Contact](#13-support-and-contact)

---

## 1. Introduction

Inspired by Chrome's multi-process design, TreeATE supports parallel testing. Each independent test process is hosted by the **Test Engine**, while **TreeATE (GUI)** is the HMI for factory users.

The Test Engine is the core of the platform. It manages device drivers, integrates with MES and test result output (database), and hosts GUI plugins. It accepts test cases in multiple languages (currently JavaScript / QtScript and Python) as well as test parameter configuration data.

The test structure has three levels: **Test Project → Test Suite → Test Case**. A test project can contain multiple test suites, and a test suite can contain multiple test cases. Multiple test projects can be loaded and tested in parallel.

### Goal

Connect to the Industrial Internet of Things and build a simple, easy-to-use open-source tool for factory test automation.

## 2. What's New in v3.1.0

- TreeATE and TreeResults versions are unified to `3.1.0` (TestEngine remains `2.4.0`), with a single version source so the About dialog and exe file properties match.
- Redesigned main window skeleton: **app bar**, **scan-and-execute bar**, UUT top tabs with KPIs, result overlay, and a compact layout for 1024×768.
- Three themes: **Classic / Light / Dark**, switchable at runtime and remembered.
- Runtime **Chinese / English** UI switching without restart.
- Graded error feedback: top banner, inline hint in the scan box, and button shake.
- Menu "Test Project → Develop" now opens the project folder in VS Code, with installation guidance when VS Code is missing.
- TreeResults improvements: read-only result database, parameterized barcode query, paging, CSV export (UTF-8), linked result views and empty states, three themes and bilingual UI.
- Toolbars and dock windows remember their positions: saved to `Config/layout.ini` on exit and restored on next start; the counts dock defaults to the bottom-right corner.
- The status chip at the right end of the barcode toolbar shows "Done" after a passed test, "Failed" on failure, and "ERROR" on exception.

## 3. Features

- A unified and easy-to-use operator interface that lowers the learning cost of different product test programs.
- Multi-process technology for parallel testing of finished or semi-finished products, with higher stability.
- Chinese and English UI, switchable directly from the app bar with immediate effect.
- Whole-project loop testing with a configurable loop count.
- "Stop on failure" support, with both current-run stop and loop stop strategies.
- Barcode-based project loading and barcode-based test start.
- Automatic fallback to local working mode when no server is available or the network is interrupted; results are kept locally.
- Local test result viewing, paged queries, CSV export and management.
- Classic / Light / Dark themes, switchable at runtime and remembered.
- UI plugin extension interface.
- Secondary development support (TreeATE Copilot):
  - QtScript (JavaScript-like, ECMA-based) for rapid test case development;
  - Python for test case development;
  - Componentized device control support;
  - Shared HMI components for secondary development;
  - Extension interfaces and component samples for TreeATE and MES integration;
  - CSV import and export of test parameters.

## 4. User Interface

The v3.1.0 main window is divided into five areas from top to bottom:

| Area | Description |
| --- | --- |
| App bar | Brand and version, menu, Load / Test / Stop / Properties, line and station, language, theme, exit |
| Barcode toolbar | Barcode input (scan / Enter), status chip at the far right |
| Error banner | Graded warning / error messages, optional action button, auto-hides after a timeout |
| UUT workspace | One top tab per test project; Pass / Fail / Exception / Total / Pass-rate KPIs; property inspector on the right (about 320px, collapsible) |
| Bottom info area | Log and counts tabs; log supports pause, clear and copy; status bar shows project path, history results, current user, device ID and time |

### App Bar

- Left: application icon, **TreeATE** brand name and version `v3.1.0`, ☰ menu button.
- Action buttons: Load, Test, Stop, Properties; the Properties button shows or hides the right-side inspector.
- Right: line and station name, language switch, theme switch, exit button.

### Barcode Toolbar

- The barcode input accepts scanner input and manual Enter submission.
- The status chip at the far right expresses test status with both color and text; it shows "Done" when the test passes.

### UUT Workspace and KPIs

- Each loaded test project gets a top tab; tabs can be tiled, cascaded or shown full-screen.
- Each project displays pass, fail, exception, total and pass rate.
- When no project is loaded, the workspace center shows: **Please load a test project and then start the test**.

### Property Inspector

- Located on the right, about 320px by default; shows guidance when no project is selected.
- Shows editable properties for the selected project; click "Save" to apply changes.
- Auto-collapses in compact sizes such as 1024×768; reopen it from the View menu or the app bar Properties button.

### Bottom Info Area and Status Bar

- The log tab supports pause, clear and copy; the counts tab shows good and bad counts.
- The status bar shows project path, history results, current user, device ID and current time; the project path is clickable to copy.
- History results are marked in orange when local records have not yet been uploaded to the server.

### Common Shortcuts

| Shortcut | Function |
| --- | --- |
| `F2` | Load a test project |
| `F5` | Start testing |
| `F8` | Stop testing |
| `Ctrl+L` | Focus the barcode input and select all |
| `Ctrl+F` | Focus the test tree search / focus |
| `F11` | Toggle full screen |
| `Esc` | Close the result overlay on the test tree |
| `Alt` | Show or hide the classic menu bar |

## 5. Quick Start

1. **Launch and log in**: run `TreeATE.exe` and enter the user name and password in the login dialog. The default local debugging account is `admin` with password `123`. For production, connect to the MES server.
2. **Configure system options**: menu "System → System Options"; set the line name, station name, server address, UI language, UI theme, working path and barcode loading rules.
3. **Load a test project**: click "Load" in the app bar or press `F2`, then select a `*.tpx` file; alternatively scan a barcode that matches a configured rule.
4. **Select test cases and enter a barcode**: check the test cases to run in the test tree, then scan or type the product barcode in the barcode input.
5. **Start testing**: click "Test" or press `F5`. Click "Stop" or press `F8` during the test; the stop takes effect after the current test case finishes.
6. **View results**: menu "System → Local Test Results" opens the TreeResults console for barcode queries, paging and CSV export.

> Sample projects are in the `Example` directory, including `TestDemo`, `TestDemoPy`, `TestDemoPy2` and `TestCppDemo`, for quickly trying loading, testing and result queries.

## 6. Test Status

The status chip, the test tree and the counts area share the same test status. The chip text and color change together:

| Status | Chip Display | Meaning |
| --- | --- | --- |
| Unload | Unload | No test project is loaded, or the project has been closed |
| Loading | Loading... | The test project is being parsed and loaded |
| Ready | Ready | The project is loaded and waiting for a barcode |
| Testing / GO | GO... | Testing is in progress |
| Pass | Done | The current run finished and passed |
| Fail | Failed | The test result did not pass |
| Exception | ERROR | An exception or error occurred during testing |

> The "Done" status uses its own text and no longer shares a translation string with the "Good count" card title, preventing the chip from wrongly showing the count title.

## 7. Themes and Language

### Themes

The app bar provides a theme switch with **Classic**, **Light** and **Dark** themes. Changes take effect immediately and are remembered; if a theme file is missing, the built-in resource is used.

### Language

The app bar provides a language switch for **Simplified Chinese** and **English**. The default follows the operating system language, falling back to English when unknown. Switching takes effect immediately without restart. The language list is described by `Src/TreeATE/i18n/languages.json`, with translation files `zh.qm` and `en.qm`.

## 8. Local Test Results (TreeResults)

- The result database is opened **read-only** to prevent accidental changes to history.
- Query by barcode / SN with parameterized statements, avoiding SQL concatenation.
- Paged browsing; results are shown in three linked levels: project result → test case result → detailed result.
- CSV export in UTF-8, directly openable in Excel.
- Follows the main program's theme and language settings and provides empty-state hints.

Entry: menu "System → Local Test Results".

## 9. Directory Structure

```text
TreeATE/
├─ Src/
│  ├─ TreeATE/          Main GUI (app bar, scan bar, themes, language, property panel)
│  ├─ TreeResults/      Local test result viewer
│  ├─ TestEngine/       Test engine (multi-process core)
│  └─ ...               Shared libraries and plugin sources
├─ Libs/                Shared libraries
├─ Plugins/             UI and device plugins
├─ Example/             Sample projects (TestDemo, TestDemoPy, TestDemoPy2, TestCppDemo)
├─ Doc/                 Documents and images
├─ Setup/               Inno Setup script
├─ 3part/               Third-party dependencies (PythonQt, etc.)
├─ TreeATE.pro          qmake project entry
└─ README.md            Original Markdown README
```

## 10. Build and Run

### Development Environment

- Qt 6.11.1 (MSVC 2022 64-bit)
- Python 3.14 64-bit
- [PythonQt 4.1.0](https://github.com/MeVisLab/pythonqt/tags); build its dll and lib as instructed and copy the lib to `3part/PythonQt/lib`
- Visual Studio 2022 (MSVC x64 toolchain)

Use 64-bit builds consistently and run the Release configuration.

### Environment Variables

Set the following variables according to your Python 3.14 installation (example):

```text
PYTHON_PATH     x:\Python314\
PYTHON_LIB      x:\Python314\libs\
PYTHON_VERSION  314
QTDIR           x:\Qt6\6.11.1\msvc2022_64\bin
```

### Build

From the Qt 6.11.1 (MSVC 2022 64-bit) command prompt, enter the build directory and run:

```bat
qmake ..\..\TreeATE.pro CONFIG+=release
nmake
```

### Deploy and Run

In the output directory (for example `build\...\bin\x64`), run:

```bat
windeployqt TestEngine.exe
windeployqt TreeATE.exe
windeployqt TreeResults.exe
```

Make sure `3part\PythonQt\lib\PythonQt-Qt6-Python3.14.dll` has been copied to the run directory, then start `TreeATE.exe`.

## 11. Packaging and Installation

Packaging requires **Inno Setup**. Open `Setup/setup.iss` in Inno Setup, verify that the source directories in `[Files]` match the actual build output, then use *Build → Compile* (`Ctrl+F9`) or *Run* (`F9`).

The output file is named `Setup_TreeATE_x64_V3.1.0.exe` and written to the `Setup` directory by default. The installer includes the sample projects under `Example`, `Config/sys.cfg`, plus `THIRD-PARTY-NOTICES.txt`, `Changelog.txt` and `COPYRIGHT`.

> Run the installer as administrator. The default install directory is `{pf}\TreeATE`; after installation, start the program from the Start menu or the desktop shortcut.

## 12. Secondary Development

Since TreeATE 3.x, TreeATE Dev has been removed in favor of VS Code-based **TreeATE Copilot**. Menu "Test Project → Develop" opens the current project folder in VS Code; if VS Code is not installed, the program guides you to install VS Code and the TreeATE Copilot extension.

### Test Cases

- **QtScript**: JavaScript-like, ECMA-based, suitable for rapid automated test case development.
- **Python**: suitable for complex logic, data processing and device library reuse.
- **C++**: extend device control and HMI components through plugins.

### Extension Interfaces

- Componentized device control interface.
- Shared HMI components (multi-window, multi-dialog, etc.).
- TreeATE and MES extension interfaces with component samples.
- Test parameter CSV import and export.

Test projects use `.tpx` project files and `.tp` suite files, editable directly in VS Code.

## 13. Support and Contact

| Item | Content |
| --- | --- |
| Website | [www.treeate.top](http://www.treeate.top) |
| Repository | [github.com/WilliamYinwei/TreeATE](https://github.com/WilliamYinwei/TreeATE) |
| Tech column | [CSDN TreeATE column](https://blog.csdn.net/vivasoft/column/info/31202) |
| Email | willage.yin@163.com |
| Community | QQ: 499722676 / 226406709 |

**For details, please visit www.treeate.top**

---

**TreeATE v3.1.0** · Open-source software tool platform · For details, please visit www.treeate.top

This document is based on the actual v3.1.0 functionality. The Chinese version is available in the repository root as `README.md`.
