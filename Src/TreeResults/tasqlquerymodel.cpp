///
/// @project       TreeATE
/// @brief         TASqlQueryModel
/// @author        David Yin  2018-12 willage.yin@163.com  2026-11-21 结果列语义色随主题切换，避免背景色被 QSS 覆盖后文字不可读
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "tasqlquerymodel.h"

#include <QSqlRecord>
#include <QBrush>
#include <QFont>

TASqlResultColors::TASqlResultColors()
{
    // 默认（经典）主题结果色，MainWindow 构造后会按实际主题覆盖
    passFg = QColor("#63D471");
    failFg = QColor("#FF7A7A");
    exceFg = QColor("#FFC94D");
    idleFg = QColor("#C9D6E5");
}

TASqlQueryModel::TASqlQueryModel(QObject *parent)
    : QSqlQueryModel(parent),
      m_strResultColumn("rst")
{

}

TASqlQueryModel::~TASqlQueryModel()
{

}

void TASqlQueryModel::setResultColumn(const QString& strColumn)
{
    m_strResultColumn = strColumn;
    if(rowCount() > 0)
        emit dataChanged(index(0, 0), index(rowCount() - 1, columnCount() - 1));
}

void TASqlQueryModel::setResultColors(const TASqlResultColors& colors)
{
    m_colors = colors;
    if(rowCount() > 0)
        emit dataChanged(index(0, 0), index(rowCount() - 1, columnCount() - 1));
}

QVariant TASqlQueryModel::data(const QModelIndex &item, int role) const
{
    if (role == Qt::ForegroundRole || role == Qt::FontRole) {
        if(item.isValid()) {
            QSqlRecord rcd = record(item.row());
            if(!m_strResultColumn.isEmpty() && rcd.contains(m_strResultColumn)
                    && rcd.indexOf(m_strResultColumn) == item.column()) {
                const QString strRst = rcd.value(m_strResultColumn).toString().trimmed();
                QColor fg;
                if(strRst.compare("Pass", Qt::CaseInsensitive) == 0)
                    fg = m_colors.passFg;
                else if(strRst.compare("Fail", Qt::CaseInsensitive) == 0)
                    fg = m_colors.failFg;
                else if(strRst.compare("Exce", Qt::CaseInsensitive) == 0)
                    fg = m_colors.exceFg;
                else if(!strRst.isEmpty())
                    fg = m_colors.idleFg;

                if(role == Qt::ForegroundRole && fg.isValid())
                    return QBrush(fg);

                if(role == Qt::FontRole) {
                    QFont font;
                    font.setBold(true);
                    return font;
                }
            }
        }
    }

    return QSqlQueryModel::data(item, role);
}
