///
/// @project       TreeATE
/// @brief         Export dialog of the test results
/// @author        David Yin  2018-12 willage.yin@163.com  2026-11-21 M4：导出项使用稳定 ID，显示名可本地化
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef DLGEXPORT_H
#define DLGEXPORT_H

#include <QDialog>
#include <QList>
#include <QHash>
#include <QPair>
#include <QCheckBox>

namespace Ui {
class DlgExport;
}

class DlgExport : public QDialog
{
    Q_OBJECT

public:
    explicit DlgExport(QWidget *parent = 0);
    ~DlgExport();

    // 每一项为 <字段 ID, 本地化显示名>
    void InitProjectName(const QStringList& lstNames,
                         const QList< QPair<QString, QString> >& lstPrjItems,
                         const QList< QPair<QString, QString> >& lstCaseItems,
                         const QList< QPair<QString, QString> >& lstDetailItems);

    // 返回字段 ID，避免显示名变化影响 SQL 映射
    QStringList GetSelectedItems();
    QString GetStartTime();
    QString GetEndTime();
    QString GetProjectName();
    QString GetExportFileName();

private slots:
    void on_checkBox_all_clicked(bool checked);

    void on_pushButton_browse_clicked();

private:
    Ui::DlgExport *ui;
    QList<QCheckBox*> m_lstItems;
    QHash<QCheckBox*, QString> m_mapItemId;
};

#endif // DLGEXPORT_H
