///
/// @brief         TreeATE language manager: manifest, runtime switch, persistence
/// @author        David Yin  2026-11-22  M2 新增中英文运行时切换与语言清单
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "languagemanager.h"

#include <QApplication>
#include <QCoreApplication>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QLocale>
#include <QTranslator>
#include <QVariantMap>
#include <QDebug>

LanguageManager* LanguageManager::instance()
{
    static LanguageManager* s_pInstance = nullptr;
    if(!s_pInstance)
        s_pInstance = new LanguageManager();
    return s_pInstance;
}

LanguageManager::LanguageManager(QObject* parent)
    : QObject(parent),
      m_bInitialized(false),
      m_strDefaultCode("en-US"),
      m_pTranslator(nullptr)
{
}

void LanguageManager::initialize()
{
    if(m_bInitialized)
        return;
    m_bInitialized = true;

    loadManifest();
}

bool LanguageManager::loadManifest()
{
    m_lstLanguages.clear();

    const QString strDisk = QCoreApplication::applicationDirPath() + "/i18n/treeate/languages.json";
    QFile file(strDisk);
    if(!file.open(QIODevice::ReadOnly)) {
        file.setFileName(":/i18n/languages.json");
        if(file.open(QIODevice::ReadOnly))
            qWarning() << "LanguageManager: use built-in languages.json";
        else
            qWarning() << "LanguageManager: languages.json not found, scan *.qm";
    }

    if(file.isOpen()) {
        QJsonParseError jsonErr;
        QJsonDocument jsonDoc = QJsonDocument::fromJson(file.readAll(), &jsonErr);
        file.close();
        if(jsonDoc.isNull()) {
            qWarning() << "LanguageManager: languages.json parse error:" << jsonErr.errorString();
        }
        else {
            QVariantMap vmRoot = jsonDoc.toVariant().toMap();
            QString strDefault = vmRoot.value("default").toString();
            if(!strDefault.isEmpty())
                m_strDefaultCode = normalizeCode(strDefault);

            QVariantList vlLanguages = vmRoot.value("languages").toList();
            for(int i = 0; i < vlLanguages.count(); i++) {
                QVariantMap vmItem = vlLanguages.at(i).toMap();
                LanguageInfo info;
                info.code = normalizeCode(vmItem.value("code").toString());
                info.nativeName = vmItem.value("nativeName").toString();
                info.englishName = vmItem.value("englishName").toString();
                info.qm = vmItem.value("qm").toString();
                if(info.code.isEmpty())
                    continue;
                if(info.nativeName.isEmpty())
                    info.nativeName = info.code;
                if(info.englishName.isEmpty())
                    info.englishName = info.nativeName;
                if(info.qm.isEmpty())
                    info.qm = info.code + ".qm";
                m_lstLanguages.append(info);
            }
        }
    }

    // 清单缺失或为空时扫描 *.qm 兜底
    if(m_lstLanguages.isEmpty())
        appendScannedLanguages();

    // 保证中英两项存在
    if(indexOfCode("zh-CN") < 0) {
        LanguageInfo info;
        info.code = "zh-CN";
        info.nativeName = QString::fromUtf8("简体中文");
        info.englishName = "Chinese (Simplified)";
        info.qm = "zh.qm";
        m_lstLanguages.append(info);
    }
    if(indexOfCode("en-US") < 0) {
        LanguageInfo info;
        info.code = "en-US";
        info.nativeName = "English";
        info.englishName = "English";
        info.qm = "en.qm";
        m_lstLanguages.append(info);
    }

    if(indexOfCode(m_strDefaultCode) < 0)
        m_strDefaultCode = m_lstLanguages.isEmpty() ? QString("en-US") : m_lstLanguages.first().code;

    return !m_lstLanguages.isEmpty();
}

void LanguageManager::appendScannedLanguages()
{
    const QString strPath = QCoreApplication::applicationDirPath() + "/i18n/treeate/";
    QDir dir(strPath);
    QStringList lstFiles = dir.entryList(QStringList() << "*.qm", QDir::Files);
    for(const QString& strFile : lstFiles) {
        LanguageInfo info;
        info.code = normalizeCode(strFile);
        if(info.code.isEmpty())
            info.code = QFileInfo(strFile).completeBaseName();
        if(indexOfCode(info.code) >= 0)
            continue;
        info.qm = strFile;
        info.nativeName = info.code;
        info.englishName = info.code;
        if(info.code == "zh-CN")
            info.nativeName = QString::fromUtf8("简体中文");
        m_lstLanguages.append(info);
    }
}

QList<LanguageInfo> LanguageManager::languages() const
{
    return m_lstLanguages;
}

QString LanguageManager::currentCode() const
{
    return m_strCurrentCode;
}

