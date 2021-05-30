///
/// @project       TreeATE
/// @brief         This is test item sample class for cpp language
/// @author        David Yin  2020-05 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///
#include "testcppdemo.h"
#include <QThread>

void* CreateTestInst(const char *strValue)
{
    Q_UNUSED(strValue)
    return new TestCppDemo();
}

TestCppDemo::TestCppDemo()
{
}

int TestCppDemo::setup_testdemo()
{
    OutputError("setup_testdemo中文");

    QString name = GetProjectName();
    OutputError("GetProjectName:" + name);
    QString ver = GetProjectVer();
    OutputError("GetProjectVer:" + ver);
    return 0;
}

int TestCppDemo::teardown_testdemo()
{
    OutputError("teardown_testdemo");
    return 0;
}

int TestCppDemo::setup_suite1()
{
    OutputError("setup_suite1");
    QString ret = GetUserName();
    OutputError("GetUserName:" + ret);
    return 0;
}

int TestCppDemo::teardown_suite1()
{
    OutputError("teardown_suite1");
    QString ret = GetWorkLine();
    OutputError("GetWorkLine:" + ret);
    ret = GetWorkStation();
    OutputError("GetWorkStation:" + ret);
    return 0;
}

int TestCppDemo::setup_suite2()
{
    OutputError("setup_suite2");
    QString ret = GetProjectBarcode();
    OutputError("GetProjectBarcode:" + ret);
    return 0;
}

int TestCppDemo::teardown_suite2()
{
    OutputError("teardown_suite2");
    QString ret = GetProjectDesc();
    OutputError("GetProjectDesc:" + ret);
    QString rst = QString::number(GetTotalRst());
    OutputError("GetTotalRst:" + rst);
    return 0;
}

int TestCppDemo::test_test1()
{
    OutputError("test_test1");

    for(int i = 0; i < 100; i++) {
        QThread::msleep(300);
        if(IsStopped()) {
            break;
        }
    }
    OutputRst(getParaValue("Name2"), getParaValue("Gabc"), "0");
    return 0;
}

int TestCppDemo::test_test2()
{
    return 0;
}
