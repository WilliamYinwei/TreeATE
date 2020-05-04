///
/// @project       TreeATE
/// @brief         Support cpp language test item
/// @author        David Yin  2020-05 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///
#ifndef DEVLANGCPP_H
#define DEVLANGCPP_H

#include "devlangcpp_global.h"
#include "imutlilang.h"

extern "C" DEVLANGCPPSHARED_EXPORT void* CreateLanguageInst(const char *strLangName);

#include <QLibrary>

class DevLangCpp : public IMutliLang
{
    Q_OBJECT
public:
    DevLangCpp();
    virtual ~DevLangCpp();

    virtual bool loadScript(const QStringList& scriptFiles);
    virtual void addModel(const QString &strObjName, QObject* obj);
    virtual bool initPublicPara(const TA_MapParaValue& publicPara);
    virtual int executeScript(const QString& funcName, const TA_MapParaValue& localValue);

protected:
    bool invokeFunc(const QString funcName, const TA_MapParaValue& para);

private:
    QObject* m_pObj;
    QLibrary m_libTest;
};

#endif // DEVLANGCPP_H
