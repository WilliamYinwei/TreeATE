function setup_testdemo()
{
	__ate.OutputError("setup_testdemo");
	ta.BandObj("msg");     

	var ret = __ate.GetProjectName();
	__ate.OutputError("GetProjectName:" + ret);
	ret = __ate.GetProjectVer();
	__ate.OutputError("GetProjectVer:" + ret);
}

function teardown_testdemo()
{
	__ate.OutputError("teardown_testdemo");
}

function setup_suite1()
{
	__ate.OutputError("setup_suite1");
	var ret = __ate.GetUserName();
	__ate.OutputError("GetUserName:" + ret);
}

function teardown_suite1()
{    
	__ate.OutputError("teardown_suite1");
	var ret = __ate.GetWorkLine();
	__ate.OutputError("GetWorkLine:" + ret);
	ret = __ate.GetWorkStation();
	__ate.OutputError("GetWorkStation:" + ret);
}

function setup_suite2()
{
	__ate.OutputError("setup_suite2");
	var ret = __ate.GetProjectBarcode();
	__ate.OutputError("GetProjectBarcode:" + ret);
}

function teardown_suite2()
{
	__ate.OutputError("teardown_suite2");
	var ret = __ate.GetProjectDesc();
	__ate.OutputError("GetProjectDesc:" + ret);
}

function test_test1()
{
	__ate.OutputError("test_test1");
	var ret = ta.MsgBox("images/treeate.png", "hello", 0, 5000);
	__ate.OutputError(ret);
	__ate.OutputRst(Name2, Gabc, ret);
	return 1;
}

function test_test2()
{
	__ate.OutputError("test_test2");
	var ret = ta.AsyncMsgBox("images/login.jpg", "AsyncMsgBox", 0, 5000);
	__ate.OutputError(ret);
	sleep(2000);
	__ate.OutputRst(Name2, Gabc, ret);
	ta.CloseAsyncMsgBox(ret);
	return 0;
}