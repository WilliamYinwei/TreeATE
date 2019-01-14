import time

def setup_testdemo():
	__ate.OutputError("setup_testdemo")
	ta.BandObj("msg")

	ret = __ate.GetProjectName()
	__ate.OutputError("GetProjectName:" + ret)
	ret = __ate.GetProjectVer()
	__ate.OutputError("GetProjectVer:" + ret)

def teardown_testdemo():
	__ate.OutputError("teardown_testdemo")

def setup_suite1():
	__ate.OutputError("setup_suite1")
	ret = __ate.GetUserName()
	__ate.OutputError("GetUserName:" + ret)

def teardown_suite1():
	__ate.OutputError("teardown_suite1")
	ret = __ate.GetWorkLine()
	__ate.OutputError("GetWorkLine:" + ret)
	ret = __ate.GetWorkStation()
	__ate.OutputError("GetWorkStation:" + ret)

def setup_suite2():
	__ate.OutputError("setup_suite2")
	ret = __ate.GetProjectBarcode()
	__ate.OutputError("GetProjectBarcode:" + ret)


def teardown_suite2():
	__ate.OutputError("teardown_suite2")
	ret = __ate.GetProjectDesc()
	__ate.OutputError("GetProjectDesc:" + ret)

def test_test1():
	__ate.OutputError("test_test1")
	ret = ta.MsgBox("images/treeate.png", "hello", 0, 5000)
	__ate.OutputError(ret)
	__ate.OutputRst(Name2, Gabc, ret)
	return 0

def test_test2():
	__ate.OutputError("test_test2")
	print "*** This is python print to the error window of the TreeATE."
	ret = ta.AsyncMsgBox("images/temp.gif", "AsyncMsgBox", 0, 5000)
	__ate.OutputError(ret)
	Sleep(5)
	__ate.OutputRst(Name2, Gabc, ret)
	ta.CloseAsyncMsgBox(ret)
	return 0