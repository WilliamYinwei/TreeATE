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

#ifndef THEMEMANAGER_H
#define THEMEMANAGER_H

#include <QObject>
#include <QColor>
#include <QMap>
#include <QStringList>
#include <QVariantMap>

class ThemeManager : public QObject
{
    Q_OBJECT

public:
    enum ThemeId {
        Classic = 0,
        Light = 1,
        Dark = 2,
        ThemeCount = 3
    };

    static ThemeManager* instance();

    void initialize();

    int currentTheme() const;
    QString currentThemeKey() const;

    bool applyTheme(int nTheme, QString* pError = nullptr);
    void applyChrome();

    QString themeKey(int nTheme) const;
    QString themeName(int nTheme) const;
    int themeIndex(const QString& strKey) const;

    QColor semanticColor(const QString& strToken) const;
    QColor mdiBackground() const;

signals:
    void themeChanged(int nTheme);

private:
    explicit ThemeManager(QObject* parent = nullptr);

    bool loadManifest();
    QString loadStyleSheet(int nTheme, bool* pbValid) const;
    QVariantMap defaultTokens(int nTheme) const;
    int themeIndexFromKey(const QString& strKey) const;
    QString readUiTheme() const;
    void saveUiTheme(const QString& strKey) const;

private:
    bool            m_bInitialized;
    int             m_nCurrent;
    QString         m_strDefaultKey;
    QStringList     m_lstThemeKeys;
    QMap<QString, QString> m_mapThemeFiles;
    QMap<QString, QString> m_mapThemeNames;
    QMap<QString, QVariantMap> m_mapTokens;
};

#endif // THEMEMANAGER_H
