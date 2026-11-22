///
/// @project       TreeATE
/// @brief         For default size of the DockWidget
/// @author        David Yin  2018-12 willage.yin@163.com  2026-11-22 M3 属性检查器默认 320 宽
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "tasizedockwidget.h"

TASizeDockWidget::TASizeDockWidget(QWidget *parent) : QWidget(parent)
{

}

QSize TASizeDockWidget::sizeHint() const
{
    return QSize(320, 600);
}
