///
/// @project       TreeATE
/// @brief         script eidt widget
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
///

#include "tascriptedit.h"

#include <Qsci/qsciscintilla.h>
#include <Qsci/qscilexerjavascript.h>
#include <Qsci/qsciapis.h>
#include <Qsci/qscicommand.h>

TaScriptEdit::TaScriptEdit(QWidget *parent)
{
    m_lexerJavaScript = new QsciLexerJavaScript();
    m_textEdit = new QsciScintilla(parent);
    m_textEdit->setSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);

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

QsciScintilla* TaScriptEdit::GetScriptEdit()
{
    return m_textEdit;
}

void TaScriptEdit::SetScriptData(const QString& strData)
{
    m_textEdit->setText(strData);
}
