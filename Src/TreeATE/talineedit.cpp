///
/// @brief         auto focus LineEdit
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "talineedit.h"

TALineEdit::TALineEdit(QWidget *parent) : QLineEdit(parent)
{

}
void TALineEdit::focusInEvent(QFocusEvent *e)
{
    selectAll();
    QLineEdit::focusInEvent(e);
}
