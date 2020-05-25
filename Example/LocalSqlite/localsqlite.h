///
/// @brief         demo of the output to database model
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef LOCALSQLITE_H
#define LOCALSQLITE_H

#include "localsqlite_global.h"

#include "../../Src/TestEngine/ioutput.h"

#include <QSqlDatabase>

class LOCALSQLITESHARED_EXPORT LocalSqlite : public IOutput
{

public:
    LocalSqlite();
    ~LocalSqlite();

    virtual bool OpenOutput();
    virtual void CloseOutput();
    virtual bool Save(const QString &strFileName);

    virtual bool OutputTestProjectRst(const TestProjectRst& tpr);
    virtual bool UpdateTestProjectRst(const TestProjectRst& tpr);

    virtual bool OutputTestSuiteRst(const TestSuiteRst& tsr, const QString& strPathParent);
    virtual bool UpdateTestSuiteRst(const TestSuiteRst& tsr);

    virtual bool OutputTestCaseRst(const TestCaseRst& tcr, const QString& strPathParent);
    virtual bool UpdateTestCaseRst(const TestCaseRst& tcr);

    virtual bool OutputDetailRst(const TestResult& tdr, const QString& strPathParent);

private:
    QSqlDatabase m_dbSqlite;
    QMap<QString, int>  m_mpPath;
    bool         m_bOK;
};

#endif // LOCALSQLITE_H
