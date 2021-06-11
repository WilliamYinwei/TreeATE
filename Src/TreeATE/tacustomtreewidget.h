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
    void startTest(const QString& who, const QString& strPath);
    void stopTest(const QString& who);

private slots:
    void on_customContextMenuRequested(const QPoint& pos);
    void on_action_Start_clicked();
    void on_action_Stop_clicked();

private:
    QMenu*       m_popMenuPara;
};

#endif // TACUSTOMTREEWIDGET_H
