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

#ifndef LANGUAGEMANAGER_H
#define LANGUAGEMANAGER_H

#include <QObject>
#include <QList>
#include <QString>

class QTranslator;

struct LanguageInfo
{
    QString code;
    QString nativeName;
    QString englishName;
    QString qm;

    LanguageInfo() {}
};

class LanguageManager : public QObject
{
    Q_OBJECT

public:
    static LanguageManager* instance();

    void initialize();

    QList<LanguageInfo> languages() const;
    QString currentCode() const;
    QString currentNativeName() const;
    QString startupCode() const;

    bool applyLanguage(const QString& strCode, QString* pError = nullptr);

    static QString normalizeCode(const QString& strRaw);

signals:
    void languageChanged(const QString& strCode);

private:
    explicit LanguageManager(QObject* parent = nullptr);

    bool loadManifest();
    void appendScannedLanguages();
    int indexOfCode(const QString& strCode) const;
    QString legacyValue(const QString& strCode) const;
    void saveLanguage(const QString& strCode) const;

private:
    bool            m_bInitialized;
    QList<LanguageInfo> m_lstLanguages;
    QString         m_strDefaultCode;
    QString         m_strCurrentCode;
    QTranslator*    m_pTranslator;
};

#endif // LANGUAGEMANAGER_H
