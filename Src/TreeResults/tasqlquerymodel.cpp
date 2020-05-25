///
/// @project       TreeATE
/// @brief         TASqlQueryModel
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "tasqlquerymodel.h"

#include <QSqlRecord>
#include <QColor>
#include <QBrush>

TASqlQueryModel::TASqlQueryModel(QObject *parent) : QSqlQueryModel(parent)
{

}

TASqlQueryModel::~TASqlQueryModel()
{

}


QVariant TASqlQueryModel::data(const QModelIndex &item, int role) const
{
    if (role == Qt::BackgroundRole) {
        int row = item.row();
        QSqlRecord rcd = record(row);
        QString strRst = rcd.value("rst").toString();
        QColor color(255, 253, 176);
        if(strRst == "Pass") {
            color.setRgb(124, 249, 185);
        }
        else if(strRst == "Fail") {
            color.setRgb(249, 112, 121);
        }
        return QBrush(color);
    }

    return QSqlQueryModel::data(item, role);
}
