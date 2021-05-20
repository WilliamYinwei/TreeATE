///
/// @brief         TreeATE TAcustomTreeWidget class
/// @author        David Yin  2021-05 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///
#include "tacustomtreewidget.h"

TAcustomTreeWidget::TAcustomTreeWidget(QWidget *parent) : QTreeWidget(parent)
{

}

QModelIndex TAcustomTreeWidget::getIndex(QTreeWidgetItem *item, int column)
{
    return indexFromItem(item, column);
}
