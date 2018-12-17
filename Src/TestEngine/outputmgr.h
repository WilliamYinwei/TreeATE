///
/// @brief         Output model manager
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef OUTPUTMGR_H
#define OUTPUTMGR_H

#include "testrststruct.h"
#include "ioutput.h"

class OutputMgr
{
public:
    OutputMgr();
    ~OutputMgr();

    bool OpenOutput(QString &strErr);
    void CloseOutput();
    bool Save(const QString& strFileName);
    bool UploadResult();
    void DeleteLocalResult(const QString& strFileName);

    bool OutputTestProjectRst(const TestProjectRst& tpr);
    bool UpdateTestProjectRst(const TestProjectRst& tpr);

    bool OutputTestSuiteRst(const TestSuiteRst& tsr, const QString& strPathParent);
    bool UpdateTestSuiteRst(const TestSuiteRst& tsr);

    bool OutputTestCaseRst(const TestCaseRst& tcr, const QString& strPathParent);
    bool UpdateTestCaseRst(const TestCaseRst& tcr);

    bool OutputDetailTestRst(const TestResult& tdr, const QString& strPathParent);

protected:
    bool uploadRst(const QJsonValue& json);

private:
    QList<IOutput*> m_lstOutput;
    IOutput*        m_pOutputSvr;
    IOutput*        m_pOutputLocal;
    QString         m_appStrPath;
};

#endif // OUTPUTMGR_H
