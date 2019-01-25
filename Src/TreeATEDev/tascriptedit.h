///
/// @project       TreeATE
/// @brief         script edit widget
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef TASCRIPTEDIT_H
#define TASCRIPTEDIT_H

#include <QObject>

class QsciScintilla;
class QsciLexer;
class QsciAPIs;
class QWidget;

class TaScriptEdit : public QObject
{
    Q_OBJECT
public:
    explicit TaScriptEdit(QWidget *parent = 0);
    ~TaScriptEdit();

    void SetScriptData(const QString& strData);
    QsciScintilla* GetScriptEdit();
    void SetShow(bool bShow);
    void AddSciApis(const QStringList& lstApis);
    void ClearApis();
    void SwitchLang(const QString& suffix);
    QString GetLanguageSuffix();

private:
    QsciScintilla*  m_textEdit;
    QsciLexer*      m_lexerJavaScript;
    QsciLexer*      m_lexerPython;
    QsciAPIs*       m_sciApis;
    QString         m_suffix;
};

#endif // TASCRIPTEDIT_H
