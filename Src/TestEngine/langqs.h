///
/// @project       TreeATE
/// @brief         parser test for QtScript
/// @author        David Yin  2019-01 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef LANGQS_H
#define LANGQS_H

#include "imutlilang.h"

#include <QScriptEngine>

class LangQS : public IMutliLang
{
    Q_OBJECT
public:
    LangQS();
    virtual bool loadScript(const QStringList& scriptFiles);
    virtual void addModel(const QString &strObjName, QObject* obj);
    virtual bool initPublicPara(const TA_MapParaValue& publicPara);
    virtual int executeScript(const QString& funcName, const TA_MapParaValue& localValue);

private:
    QScriptEngine   m_engine;
};

#endif // LANGQS_H
