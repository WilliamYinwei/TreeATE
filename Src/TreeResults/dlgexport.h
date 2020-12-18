#ifndef DLGEXPORT_H
#define DLGEXPORT_H

#include <QDialog>
#include <QList>
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

    void InitProjectName(const QStringList& lstNames, const QStringList &lstPrjItems,
                         const QStringList &lstCaseItems, const QStringList &lstDetailItems);

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
};

#endif // DLGEXPORT_H
