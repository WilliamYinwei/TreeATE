///
/// @brief         TreeATE theme manager: load/validate/apply three fixed themes
/// @author        David Yin  2026-11-22  M2 新增三主题运行时加载、回退与持久化
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "thememanager.h"

#include <QApplication>
#include <QCoreApplication>
#include <QDir>
#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QStyle>
#include <QWidget>
#include <QDebug>

static const char* kDefaultThemeKeys[] = { "classic", "light", "dark" };

ThemeManager* ThemeManager::instance()
{
    static ThemeManager* s_pInstance = nullptr;
    if(!s_pInstance)
        s_pInstance = new ThemeManager();
    return s_pInstance;
}

ThemeManager::ThemeManager(QObject* parent)
    : QObject(parent),
      m_bInitialized(false),
      m_nCurrent(Classic),
      m_strDefaultKey("classic")
{
}

void ThemeManager::initialize()
{
    if(m_bInitialized)
        return;
    m_bInitialized = true;

    loadManifest();

    QString strWanted = readUiTheme();
    if(strWanted.isEmpty())
        strWanted = m_strDefaultKey;

    int nWanted = themeIndexFromKey(strWanted);
    if(nWanted < 0)
        nWanted = themeIndexFromKey(m_strDefaultKey);
    if(nWanted < 0)
        nWanted = themeIndexFromKey("classic");
    if(nWanted < 0)
        nWanted = 0;

    applyTheme(nWanted);
}

bool ThemeManager::loadManifest()
{
    m_lstThemeKeys.clear();
    m_mapThemeFiles.clear();
    m_mapThemeNames.clear();
    m_mapTokens.clear();

    QVariantMap vmRoot;
    QString strManifest = QCoreApplication::applicationDirPath() + "/Themes/theme.json";
    QFile file(strManifest);
    if(!file.open(QIODevice::ReadOnly)) {
        file.setFileName(":/Themes/theme.json");
        if(file.open(QIODevice::ReadOnly))
            qWarning() << "ThemeManager: use built-in theme.json";
        else
            qWarning() << "ThemeManager: theme.json not found, use built-in defaults";
    }

    if(file.isOpen()) {
        QJsonParseError jsonErr;
        QJsonDocument jsonDoc = QJsonDocument::fromJson(file.readAll(), &jsonErr);
        file.close();
        if(jsonDoc.isNull()) {
            qWarning() << "ThemeManager: theme.json parse error:" << jsonErr.errorString();
        }
        else {
            vmRoot = jsonDoc.toVariant().toMap();
        }
    }

    QString strDefault = vmRoot.value("default").toString();
    if(!strDefault.isEmpty())
        m_strDefaultKey = strDefault;

    QVariantList vlThemes = vmRoot.value("themes").toList();
    for(int i = 0; i < vlThemes.count(); i++) {
        QVariantMap vmTheme = vlThemes.at(i).toMap();
        QString strId = vmTheme.value("id").toString();
        if(strId.isEmpty())
            continue;
        QString strName = vmTheme.value("name").toString();
        if(strName.isEmpty())
            strName = strId;
        QString strQss = vmTheme.value("qss").toString();
        if(strQss.isEmpty())
            strQss = strId + ".qss";

        m_lstThemeKeys.append(strId);
        m_mapThemeNames.insert(strId, strName);
        m_mapThemeFiles.insert(strId, strQss);
    }

    // 三套固定主题必须齐全，清单缺失时补齐内置定义
    for(const char* pKey : kDefaultThemeKeys) {
        QString strKey = QString::fromLatin1(pKey);
        if(!m_mapThemeFiles.contains(strKey)) {
            m_lstThemeKeys.append(strKey);
            m_mapThemeFiles.insert(strKey, strKey + ".qss");
            m_mapThemeNames.insert(strKey, strKey.left(1).toUpper() + strKey.mid(1));
        }
    }

    QVariantMap vmTokens = vmRoot.value("tokens").toMap();
    for(const QString& strKey : m_lstThemeKeys) {
        QVariantMap vmOne = vmTokens.value(strKey).toMap();
        if(vmOne.isEmpty())
            vmOne = defaultTokens(themeIndexFromKey(strKey));
        m_mapTokens.insert(strKey, vmOne);
    }

    // 校验三套主题 QSS 是否可读，缺失时记日志（应用时回退 classic）
    for(const QString& strKey : m_lstThemeKeys) {
        int nIdx = themeIndexFromKey(strKey);
        bool bValid = false;
        loadStyleSheet(nIdx, &bValid);
        if(!bValid)
            qWarning() << "ThemeManager: theme file missing or empty:" << m_mapThemeFiles.value(strKey);
    }

    return !m_lstThemeKeys.isEmpty();
}

QVariantMap ThemeManager::defaultTokens(int nTheme) const
{
    QVariantMap vm;
    switch(nTheme) {
    case Light:
        vm.insert("mdiBackground", "#E8EEF4");
        break;
    case Dark:
        vm.insert("mdiBackground", "#0E1726");
        break;
    case Classic:
    default:
        vm.insert("mdiBackground", "#385F85");
        break;
    }
    return vm;
}

