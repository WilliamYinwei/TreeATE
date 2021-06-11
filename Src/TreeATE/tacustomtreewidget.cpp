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
#include <QMenu>

#include "tacustomtreewidget.h"

#include "tadefine.h"

TAcustomTreeWidget::TAcustomTreeWidget(QWidget *parent) : QTreeWidget(parent)
{
    setContextMenuPolicy(Qt::CustomContextMenu);

    m_popMenuPara = new QMenu(this);
    QAction* acStart = m_popMenuPara->addAction(tr("Start"));
    QAction* acStop  = m_popMenuPara->addAction(tr("Stop"));
    connect(acStart, SIGNAL(triggered(bool)), this, SLOT(on_action_Start_clicked()));
    connect(acStop, SIGNAL(triggered(bool)), this, SLOT(on_action_Stop_clicked()));

    connect(this, SIGNAL(customContextMenuRequested(QPoint)), this,
            SLOT(on_customContextMenuRequested(QPoint)));
}

QModelIndex TAcustomTreeWidget::getIndex(QTreeWidgetItem *item, int column)
{
    return indexFromItem(item, column);
}

void TAcustomTreeWidget::on_customContextMenuRequested(const QPoint& pos)
{
    Q_UNUSED(pos)
    if(m_popMenuPara) {
        m_popMenuPara->exec(QCursor::pos());
    }
}

void TAcustomTreeWidget::on_action_Start_clicked()
{
    QTreeWidgetItem* item = topLevelItem(0);
    if(item) {
        emit startTest(item->text(TA_COLUMN_UNIT_NAME), item->text(TA_COLUMN_UNIT_PATH));
    }
}

void TAcustomTreeWidget::on_action_Stop_clicked()
{
    QTreeWidgetItem* item = topLevelItem(0);
    if(item) {
        emit stopTest(item->text(TA_COLUMN_UNIT_NAME));
    }
}
