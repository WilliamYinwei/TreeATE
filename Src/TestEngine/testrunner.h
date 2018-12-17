///
/// @brief         Test runner, parse the QtScript and configure file
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef TESTRUNNER_H
#define TESTRUNNER_H

#include "unitmgr.h"
#include "resultmgr.h"

#include <QScriptEngine>
#include <QList>
#include <QMap>

typedef QList<QObject*>         TA_ListObj;

class TestRunner
{
public:
    TestRunner(UnitMgr* pMgr);
    virtual ~TestRunner();

    bool initScript(const QString &prjPath);

    bool runner(const QStringList& selPath, ResultMgr &rstMgr, bool bStopWhenFailed);

    QString getLastError();

    void stop();

protected:
    void initPublicPara();
    int executeScript(const QString &funcName, const TA_MapParaValue &localValue);
    QStringList runningList(const QStringList& selPath);

private:
    bool            m_bStopped;
    UnitMgr*        m_pUnitMgr;
    QScriptEngine   m_engine;
    QString         m_lastErr;
    TA_ListObj      m_lstObj;
    TA_MapParaValue m_mapTotalPara;
    QStringList     m_lstPath;
};

#endif // TESTRUNNER_H