QString ThemeManager::loadStyleSheet(int nTheme, bool* pbValid) const
{
    if(pbValid)
        *pbValid = false;

    QString strKey = themeKey(nTheme);
    QString strFile = m_mapThemeFiles.value(strKey);
    if(strFile.isEmpty())
        return QString();

    QString strQss;
    QString strDisk = QCoreApplication::applicationDirPath() + "/Themes/" + strFile;
    QFile file(strDisk);
    if(file.open(QIODevice::ReadOnly)) {
        strQss = QString::fromUtf8(file.readAll());
        file.close();
    }
    else {
        file.setFileName(":/Themes/" + strFile);
        if(file.open(QIODevice::ReadOnly)) {
            strQss = QString::fromUtf8(file.readAll());
            file.close();
        }
    }

    if(pbValid)
        *pbValid = !strQss.trimmed().isEmpty();
    return strQss;
}

bool ThemeManager::applyTheme(int nTheme, QString* pError)
{
    int nClassic = themeIndexFromKey("classic");
    if(nClassic < 0)
        nClassic = 0;
    if(nTheme < 0 || nTheme >= m_lstThemeKeys.count())
        nTheme = nClassic;

    bool bValid = false;
    QString strQss = loadStyleSheet(nTheme, &bValid);

    if(!bValid && nTheme != nClassic) {
        QString strMissing = m_mapThemeFiles.value(themeKey(nTheme));
        qWarning() << "ThemeManager: failed to load" << strMissing << ", fallback to classic";
        if(pError)
            *pError = tr("Theme file \"%1\" is missing or unreadable. Fallback to Classic.").arg(strMissing);
        nTheme = nClassic;
        strQss = loadStyleSheet(nTheme, &bValid);
    }

    if(!bValid) {
        qWarning() << "ThemeManager: classic theme is unavailable, keep current style";
        if(pError && pError->isEmpty())
            *pError = tr("Theme resources are unavailable.");
        return false;
    }

    m_nCurrent = nTheme;
    qApp->setStyleSheet(strQss);
    qApp->setProperty("treeateTheme", themeKey(nTheme));
    qInfo() << "ThemeManager: applied theme" << themeKey(nTheme);

    saveUiTheme(themeKey(nTheme));
    applyChrome();
    emit themeChanged(nTheme);
    return true;
}

void ThemeManager::applyChrome()
{
    const QWidgetList lstWidgets = QApplication::topLevelWidgets();
    for(QWidget* pWidget : lstWidgets) {
        if(!pWidget || !pWidget->style())
            continue;
        pWidget->style()->unpolish(pWidget);
        pWidget->style()->polish(pWidget);
        pWidget->update();
    }
}

int ThemeManager::currentTheme() const
{
    return m_nCurrent;
}

QString ThemeManager::currentThemeKey() const
{
    return themeKey(m_nCurrent);
}

QString ThemeManager::themeKey(int nTheme) const
{
    if(nTheme < 0 || nTheme >= m_lstThemeKeys.count())
        return m_strDefaultKey.isEmpty() ? QString("classic") : m_strDefaultKey;
    return m_lstThemeKeys.at(nTheme);
}

QString ThemeManager::themeName(int nTheme) const
{
    QString strKey = themeKey(nTheme);
    QString strName = m_mapThemeNames.value(strKey);
    if(strName.isEmpty())
        strName = strKey;
    return QCoreApplication::translate("ThemeManager", strName.toUtf8().constData());
}

int ThemeManager::themeIndex(const QString& strKey) const
{
    return themeIndexFromKey(strKey);
}

QColor ThemeManager::semanticColor(const QString& strToken) const
{
    QString strKey = currentThemeKey();
    QVariantMap vm = m_mapTokens.value(strKey);
    QString strColor = vm.value(strToken).toString();
    if(strColor.isEmpty())
        strColor = defaultTokens(themeIndexFromKey(strKey)).value(strToken).toString();
    if(strColor.isEmpty())
        return QColor();
    return QColor(strColor);
}

QColor ThemeManager::mdiBackground() const
{
    QColor color = semanticColor("mdiBackground");
    if(!color.isValid())
        color = QColor(0x385f85);
    return color;
}

int ThemeManager::themeIndexFromKey(const QString& strKey) const
{
    return m_lstThemeKeys.indexOf(strKey);
}

QString ThemeManager::readUiTheme() const
{
    QFile file(QCoreApplication::applicationDirPath() + "/Config/ui.cfg");
    if(!file.open(QIODevice::ReadOnly))
        return QString();

    QJsonParseError jsonErr;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(file.readAll(), &jsonErr);
    file.close();
    if(jsonDoc.isNull()) {
        qWarning() << "ThemeManager: ui.cfg parse error:" << jsonErr.errorString();
        return QString();
    }
    return jsonDoc.toVariant().toMap().value("Theme").toString();
}

void ThemeManager::saveUiTheme(const QString& strKey) const
{
    const QString strPath = QCoreApplication::applicationDirPath() + "/Config/ui.cfg";

    QVariantMap vmCfg;
    QFile file(strPath);
    if(file.open(QIODevice::ReadOnly)) {
        QJsonDocument jsonDoc = QJsonDocument::fromJson(file.readAll());
        if(!jsonDoc.isNull())
            vmCfg = jsonDoc.toVariant().toMap();
        file.close();
    }

    vmCfg.insert("Theme", strKey);

    QDir().mkpath(QCoreApplication::applicationDirPath() + "/Config");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        qWarning() << "ThemeManager: cannot write" << strPath << file.errorString();
        return;
    }
    QJsonDocument outDoc = QJsonDocument::fromVariant(vmCfg);
    file.write(outDoc.toJson());
    file.close();
}
