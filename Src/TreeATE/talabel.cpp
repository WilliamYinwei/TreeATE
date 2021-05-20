///
/// @brief         TreeATE Label class
/// @author        David Yin  2021-05 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///
#include "talabel.h"

TALabel::TALabel(QWidget *parent):QLabel(parent)
{

}

void TALabel::mouseReleaseEvent(QMouseEvent* event)
{
    Q_UNUSED(event)
    emit clicked();
}
