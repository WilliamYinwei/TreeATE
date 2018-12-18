///
/// @brief         Test Result struct
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef TESTRSTSTRUCT_H
#define TESTRSTSTRUCT_H

#include <QString>
#include <QDebug>
#include <QDateTime>
#include <QTime>

// detail result and based result
class TestResult
{
public:
    TestResult(){m_eRst = INFO;}
    virtual ~TestResult(){}

    enum TypeTestRst{INFO = 0, PASS, FAIL, EXCE};
    static QString ToString(TypeTestRst eRst) {
        QString strRst;
        switch(eRst)
        {
        case INFO:
            strRst = "Info";
            break;
        case PASS:
            strRst = "Pass";
            break;
        case FAIL:
            strRst = "Fail";
            break;
        case EXCE:
            strRst = "Exce";
            break;
        default:
            qDebug() << "No defined, eRst = " << eRst << endl;
            break;
        };
        return strRst;
    }
    static TypeTestRst FromString(const QString& str) {
        if(str == "Info")
        {
            return INFO;
        }
        else if(str == "Pass")
        {
            return PASS;
        }
        else if(str == "Fail")
        {
            return FAIL;
        }
        else if(str == "Exce")
        {
            return EXCE;
        }
        return INFO;
    }

public:
    TypeTestRst m_eRst;     // test result
    QDateTime  m_tStart;        // start time of test
    QTime   m_tTime;
    QString m_strName;      // test name
    QString m_strDesc;      // description of test result
    QString m_strPath;      // path of name
    QString m_strStandard;  // description of test standard
};

// Result of the test case
class TestCaseRst : public TestResult
{
public:
    TestCaseRst(){}
    virtual ~TestCaseRst(){}

public:
    QTime   m_tSpend;  // spend time of the testing
};

// Result of the test suite
class TestSuiteRst : public TestCaseRst
{
public:
    TestSuiteRst(){m_nCount = 0;}
    virtual ~TestSuiteRst(){}

public:
    unsigned int m_nCount;      // Count of these test case
};

// Result of the test project
class TestProjectRst : public TestSuiteRst
{
public:
    TestProjectRst() {}
    virtual ~TestProjectRst() {}

public:
    QString m_strBarcode;     // Product Serial Number or QR-Code
    QString m_strUser;   // Tester name
    QString m_strStation; // Station name or flag
    QString m_strVersion; // Current version of the test project
    QString m_strLineName;  // Working Line name
};


#endif // TESTRSTSTRUCT_H
