///
/// @brief         The test status delegate on the main window
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef STATUSDELEGATE_H
#define STATUSDELEGATE_H

#include <QStyledItemDelegate>
#include <QPainter>
#include <QPixmap>
#include <QLabel>
#include <QMovie>

class StatusDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit StatusDelegate(QObject* parent = 0);

    QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const;

private:
    QPixmap m_ok;
    QPixmap m_ng;
    QPixmap m_exce;
};

class SALabel : public QLabel
{
    Q_OBJECT
public:
    explicit SALabel(QWidget *parent=0, Qt::WindowFlags f=0);
    ~SALabel();
    void StartMovie(const QString& strMovieFile);

private:
    QMovie* movie;
};
#endif // STATUSDELEGATE_H
