# TreeATE v3.1.0 User Manual

> This manual is intended for TreeATE users and secondary developers. It covers login, system configuration, project loading, test execution, result queries, themes and language, and common questions in operational order. The content is based on the actual v3.1.0 functionality.
>
> **For details, please visit www.treeate.top**

## Table of Contents

1. [System Requirements](#1-system-requirements)
2. [Installation and Startup](#2-installation-and-startup)
3. [Logging In](#3-logging-in)
4. [Main Window](#4-main-window)
5. [Configuring System Options](#5-configuring-system-options)
6. [Loading a Test Project](#6-loading-a-test-project)
7. [Editing Project Options](#7-editing-project-options)
8. [Editing Project Properties](#8-editing-project-properties)
9. [Starting a Test](#9-starting-a-test)
10. [Stopping a Test](#10-stopping-a-test)
11. [Test Status](#11-test-status)
12. [Viewing Local Test Results](#12-viewing-local-test-results)
13. [Themes and Language](#13-themes-and-language)
14. [Layout and Position Memory](#14-layout-and-position-memory)
15. [Shortcuts](#15-shortcuts)
16. [Error Messages and Handling](#16-error-messages-and-handling)
17. [FAQ](#17-faq)
18. [Manual Regression Checklist for Test Status](#18-manual-regression-checklist-for-test-status)
19. [Support and Contact](#19-support-and-contact)

---

## 1. System Requirements

- Operating system: Windows 10 / Windows 11, 64-bit.
- Runtime: Qt 6.11.1 runtime and Python 3.14 runtime deployed with the installer.
- Display: 1920×1080 recommended; compact sizes such as 1024×768 automatically collapse some panels.
- Scanner: keyboard-wedge barcode scanners are supported; scan directly while the barcode input has focus.
- Network: the MES server must be reachable when connecting to MES; without a network the program switches to local working mode automatically.

## 2. Installation and Startup

### Installation

1. Run `Setup_TreeATE_x64_V3.1.0.exe` as administrator.
2. Follow the wizard to choose the install directory; the default is `{pf}\TreeATE`.
3. The installer deploys the `Example` projects and the initial `Config\sys.cfg`, and also places `THIRD-PARTY-NOTICES.txt`, `Changelog.txt` and `COPYRIGHT` in the install directory.
4. After installation, start TreeATE from the Start menu or the desktop shortcut.

### Startup

Double-click `TreeATE.exe` to start the program. A login dialog appears on first start; loading projects and running tests require a successful login.

> Portable use: in the build output directory (for example `build\...\bin\x64`), make sure `windeployqt` has been run and `PythonQt-Qt6-Python3.14.dll` has been copied, then run `TreeATE.exe` directly.

## 3. Logging In

TreeATE requires authorization. Enter the correct user name and password in the login dialog.

- Default local debugging account: `admin`, password: `123`.
- Local mode is for on-site debugging only. For production, connect to the MES server for process control.
- The server address can be selected on the login screen or configured later via "System → System Options".

> **Warning**: Local mode does not submit test results to MES, which may leave the process uncontrolled. Use server mode in production and verify the line and station settings.

## 4. Main Window

The v3.1.0 main window is divided from top to bottom into the app bar, barcode toolbar, error banner, UUT workspace, bottom info area and status bar.

| Area | Description |
| --- | --- |
| App bar | Brand and version, ☰ menu, Load / Test / Stop / Properties, line and station, language, theme, exit |
| Barcode toolbar | Barcode input, status chip at the far right |
| Error banner | Graded warning / error messages, optional action button, auto-hides after a timeout |
| UUT workspace | One top tab per project; Pass / Fail / Exception / Total / Pass-rate KPIs; property inspector on the right, about 320px, collapsible |
| Bottom info area | Log and counts tabs; log supports pause, clear and copy |
| Status bar | Project path (click to copy), history results, current user, device ID, current time |

### App Bar

| Area | Description |
| --- | --- |
| Brand area | Application icon, TreeATE name, version `v3.1.0`. |
| ☰ Menu | Opens the full menu: TreeATE, Test Project, System, View, Help. |
| Load | Select and load a `*.tpx` test project; shortcut `F2`. |
| Test | Start testing the selected test cases; shortcut `F5`. |
| Stop | Request a test stop; shortcut `F8`. |
| Properties | Show or hide the right-side property inspector. |
| Line / Station | Shows the current line and station names from system options. |
| Language | Switch Simplified Chinese / English, effective immediately. |
| Theme | Switch Classic / Light / Dark, effective immediately and remembered. |
| Exit | Close TreeATE; the window layout is saved first. |

### UUT Workspace

- Each loaded test project adds a top tab to the workspace.
- Each tab shows the project's test tree and KPIs: pass, fail, exception, total and pass rate.
- The View menu switches tiling, cascade and full-screen tab display.
- When no project is loaded, the workspace center shows "Please load a test project and then start the test".
- Result overlays can be viewed on the test tree and closed with `Esc`.

### Property Inspector and Bottom Info Area

- The property inspector is on the right; it shows guidance when no project is selected and editable properties when one is selected.
- The bottom info area contains log and counts tabs; counts show good and bad counts.
- Log tools support pause, clear and copy for on-site troubleshooting.
- The project path in the status bar is clickable to copy; history results use a dot indicator, orange meaning local results not yet uploaded.

## 5. Configuring System Options

Choose menu "System → System Options" to open the system configuration dialog.

| Option | Description |
| --- | --- |
| Line name | Distinguishes production lines; should be unique within the factory. Naming is user-defined. |
| Station name | Identifies the station test, e.g. burn-in, unit test 1, unit test 2; need not be unique within a line. |
| Server | MES server address for TreeATE integration; also shown on the login screen. |
| UI language | Simplified Chinese or English; since v3.1.0 it can also be switched in the app bar with immediate effect. |
| UI theme | Classic, Light or Dark; also switchable in the app bar, and the choice is remembered. |
| Working path | Root directory of test projects. Click "..." to browse or type directly, e.g. `D:/Projects/TreeATE/Example`. Keeping all projects under one root is recommended. |
| Barcode loading rules | Maps product barcode rules to relative project paths for automatic loading by scan. |

### Configuring Barcode Loading Rules

1. Click "+" in the "Barcode loading rules" area to add a rule.
2. Enter the barcode rule in "Product barcode regular expression", usually the product type prefix. For barcode `21201345678`, `212` is the product type, so enter `212`.
3. Enter the project path relative to the working path in "Test project path and name". For project `D:\Projects\TreeATE\Example\TestDemo\TestDemo.tpx` with working path `D:\Projects\TreeATE\Example`, enter `/TestDemo/TestDemo.tpx`.
4. Always use `/` as the path separator.
5. Click "OK" to save or "Cancel" to discard changes.

## 6. Loading a Test Project

After logging in, load a test project created with TreeATE Copilot before testing. There are two ways to load.

### Manual Loading

1. Click "Load" in the app bar, choose menu "Test Project → Load", or press `F2`.
2. Locate the `*.tpx` file in the file dialog and open it.
3. After loading, a tab appears in the workspace showing the project, suite and case names, descriptions, test status, test criteria, start time and duration.

### Automatic Loading by Scan

1. Make sure barcode rules and relative project paths are configured in system options.
2. Click the barcode input or press `Ctrl+L` to focus it.
3. Scan the product barcode and press Enter; the matching project loads automatically.

> Multiple test projects can be loaded at the same time and tested in parallel. A project can contain multiple suites, and a suite can contain multiple test cases.

## 7. Editing Project Options

Choose menu "Test Project → Options" to open the project options dialog.

| Option | Description |
| --- | --- |
| Test project name | Display only; defined by the developer and not editable. |
| Test project description | Display only; defined by the developer and not editable. |
| Product barcode regular expression | Display only; the developer defines the barcode matching and checking rules. |
| Overall loop count | Sets how many times the whole project loops, up to 1,000,000. |
| Stop on failure | Two choices: stop remaining unstarted test cases after a failure in the current run; stop subsequent loops when a failure occurs in loop testing. |

## 8. Editing Project Properties

1. Select the test project node in the workspace.
2. Choose menu "Test Project → Properties", or click "Properties" in the app bar, to show the inspector on the right.
3. The properties depend on the project configuration; only editable properties of the current project are shown.
4. After editing values, click "Save" below the property panel to apply them.

> When no project is selected the inspector shows guidance. In compact windows such as 1024×768 the panel collapses automatically; reopen it with the app bar Properties button or the View menu.

## 9. Starting a Test

1. Make sure a test project is loaded and at least one test case is checked in the test tree. Checked means run, unchecked means skip.
2. Scan or type the product barcode in the barcode input. If the project defines a barcode rule, it is validated automatically and testing is blocked with a hint when it does not match.
3. Click "Test" in the app bar, choose menu "Test Project → Test", or press `F5`.
4. During testing the status chip at the right of the barcode toolbar shows "GO...", and the test tree and KPIs update in real time.
5. When the test finishes, the chip shows "Done" (pass), "Failed", or "ERROR" (exception).

### Starting a Test by Scan

When barcode rules and the project are ready, scanning the product barcode starts the test directly; no mouse click on "Test" is needed.

> A barcode is required before starting, and at least one test case must be checked. When no project is loaded, the workspace shows "Please load a test project and then start the test".

## 10. Stopping a Test

During a test, click "Stop" in the app bar, choose menu "Test Project → Stop", or press `F8` to request a stop.

> **Warning**: The stop takes effect between test cases. If the current case takes a long time, it is not interrupted immediately; the test stops after the current case finishes and before the next one starts, protecting the test process and related systems.

## 11. Test Status

The status chip at the far right of the barcode toolbar indicates the current phase; text and color change together:

| Status | Chip Display | Color and Meaning |
| --- | --- | --- |
| Unload | Unload | Gray. No test project loaded, or the project has been closed. |
| Loading | Loading... | Blue. The test project is being parsed and loaded. |
| Ready | Ready | Teal. The project is loaded and waiting for a barcode. |
| GO | GO... | Amber. Testing is in progress. |
| Pass | Done | Green. The current run finished and passed. |
| Fail | Failed | Red. The test result did not pass. |
| Exception | ERROR | Orange-yellow. An exception or error occurred; the English UI shows ERROR. |

> "Done" and the counts card title "Good count" use different text sources, so the chip never shows the count title by mistake. In the English UI the chip shows Unload, Loading..., Ready, GO..., Done, Failed and ERROR respectively.

## 12. Viewing Local Test Results

Choose menu "System → Local Test Results" to open the TreeResults console.

### Result Levels

1. **Project result**: barcode, start time, line, station, overall result, etc.
2. **Test case result**: case result (Pass, Fail, etc.), description, etc.
3. **Detailed result**: individual detailed records within a test case.

The three levels are parent-child related: a project result contains multiple test case results, and a test case result contains zero or more detailed results. Click a parent row to expand its children.

### Query and Export

- The database is opened read-only to prevent accidental changes to history.
- Query by barcode / SN with parameterized statements.
- Paged browsing avoids loading a large number of records at once.
- CSV export in UTF-8, directly openable in Excel.
- Follows the main program's theme and language settings and provides empty-state hints.

## 13. Themes and Language

### Switching Themes

Click the theme button in the app bar to switch among Classic, Light and Dark. The change takes effect immediately and is remembered for the next start; if a theme file is missing, the built-in resource is used.

### Switching Language

Click the language button in the app bar to switch between Simplified Chinese and English. The change is immediate and does not require a restart. The default follows the operating system language, falling back to English when unknown. The language list is in `Src/TreeATE/i18n/languages.json`, with `zh.qm` and `en.qm` translation files.

## 14. Layout and Position Memory

- The positions and visibility of the menu toolbar, barcode toolbar and dock windows are saved on exit.
- They are stored in `Config\layout.ini` under the program directory and restored on the next start.
- On first start without layout records, the counts dock is placed at the bottom-right corner.
- The toolbar list in the View menu uses readable names: **Menu Toolbar** and **Barcode Toolbar**, each of which can be toggled.
- To restore the default layout, exit TreeATE, delete `Config\layout.ini`, and start again.

> Layout memory is stored under the program directory. If that directory is not writable, run with a privileged account or adjust its permissions.

## 15. Shortcuts

| Shortcut | Function |
| --- | --- |
| `F2` | Load a test project |
| `F5` | Start testing |
| `F8` | Stop testing |
| `Ctrl` + `L` | Focus the barcode input and select all |
| `Ctrl` + `F` | Focus the test tree search / focus |
| `F11` | Toggle full screen |
| `Esc` | Close the result overlay on the test tree |
| `Alt` | Show or hide the classic menu bar |

## 16. Error Messages and Handling

| Form | Trigger | Suggestion |
| --- | --- | --- |
| Top error banner | Load failure, barcode mismatch, test exception, etc. | Read the banner; if it has an action button, follow it. The banner hides automatically after a timeout. |
| Inline hint in the barcode input | Empty barcode or a barcode that does not match the project rule. | Scan or type a valid barcode; check the barcode rule in system options. |
| Button shake | Clicking Test when conditions are not met. | Check that a project is loaded, at least one case is checked, and a barcode is entered. |
| ERROR status chip | An exception is thrown during testing. | Check the log and the exception in the test tree; stop the test if needed and inspect devices or scripts. |

## 17. FAQ

**Q1: I cannot load a test project after startup.**

Confirm that you are logged in, the working path is correct, and the selected file is a `*.tpx`. If loading by scan, check the barcode rule and the relative project path.

**Q2: Clicking "Test" does nothing.**

Testing requires a loaded project, at least one checked test case, and an entered barcode. Otherwise the UI shows an inline hint or a button shake.

**Q3: The test does not stop immediately after clicking "Stop".**

This is expected. The stop takes effect between test cases; the current case finishes first to protect equipment and the test process.

**Q4: Does the status chip show "Done" instead of "Good count"?**

This was fixed in v3.1.0. After a passed test the chip shows "Done"; the good count appears only as a counts card title.

**Q5: The language or theme switch does not take effect.**

v3.1.0 applies changes at runtime. If nothing changes, verify that `zh.qm` / `en.qm` exist under `i18n` and the qss files exist under `Themes`; missing files fall back to built-in resources.

**Q6: The layout or counts window position changes after restart.**

The layout is stored in `Config\layout.ini` under the program directory. Make sure the directory is writable; to reset, exit, delete the file and start again.

**Q7: Local result queries do not open or have no data.**

Confirm that the local result database exists and the current account can read it. TreeResults opens it read-only; without a network, results are kept locally and can be uploaded later.

**Q8: What permission should the installer run with?**

Run the installer as administrator so it can write to `Program Files` and create common shortcuts.

## 18. Manual Regression Checklist for Test Status

Use this to verify how the six test statuses (Loading / Ready / GO / Pass / Fail / Error) appear in the UI. Confirm and record each item on the test machine.

| # | Status | Steps | Expected Result |
| --- | --- | --- | --- |
| 1 | Loading | After login, click "Load", choose a large `*.tpx` project and confirm. | The chip shows "Loading...", then switches automatically when loading finishes. |
| 2 | Ready | The project is loaded; do not enter a barcode. | The chip shows "Ready"; a project tab and test tree appear. |
| 3 | GO | Check test cases, enter a barcode, click "Test" or press F5. | The chip shows "GO..."; KPIs and the test tree update in real time. |
| 4 | Pass | Run a passing project such as `Example\TestDemo` to completion. | The chip shows "Done"; the good count increases by 1. |
| 5 | Fail | Use a project with a failing case, or set a criterion that must fail, then run. | The chip shows "Failed"; the bad count increases by 1. |
| 6 | Error | Use a script that throws, or disconnect a device and run a case that depends on it. | The chip shows "ERROR"; the log contains exception information and a top banner may appear. |

### Common Checks

- Color and text change together for each status, with clearly distinguishable colors.
- After switching to English, the chip shows Loading..., Ready, GO..., Done, Failed and ERROR respectively.
- The chip width is fixed so the toolbar does not jitter when the text changes.
- The enabled state of Load / Test / Stop matches the current phase.
- After a test finishes, scanning again starts the next round, and the chip returns from "Done" to "Ready" or "GO".

> Recording suggestion: status, time, barcode, test project, actual text and color, and whether it matches expectations; attach a log screenshot for exceptions.

## 19. Support and Contact

| Item | Content |
| --- | --- |
| Website | [www.treeate.top](http://www.treeate.top) |
| Repository | [github.com/WilliamYinwei/TreeATE](https://github.com/WilliamYinwei/TreeATE) |
| Tech column | [CSDN TreeATE column](https://blog.csdn.net/vivasoft/column/info/31202) |
| Email | willage.yin@163.com |
| Community | QQ: 499722676 / 226406709 |

**For details, please visit www.treeate.top**

---

**TreeATE v3.1.0 User Manual** · For details, please visit www.treeate.top

This document is based on the actual v3.1.0 functionality. Related documents: `Doc/UserManual.zh.md`, `Doc/UserManual.en.html`, `README.md`, `README.en.md`, `Changelog.txt`.
