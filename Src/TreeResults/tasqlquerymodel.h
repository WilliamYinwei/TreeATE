///
/// @project       TreeATE
/// @brief         TASqlQueryModel class
/// @author        David Yin  2018-12 willage.yin@163.com  2026-11-21 结果着色改为仅结果列语义色文本，适配三主题
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef TASQLQUERYMODEL_H
#define TASQLQUERYMODEL_H

#include <QSqlQueryModel>
#include <QColor>

// 与当前主题一致的结果语义色，由 MainWindow 在切换主题时下发
struct TASqlResultColors
{
    QColor passFg;
    QColor failFg;
    QColor exceFg;
    QColor idleFg;

    TASqlResultColors();
};

class TASqlQueryModel : public QSqlQueryModel
{
    Q_OBJECT
public:
    explicit TASqlQueryModel(QObject *parent = Q_NULLPTR);
    virtual ~TASqlQueryModel();

    QVariant data(const QModelIndex &item, int role) const override;

    // 结果列名：工程表为 rst，测试项为 tc_rst，明细为 dr_rst
    void setResultColumn(const QString& strColumn);
    void setResultColors(const TASqlResultColors& colors);

private:
    QString             m_strResultColumn;
    TASqlResultColors   m_colors;
};

#endif // TASQLQUERYMODEL_H
