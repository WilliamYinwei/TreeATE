## TreeATE系统架构
在基于TreeATE开发自动化测试工程之前，先了解一下TreeATE的整体架构。如下图所示：
![TreeATE系统架构图](https://raw.githubusercontent.com/WilliamYinwei/TreeATE/master/Doc/images/arch.png)
TreeATE借鉴了Chrome的多进程设计思路，支持并行化测试。每个独立的测试进程由“Test Engine”承接。 TreeATE（GUI）是向工厂用户提供的HMI（人机交互界面），详见博客《[开始使用TreeATE](https://blog.csdn.net/vivasoft/article/details/86063014)》。
“Test Engine”是TreeATE的核心，向下负责管理不同设备驱动，对接MES系统、测试结果输出（数据库）、图形化人机界面插件，向上接受不同种语言的测试用例（当前版本支持JavaScript和Python）和测试参数配置等数据。
而TreeATE Dev（以下简称Dev）就是本文需要介绍的重点了。通过TreeATE可以编辑测试参数配置文件和开发测试用例。当然像上面提到的各种组件需要通过QT进行开发，详情的请关注[TreeATE专栏](https://blog.csdn.net/vivasoft/column/info/31202)，找到TreeATE组件或插件开发指南。

## 新建测试工程
打开Dev有2种方式，一种是在安装目录下找到TreeATEDev.exe，另一种是选择TreeATE的菜单“测试工程”->“开发”即可。在第二种打开方式下，如果TreeATE有已加载的测试工程，则无法新建，仅是修改当前打开的测试工程。
 1. 点击菜单“Project”->“New”，出现New Project对话框；
 2. 在New Project对话框中先选择好测试工程的默认工作路径，再输入测试工程名称（名称不能有空格）；
 3. 选择需要采用JavaScript还是Python语言开发测试用例；
 4. 点击OK确认新建测试工程。

在“Project files”窗口中可以看到，Dev系统自动添加了3个文件，后缀分别是：
 - tp：测试工程组织配置文件。测试套和测试项的参数、测试顺序都在该文件中存储。
 - tpx：测试工程公共配置文件。测试工程的公共参数配置，是否需要支持并行测试等配置都在此。
 - js/py：支持Javascript和Python的测试用例脚本文件。

## 导入测试组件
测试工程依赖的各种组件，在这里统称为测试组件。例如组件TA_MsgBox（测试过程中的提示框），找到组件所在位置，选择“Import”按钮或菜单“Project”->“Import”，在对话框"Import Files"选择Lib files(*.dll *.js)选项，再选择需要的组件导入。导入后，可以在“Project files”窗口中看到被导入的组件都放在"libs"文件夹中。

为了在测试时向用户提示更为友好，MsgBox中可以显示自定义的图片，目前支持jpg/png/gif三种格式。
图片也可以通过Dev系统导入到测试工程中，在导入文件的对话框“Import Files”选择Images选项，再选择图片文件导入。导入后，可以在“Project files”窗口中看到被导入的图片都放在"images"文件夹中。
>在窗口“Project files”里选中组件文件名，可以查看组件的函数；如果是图片，可以快速预览。

## 配置测试工程
测试工程配置分为2个部分：配置tpx文件和tp文件2部分。
### 配置tpx文件
在窗口“Project files”里选中后缀为tpx的工程配置文件，将会在“Property”窗口中显示测试工程可以配置的如下信息：
 - Project Version：测试工程版本号，自定义字符串的版本格式。
 - Project Name：测试工程名。
 - Description：测试工程描述信息。
 - Regex of the barcode：测试工程对应的被测产品条码正则表达式规则。
 - Loop counts：测试工程整体循环次数。
 - 2个选项选中为生效，分别表示为测试当次失败后则后续未开始测试的项不再测试（即停止）和循环测试中遇到有测试失败时停止后续的循环测试。

以上内容可以直接编辑和修改，记得及时保存（Ctrl+S）。紧接着是下面可编辑内容：
 - 当前测试工程依赖的界面插件：该表格可以添加多个界面插件，点击鼠标右键选择弹出菜单“Insert”。在Name栏中输入界面插件的对象名称，在Lib栏中输入dll文件名称（不带路径）。例如添加GUI_TA_MsgBox对话提示框界面插件，Name：msg，Lib：GUI_TA_MsgBox.dll。
 - 测试工程并行化配置：TreeATE支持简单的测试工程级并行化测试。例如需要2个testdemo.tp测试工程并行测试，在该表格中点击鼠标右键选择弹出菜单“Insert”，在Name栏中输入可以区分的名称（分别输入Demo1和Demo2），在File栏中输入相同的testdemo.tp即可。按照以上操作后TreeATE中会显示如下结构（在TreeATE中加载该测试工程）：
> - **Demo1**
>   - TestSuite1
>     - Item
>   - TestSuite2 
> - **Demo2**
>   - TestSuite1
>   - TestSuite2
### 配置tp文件
在“Project files”窗口选中tp文件，将会在“Property”窗口中显示如下：
 - 测试组件：可在此添加和删除测试工程所需的测试组件。Object栏为对象名称（等同于JavaScript的变量名称），测试用例中将会用到组件对象名称。“Library file name”为组件文件名，例如TA_MsgBox.dll。在Example附带的测试工程例子中ta为TA_MsgBox组件的对象名。
 - 公共参数：是指大部分测试项需要共用的参数定义区。可在此添加和删除测试工程所需的公共参数。有参数名称（Parameter name，等同于JavaScript的变量名称）、参数对应的默认值、参数描述。

## 配置测试用例
在配置好测试工程信息后，就开始编辑测试用例了。先了解TreeATE测试用例的**组织规则**、**运行规则**和**读取配置参数规则**。
### 组织规则
第一级为测试工程，第二级为测试套，第三级为测试项。一个测试工程中可以包含多个测试套，一个测试套中可以包含多个测试项，反向包含不可以。
> - 测试工程
>   - 测试套
>     - 测试项

### 运行规则
整体的运行顺序按照组织结构的顺序自上而下。测试套和测试工程都有**setup_** 和 **teardown_** 为前缀的接口，测试项仅以**test_** 为前缀的接口。以Example中的TestDemo为例，测试运行顺序如下：
```
setup_testdemo()	 
setup_suite1()   
test_test1() 
// 运行其他 test_ 的测试项
teardown_suite1()
// 运行其他测试套
teardown_testdemo()      
```
**注： 以上接口函数返回 0 表示测试成功，反之测试失败。**
### 读取配置参数规则
配置参数分测试工程公共参数和测试单元的参数。测试工程公共参数所在位置已在前面**配置tp文件**中提到。测试单元参数是紧随测试单元的，例如在Example中的TestDemo测试工程，可以看到Name1和Name2两列，Name1和Name2就是测试单元的参数名称，下面对应的内容就是参数值。
**规则：** 测试运行时先查找本测试单元内是否有该参数，如果没有就查找上一级是否有，一直到顶级的测试工程公共参数。如果都没有，运行时将会产生运行异常（在TreeATE中是黄色状态提示）。

### 编辑测试项
在“Edit”->"Test Item"菜单中或者鼠标右键弹出菜单中可以编辑测试项。
 - “Add Sub Item”：需要添加子项时选择。
 - “Insert Item”：插入项目时选择。
 - “Remove Item”：删除测试项时选择，需要鼠标右键点击在被删除的测试项上。
 - “Inser Parameter”：插入测试项的参数（列表示）。
 - “Remove Parameter”：删除测试项的参数（列表示），需要鼠标右键点击在被删除的参数上。
 - 双击鼠标左键修改对应的内容，例如测试项名称和描述。

### 调整测试项的组织（执行）顺序
在“Edit”->"Test Item"菜单中或者鼠标右键弹出菜单中找到“Up Item”和“Down Item”就可以调整。
 - Up Item：表示选中的测试项上移。
 - Down Item：表示选中的测试项下移。

不可以超过被选中的单元所在级别。测试项只能在当前的测试套中上下移动顺序，测试套只能在当前的测试工程内上下移动顺序。
### 开发各个测试用例
在树形的测试单元框中鼠标左键点击需要开发测试用例（包含测试工程、测试套和测试项）名称，下方脚本编辑器将自动定位到测试用例函数位置（如果存在，否则将自动创建）。例如开发内容如下：

```
function test_test1()
{
	__ate.OutputError("test_test1");
	var ret = ta.MsgBox("images/treeate.png", "hello", 0, 5000);
	__ate.OutputError(ret);
	__ate.OutputRst(Name2, Gabc, ret);    
	return 0;
}
```
```
def test_test1():

	__ate.OutputError("test_test1")
	ret = ta.MsgBox("images/treeate.png", "hello", 0, 5000)
	__ate.OutputError(ret)
	__ate.OutputRst(Name2, Gabc, ret)
	return 0
```
>测试用例代码中__ate为TreeATE系统Test Engine固定的对象名。关于__ate的接口说明将在另外的博客中描述。

首先函数test_test1是测试项名称为test1的执行接口，测试引擎会自动调用。函数的命名规则请参见**运行规则**。
第3行是将字符串内容“test_test1”输出到TreeATE界面的当前测试工程中**错误**输出窗口。
第4行中的对象ta，就是前面配置的TA_MsgBox组件对象名称（在**配置tp文件**中有提到）。当测试执行到MsgBox时，会在TreeATE界面显示一个有超时为5000毫秒，提示内容为“hello”，并且显示了图片treeate.png的提示对话框。MsgBox对话框如果在5000毫秒（5秒）之内没有任何操作，该对话框将自动按照默认选择关闭。
第6行OutputRst为该测试项输出**测试结果描述**。描述格式内容为：Name2=Gabc，ret将输出到该测试项的**测试标准**字段。运行Example中的TestDemo样例后，可以在TreeATE界面上看到这些输出。
>Name2是前面配置定义的测试项参数名称，Gabc是tp测试工程文件中配置定义的公共参数名称。

第7行的return 0表示当前测试项测试成功，返回其他值表示测试失败。
## 发布测试工程
当前版本发布测试工程为自行压缩测试工程文件夹，复制到工厂环境使用，后续将会增加远程发布测试工程功能。
