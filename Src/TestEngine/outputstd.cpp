///
/// @brief         Standard output
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "stdinc.h"
#include "outputstd.h"

OutputStd::OutputStd()
{

}

bool OutputStd::OpenOutput()
{
    return true;
}

void OutputStd::CloseOutput()
{

}

bool OutputStd::Save(const QString &strFileName)
{
    cout << "Test Over [" + strFileName.toStdString() + "]" << endl;
    return true;
}

void OutputStd::printForStart(const QString& time, const QString& path)
{
    cout << "[" << time.toStdString() << "]"
         << " ..... " << path.toStdString() << endl;
}

void OutputStd::printForEnd(const QString& spend, const QString& path, const TestResult::TypeTestRst rst)
{
    cout << "\t... "
         << spend.toStdString()
         << " [" << TestResult::ToString(rst).toStdString() << "]"
         << "\t"
         << path.toStdString()
         << endl;
}

void OutputStd::printForStd(const QString& time, const TestResult rst)
{
    cout << "[" << time.toStdString() << "]"
         << "[" << TestResult::ToString(rst.m_eRst).toStdString() << "] "
         << " ... "
         << rst.m_strName.toStdString() << " = "
         << rst.m_strDesc.toStdString() << " | "
         << rst.m_strStandard.toStdString()
         << endl;
}

bool OutputStd::OutputTestProjectRst(const TestProjectRst& tpr)
{
    printForStart(tpr.m_tStart.toString(TREEATE_DATETIME_FORMAT), tpr.m_strPath);
    return true;
}

bool OutputStd::UpdateTestProjectRst(const TestProjectRst& tpr)
{
    printForEnd(tpr.m_tSpend.toString(TREEATE_TIME_FORMAT), tpr.m_strPath, tpr.m_eRst);
    return true;
}

bool OutputStd::OutputTestSuiteRst(const TestSuiteRst& tsr, const QString& strPathParent)
{
    Q_UNUSED(strPathParent)
    printForStart(tsr.m_tStart.toString(TREEATE_DATETIME_FORMAT), tsr.m_strPath);
    return true;
}

bool OutputStd::UpdateTestSuiteRst(const TestSuiteRst& tsr)
{
    printForEnd(tsr.m_tSpend.toString(TREEATE_TIME_FORMAT), tsr.m_strPath, tsr.m_eRst);
    return true;
}

bool OutputStd::OutputTestCaseRst(const TestCaseRst& tcr, const QString& strPathParent)
{
    Q_UNUSED(strPathParent)
    printForStart(tcr.m_tStart.toString(TREEATE_DATETIME_FORMAT), tcr.m_strPath);
    return true;
}

bool OutputStd::UpdateTestCaseRst(const TestCaseRst& tcr)
{
    printForEnd(tcr.m_tSpend.toString(TREEATE_TIME_FORMAT), tcr.m_strPath, tcr.m_eRst);
    return true;
}

bool OutputStd::OutputDetailRst(const TestResult& tdr, const QString& strPathParent)
{
    Q_UNUSED(strPathParent)
    printForStd(tdr.m_tStart.toString(TREEATE_DATETIME_FORMAT), tdr);
    return true;
}
