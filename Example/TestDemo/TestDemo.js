function setup_testdemo()
{
	__ate.OutputError("setup_testdemo中文");
	ta.BandObj("msg"); 

	var ret = __ate.GetProjectName();
	__ate.OutputError("GetProjectName:" + ret);
	ret = __ate.GetProjectVer();
	__ate.OutputError("GetProjectVer:" + ret);
	return 0;
}

function teardown_testdemo()
{
	__ate.OutputError("teardown_testdemo");
	return 0;
}

function setup_suite1()
{
	__ate.OutputError("setup_suite1");
	var ret = __ate.GetUserName();
	__ate.OutputError("GetUserName:" + ret);
	return 0;
}

function teardown_suite1()
{    
	__ate.OutputError("teardown_suite1");
	var ret = __ate.GetWorkLine();
	__ate.OutputError("GetWorkLine:" + ret);
	ret = __ate.GetWorkStation();
	__ate.OutputError("GetWorkStation:" + ret);
	return 0;
}

function setup_suite2()
{
	__ate.OutputError("setup_suite2");
	var ret = __ate.GetProjectBarcode();
	__ate.OutputError("GetProjectBarcode:" + ret);
	return 0;
}

function teardown_suite2()
{
	__ate.OutputError("teardown_suite2");
	var ret = __ate.GetProjectDesc();
	__ate.OutputError("GetProjectDesc:" + ret);
	return 0;
}

function test_test1()
{
	__ate.OutputError("test_test1");
    var ret = 0
    for(i = 0; i < 100; i++) {
	//var ret = ta.MsgBox("images/treeate.png", "hello中文", 0, 5000);
	sleep(300);
	if(__aterun.IsStopped()) {
	    ta.MsgBox("images/treeate.png", "Stopped", 0, 3000);
	    break;
	}
    }
	__ate.OutputError(ret);
	__ate.OutputRst(Name2, Gabc, ret);    
	return 0;
}

function test_test2()
{
	__ate.OutputError("test_test2");
	var ret = ta.AsyncMsgBox("images/temp.gif", "AsyncMsgBox", 0, 5000);
	__ate.OutputError(ret);
	sleep(2000);
	__ate.OutputRst(Name2, Gabc, ret);
	ta.CloseAsyncMsgBox(ret);
	return -3;
}