QString LanguageManager::currentNativeName() const
{
    int nIdx = indexOfCode(m_strCurrentCode);
    if(nIdx >= 0)
        return m_lstLanguages.at(nIdx).nativeName;
    return m_strCurrentCode;
}

QString LanguageManager::startupCode() const
{
    QString strLegacy;
    QFile file(QCoreApplication::applicationDirPath() + "/Config/sys.cfg");
    if(file.open(QIODevice::ReadOnly)) {
        QJsonParseError jsonErr;
        QJsonDocument jsonDoc = QJsonDocument::fromJson(file.readAll(), &jsonErr);
        file.close();
        if(jsonDoc.isNull()) {
            qWarning() << "LanguageManager: sys.cfg parse error:" << jsonErr.errorString();
        }
        else {
            QVariantMap vm = jsonDoc.toVariant().toMap();
            QString strCode = normalizeCode(vm.value("LanguageCode").toString());
            if(indexOfCode(strCode) >= 0)
                return strCode;
            strLegacy = normalizeCode(vm.value("Language").toString());
            if(indexOfCode(strLegacy) >= 0)
                return strLegacy;
        }
    }

    QString strSystem = normalizeCode(QLocale::system().name());
    if(indexOfCode(strSystem) >= 0)
        return strSystem;

    if(indexOfCode(m_strDefaultCode) >= 0)
        return m_strDefaultCode;
    return m_lstLanguages.isEmpty() ? QString("en-US") : m_lstLanguages.first().code;
}

bool LanguageManager::applyLanguage(const QString& strCode, QString* pError)
{
    QString strNormalized = normalizeCode(strCode);
    int nIdx = indexOfCode(strNormalized);
    if(nIdx < 0) {
        if(pError)
            *pError = tr("Language \"%1\" is not available.").arg(strCode);
        return false;
    }

    const LanguageInfo info = m_lstLanguages.at(nIdx);
    QTranslator* pNewTranslator = new QTranslator(this);
    const QString strPath = QCoreApplication::applicationDirPath() + "/i18n/treeate/";
    if(!pNewTranslator->load(info.qm, strPath)) {
        delete pNewTranslator;
        qWarning() << "LanguageManager: failed to load" << info.qm << "from" << strPath;
        if(pError)
            *pError = tr("Failed to load language file \"%1\".").arg(info.qm);
        return false;
    }

    qApp->installTranslator(pNewTranslator);
    if(m_pTranslator) {
        qApp->removeTranslator(m_pTranslator);
        delete m_pTranslator;
    }
    m_pTranslator = pNewTranslator;
    m_strCurrentCode = strNormalized;
    qInfo() << "LanguageManager: applied language" << strNormalized << info.qm;

    saveLanguage(strNormalized);
    emit languageChanged(strNormalized);
    return true;
}

QString LanguageManager::normalizeCode(const QString& strRaw)
{
    QString strValue = strRaw.trimmed();
    if(strValue.isEmpty())
        return QString();

    if(strValue.endsWith(".qm", Qt::CaseInsensitive))
        strValue.chop(3);
    strValue.replace('_', '-');

    const QString strLower = strValue.toLower();
    if(strLower == "zh" || strLower.startsWith("zh-"))
        return "zh-CN";
    if(strLower == "en" || strLower.startsWith("en-"))
        return "en-US";

    return strValue;
}

int LanguageManager::indexOfCode(const QString& strCode) const
{
    for(int i = 0; i < m_lstLanguages.count(); i++) {
        if(m_lstLanguages.at(i).code == strCode)
            return i;
    }
    return -1;
}

QString LanguageManager::legacyValue(const QString& strCode) const
{
    if(strCode == "zh-CN")
        return "zh.qm";
    if(strCode == "en-US")
        return "en.qm";
    int nIdx = indexOfCode(strCode);
    if(nIdx >= 0)
        return m_lstLanguages.at(nIdx).qm;
    return strCode + ".qm";
}

void LanguageManager::saveLanguage(const QString& strCode) const
{
    const QString strPath = QCoreApplication::applicationDirPath() + "/Config/sys.cfg";

    QVariantMap vmCfg;
    QFile file(strPath);
    if(file.open(QIODevice::ReadOnly)) {
        QJsonDocument jsonDoc = QJsonDocument::fromJson(file.readAll());
        if(!jsonDoc.isNull())
            vmCfg = jsonDoc.toVariant().toMap();
        file.close();
    }

    vmCfg.insert("LanguageCode", strCode);
    vmCfg.insert("Language", legacyValue(strCode));

    QDir().mkpath(QCoreApplication::applicationDirPath() + "/Config");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        qWarning() << "LanguageManager: cannot write" << strPath << file.errorString();
        return;
    }
    file.write(QJsonDocument::fromVariant(vmCfg).toJson());
    file.close();
}
