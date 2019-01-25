///
/// @project       TreeATE
/// @brief         script eidt widget
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "tascriptedit.h"

#include <Qsci/qsciscintilla.h>
#include <Qsci/qscilexerjavascript.h>
#include <Qsci/qscilexerpython.h>
#include <Qsci/qsciapis.h>
#include <Qsci/qscicommand.h>

TaScriptEdit::TaScriptEdit(QWidget *parent)
{
    m_lexerPython = new QsciLexerPython();
    m_lexerJavaScript = new QsciLexerJavaScript();
    m_textEdit = new QsciScintilla(parent);
    m_sciApis = new QsciAPIs(m_lexerJavaScript);
    m_textEdit->setSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);

    m_textEdit->setIndentationWidth(4);
    m_textEdit->setIndentationGuides(true);
    m_textEdit->setSelectionToEol(true);
    m_textEdit->setUtf8(true);
    m_textEdit->setBraceMatching(QsciScintilla::BraceMatch::SloppyBraceMatch);
    m_textEdit->setLexer(m_lexerJavaScript);
    m_textEdit->setAutoCompletionFillups(m_lexerJavaScript->autoCompletionFillups());
    m_textEdit->setAutoCompletionFillupsEnabled(true);
    m_textEdit->setAutoCompletionSource(QsciScintilla::AcsAll);
    m_textEdit->setAutoCompletionCaseSensitivity(true);
    m_textEdit->setAutoCompletionThreshold(1);
    m_textEdit->setAutoIndent(true);
    m_textEdit->setFolding(QsciScintilla::FoldStyle::CircledTreeFoldStyle);

    // line number
    m_textEdit->setMarginType(0, QsciScintilla::NumberMargin);
    m_textEdit->setMarginLineNumbers(0, true);
    m_textEdit->setMarginWidth(0, 60);
    m_textEdit->callTip();
}

TaScriptEdit::~TaScriptEdit()
{

}

void TaScriptEdit::SwitchLang(const QString& suffix)
{
    if(suffix.compare("js", Qt::CaseInsensitive) == 0)
    {
        m_textEdit->setLexer(m_lexerJavaScript);
        m_textEdit->setAutoCompletionFillups(m_lexerJavaScript->autoCompletionFillups());
    }
    else if(suffix.compare("py", Qt::CaseInsensitive) == 0)
    {
        m_textEdit->setLexer(m_lexerPython);
        m_textEdit->setAutoCompletionFillups(m_lexerPython->autoCompletionFillups());
    }
    m_suffix = suffix;
}

QString TaScriptEdit::GetLanguageSuffix()
{
    return m_suffix;
}

QsciScintilla* TaScriptEdit::GetScriptEdit()
{
    return m_textEdit;
}

void TaScriptEdit::SetScriptData(const QString& strData)
{
    if(m_textEdit)
        m_textEdit->setText(strData);
}

void TaScriptEdit::SetShow(bool bShow)
{
    if(bShow)
        m_textEdit->show();
    else
        m_textEdit->hide();
}

void TaScriptEdit::AddSciApis(const QStringList& lstApis)
{
    if(m_sciApis) {
        foreach (QString api, lstApis) {
            m_sciApis->add(api);
        }
        m_sciApis->prepare();
    }
}

void TaScriptEdit::ClearApis()
{
    if(m_sciApis)
        m_sciApis->clear();
}
