///
/// @project       TreeATE
/// @brief         This is test item base class for cpp language
/// @author        David Yin  2020-05 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///
#include "tacppbase.h"
#include <QMetaObject>

TACppBase::TACppBase()
{
}

void TACppBase::addModel(const QString &strObjName, QObject* obj)
{
    m_models.insert(strObjName, obj);
    if(strObjName == "__ate") {
        m_ate = obj;
    }
    else if(strObjName == "__aterun") {
        m_ateRun = obj;
    }
}

void TACppBase::addPublicPara(const QString& strName, const QString& strValue)
{
    m_publicPara.insert(strName, strValue);
}

void TACppBase::setLocalPara(const QString& strName, const QString& strValue)
{
    m_localPara.insert(strName, strValue);
}

QObject* TACppBase::getObj(const QString& strName)
{
    auto itor = m_models.find(strName);
    if( itor != m_models.end()) {
        return *itor;
    }

    return NULL;
}

QString TACppBase::getParaValue(const QString& strName)
{
    auto itor = m_localPara.find(strName);
    if(itor != m_localPara.end()) {
        return *itor;
    }
    else {
        auto itPublic = m_publicPara.find(strName);
        if(itPublic != m_publicPara.end()) {
            return *itPublic;
        }
    }
    return "";
}

bool TACppBase::OutputRst(const QString& strName, const QString& strValue, const QString& strStand)
{
    bool bRet = false;
    if(m_ate) {
        QMetaObject::invokeMethod(m_ate, "OutputRst",
                                  Q_RETURN_ARG(bool, bRet),
                                  Q_ARG(QString, strName),
                                  Q_ARG(QString, strValue),
                                  Q_ARG(QString, strStand));
    }
    return bRet;
}

bool TACppBase::OutputRstEx(const QString& strName, const QString& strValue, const QString& strStand, int nRst)
{
    bool bRet = false;
    if(m_ate) {
        QMetaObject::invokeMethod(m_ate, "OutputRstEx",
                                  Q_RETURN_ARG(bool, bRet),
                                  Q_ARG(QString, strName),
                                  Q_ARG(QString, strValue),
                                  Q_ARG(QString, strStand),
                                  Q_ARG(int, nRst));
    }
    return bRet;
}

void TACppBase::OutputError(const QString& strOutput)
{
    if(m_ate) {
        QMetaObject::invokeMethod(m_ate, "OutputError",
                                  Q_ARG(QString, strOutput));
    }
}

QString TACppBase::GetProjectName()
{
    QString strValue;
    if(m_ate) {
        QMetaObject::invokeMethod(m_ate, "GetProjectName",
                                  Q_RETURN_ARG(QString, strValue));
    }
    return strValue;
}

QString TACppBase::GetProjectVer()
{
    QString strValue;
    if(m_ate) {
        QMetaObject::invokeMethod(m_ate, "GetProjectVer",
                                  Q_RETURN_ARG(QString, strValue));
    }
    return strValue;
}

QString TACppBase::GetProjectBarcode()
{
    QString strValue;
    if(m_ate) {
        QMetaObject::invokeMethod(m_ate, "GetProjectBarcode",
                                  Q_RETURN_ARG(QString, strValue));
    }
    return strValue;
}

QString TACppBase::GetProjectDesc()
{
    QString strValue;
    if(m_ate) {
        QMetaObject::invokeMethod(m_ate, "GetProjectDesc",
                                  Q_RETURN_ARG(QString, strValue));
    }
    return strValue;
}

QString TACppBase::GetWorkLine()
{
    QString strValue;
    if(m_ate) {
        QMetaObject::invokeMethod(m_ate, "GetWorkLine",
                                  Q_RETURN_ARG(QString, strValue));
    }
    return strValue;
}

QString TACppBase::GetWorkStation()
{
    QString strValue;
    if(m_ate) {
        QMetaObject::invokeMethod(m_ate, "GetWorkStation",
                                  Q_RETURN_ARG(QString, strValue));
    }
    return strValue;
}

QString TACppBase::GetUserName()
{
    QString strValue;
    if(m_ate) {
        QMetaObject::invokeMethod(m_ate, "GetUserName",
                                  Q_RETURN_ARG(QString, strValue));
    }
    return strValue;
}

int TACppBase::GetTotalRst()
{
    int iRet = -1;
    if(m_ate) {
        QMetaObject::invokeMethod(m_ate, "GetTotalRst",
                                  Q_RETURN_ARG(int, iRet));
    }
    return iRet;
}

// __aterun object
bool TACppBase::IsStopped()
{
    bool bRet = false;
    if(m_ateRun) {
        QMetaObject::invokeMethod(m_ateRun, "IsStopped",
                                  Q_RETURN_ARG(bool, bRet));
    }
    return bRet;
}
