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
#ifndef TACUSTOMTREEWIDGET_H
#define TACUSTOMTREEWIDGET_H

#include <QTreeWidget>

class TAcustomTreeWidget : public QTreeWidget
{
    Q_OBJECT
public:
    explicit TAcustomTreeWidget(QWidget *parent = 0);

    QModelIndex getIndex(QTreeWidgetItem *item, int column);
signals:

public slots:
};

#endif // TACUSTOMTREEWIDGET_H
