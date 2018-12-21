///
/// @project       TreeATE
/// @brief         script edit widget
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
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

signals:

public slots:

private:
    QsciScintilla*  m_textEdit;
    QsciLexer*      m_lexerJavaScript;
    QsciAPIs*       m_sciApis;
};

#endif // TASCRIPTEDIT_H
