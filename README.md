# TreeATE
TreeATE是Tree Automatic Test Equipment的缩写，专注服务于工厂成品或半成品测试自动化的一种开源软件工具平台。

## 目标
对接工业物联网，打造简单易用的开源自动化测试软件工具。

## 功能特性
* 为工厂提供统一且简单易用的用户操作界面，减免每个产品测试都有不同的程序操作界面的学习成本；
* 采用多进程技术，支持成品或半成品并行测试，测试运行时更加稳定；
* 主界面支持中文和英文；
* 支持测试工程整体循环测试；
* 支持测试失败则停止测试；
* 支持扫码加载测试工程；
* 支持扫码开始测试；
* 支持无服务器和网络自动切换为本地工作模式，测试结果本地留存；
* 支持测试结果本地查看和管理；
* 提供界面插件扩展接口；
* 支持二次自定义开发(TreeATE Dev)：
  * 支持QtScript（类JavaScript，基于ECMA标准脚本语言）快速开发自动化测试用例；
  * 支持Python语言开发自动化测试用例；
  * 提供设备控制组件化支持；
  * 提供辅助二次开发时所需的人机交互公共组件；
  * 提供TreeATE系统与MES系统的扩展接口和组件样例；
  * 支持测试参数CSV格式文件导入和导出；

TreeATE界面预览
-------------------------------------------------------------------------------
![TreeATE GUI](https://raw.githubusercontent.com/WilliamYinwei/TreeATE/master/Doc/images/TreeATE.png)

TreeATE Dev界面预览
-------------------------------------------------------------------------------
![TreeATE Dev GUI](https://raw.githubusercontent.com/WilliamYinwei/TreeATE/master/Doc/images/TreeATE%20Dev.png)

##开发编译

在编译TreeATE之前，你需要安装QT（>=5.7版本）和以下开发工具：
* [qt-opensource-windows-x86-msvc2013-5.7.0](https://www.qt.io/)	(L)GPL v3
* [QScintilla_gpl-2.10.3](https://riverbankcomputing.com/software/qscintilla/download) GPL v3
* [PythonQt 3.2.0](http://pythonqt.sourceforge.net)	LGPL v2.1

关于以上工具的安装和配置请参见它们的帮助文档。

试用运行
-------------------------------------------------------------------------------
在试用运行之前，一般还需要以下几个操作：
* 手动复制3part/PythonQt/lib/PythonQt-Qt5-PythonXXX.dll(xxx是你本地Python环境的版本号）
