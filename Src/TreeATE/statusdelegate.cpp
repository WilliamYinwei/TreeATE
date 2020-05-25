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

#include "statusdelegate.h"
#include "tadefine.h"

StatusDelegate::StatusDelegate(QObject *parent):
    QStyledItemDelegate(parent),m_ok(QPixmap(":/ok.png")),m_ng(QPixmap(":/ng.png")),m_exce(QPixmap(":/exce.png"))
{
    m_ok = m_ok.scaled(24, 24);
    m_ng = m_ng.scaled(24, 24);
    m_exce = m_exce.scaled(24, 24);
}


QWidget* StatusDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);
    Q_UNUSED(option);
    QLabel *label = new QLabel(parent);
    return label;
}

void StatusDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    const QAbstractItemModel *model = index.model();
    QString status = model->data(index, Qt::DisplayRole).toString();

    QModelIndex newIndex;
    QStyledItemDelegate::paint(painter, option, newIndex);

    if(status.compare(tr(TA_STATUS_FAIL),Qt::CaseInsensitive) == 0)
    {
        int width = m_ng.width();
        int x = option.rect.x() + option.rect.width()/2  - (width/2);
        int y = option.rect.y() + (option.rect.height()/2) - (width/2);
        painter->drawPixmap(x, y, m_ng);
    }
    else if(status.compare(tr(TA_STATUS_PASS),Qt::CaseInsensitive) == 0)
    {
        int width = m_ok.width();
        int x = option.rect.x() + option.rect.width()/2  - (width/2);
        int y = option.rect.y() + (option.rect.height()/2) - (width/2);
        painter->drawPixmap(x, y, m_ok);
    }
    else if(status.compare(tr(TA_STATUS_EXCE),Qt::CaseInsensitive) == 0)
    {
        int width = m_exce.width();
        int x = option.rect.x() + option.rect.width()/2 - (width/2);
        int y = option.rect.y() + (option.rect.height()/2) - (width/2);
        painter->drawPixmap(x, y, m_exce);
    }
}

void StatusDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    Q_UNUSED(editor);
    Q_UNUSED(index);
}

void StatusDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    Q_UNUSED(editor);
    Q_UNUSED(model);
    Q_UNUSED(index);
}

void StatusDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);
    if(editor)
        editor->setGeometry(option.rect);
}

///////////////////////////////////////////////////////////////////////////////
/// \brief SALabel::SALabel
/// \param parent
/// \param f
///
SALabel::SALabel(QWidget *parent, Qt::WindowFlags f):QLabel(parent, f)
{
}

void  SALabel::StartMovie(const QString& strMovieFile)
{
    movie = new QMovie(strMovieFile);
    setMovie(movie);
    movie->start();
}

SALabel::~SALabel()
{
    if(movie)
    {
        movie->stop();
        delete movie;
    }
}
