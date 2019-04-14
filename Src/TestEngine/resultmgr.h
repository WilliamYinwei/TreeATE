///
/// @brief         Test results manager
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef RESULTMGR_H
#define RESULTMGR_H

#include "stdinc.h"
#include "testrststruct.h"
#include "outputmgr.h"

#include <QJsonObject>
#include <QMap>
#include <QObject>

typedef QMap<QString, TestSuiteRst> SA_RST_SUITE;
typedef QMap<QString, TestCaseRst> SA_RST_CASE;

class ResultMgr : public QObject
{
    Q_OBJECT
public:
    ResultMgr();
    virtual ~ResultMgr();

    bool InitResult(const QString& user, const QString& station, const QString &workLine, const QString& barcode);
    void ClearResult();
    void ExitResult();

    bool CreateResult(const QString& strPath, const QJsonObject& objUnit);
    bool UpdateResult(const QString& strPath, const QJsonObject& objUnit,
                      int iRet, const QString &strDesc = "");

    QString getLastError();
    bool UploadResultToSvr();

public slots:
    bool OutputRst(const QString& strName, const QString& strValue, const QString& strStand);
    bool OutputRstEx(const QString& strName, const QString& strValue, const QString& strStand, int nRst);
    void OutputError(const QString& strOutput);
    QString GetProjectName();
    QString GetProjectVer();
    QString GetProjectBarcode();
    QString GetProjectDesc();
    QString GetWorkLine();
    QString GetWorkStation();
    QString GetUserName();

protected:
    TestResult::TypeTestRst updateRst(const QString &strPath,
                                      const TestResult::TypeTestRst& eRst,
                                      int iRet);

private:
    SA_RST_SUITE    m_rstSuite;
    SA_RST_CASE     m_rstCase;
    TestProjectRst  m_rstPrj;
    OutputMgr       m_output;
    QString         m_strCurrPath;
    QString         m_strLastErr;
};

#endif // RESULTMGR_H
