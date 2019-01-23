///
/// @project       TreeATE
/// @brief         mutli-language interface for testrunner
/// @author        David Yin  2019-01 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef IMUTLILANG_H
#define IMUTLILANG_H

#include <QObject>
#include <QMap>

typedef QMap<QString, QString>  TA_MapParaValue;

class IMutliLang : public QObject
{
public:
    virtual bool loadScript(const QStringList& scriptFiles) = 0;
    virtual void addModel(const QString &strObjName, QObject* obj) = 0;
    virtual bool initPublicPara(const TA_MapParaValue& publicPara) = 0;
    virtual int executeScript(const QString& funcName, const TA_MapParaValue& localValue) = 0;

    QString getLastErr() { return m_lastErr; }

protected:
    QString m_lastErr;
};

#endif // IMUTLILANG_H
