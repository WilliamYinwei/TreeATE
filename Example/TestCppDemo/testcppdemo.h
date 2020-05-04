///
/// @project       TreeATE
/// @brief         This is test item sample class for cpp language
/// @author        David Yin  2020-05 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///
#ifndef TESTCPPDEMO_H
#define TESTCPPDEMO_H

#include "testcppdemo_global.h"
#include "tacppbase.h"

extern "C" TESTCPPDEMOSHARED_EXPORT void* CreateTestInst(const char *strValue);

class TESTCPPDEMOSHARED_EXPORT TestCppDemo : public TACppBase
{
    Q_OBJECT
public:
    TestCppDemo();

public slots:
    int setup_testdemo();
    int teardown_testdemo();
    int setup_suite1();
    int teardown_suite1();
    int setup_suite2();
    int teardown_suite2();
    int test_test1();
    int test_test2();
};

#endif // TESTCPPDEMO_H
