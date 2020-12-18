#include "dlgexport.h"
#include "ui_dlgexport.h"

#include <QFileDialog>

DlgExport::DlgExport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgExport)
{
    ui->setupUi(this);    
    ui->dateTimeEdit_st->setDateTime(QDateTime::currentDateTime().addDays(-7));
    ui->dateTimeEdit_ed->setDateTime(QDateTime::currentDateTime());

}

DlgExport::~DlgExport()
{
    delete ui;
}

void DlgExport::on_checkBox_all_clicked(bool checked)
{
    foreach(QCheckBox* item, m_lstItems) {
        item->setChecked(checked);
    }
}

void DlgExport::InitProjectName(const QStringList& lstNames,
                                const QStringList& lstPrjItems,
                                const QStringList& lstCaseItems,
                                const QStringList& lstDetailItems)
{
    ui->comboBox_prj->addItems(lstNames);
    for(int i = 0; i < lstPrjItems.count(); i++) {
        QCheckBox* chkBox = new QCheckBox(lstPrjItems.at(i), ui->groupBox_prj);
        ui->gridLayout_prj->addWidget(chkBox, i / 3, i % 3);
        m_lstItems.append(chkBox);
    }
    for(int i = 0; i < lstCaseItems.count(); i++) {
        QCheckBox* chkBox = new QCheckBox(lstCaseItems.at(i), ui->groupBox_case);
        ui->gridLayout_case->addWidget(chkBox, i / 3, i % 3);
        m_lstItems.append(chkBox);
    }
    for(int i = 0; i < lstDetailItems.count(); i++) {
        QCheckBox* chkBox = new QCheckBox(lstDetailItems.at(i), ui->groupBox_detail);
        ui->gridLayout_detail->addWidget(chkBox, i / 3, i % 3);
        m_lstItems.append(chkBox);
    }
}

QStringList DlgExport::GetSelectedItems()
{
    QStringList strItems;
    foreach(QCheckBox* item, m_lstItems) {
        if(item->isChecked()) {
            strItems.append(item->text());
        }
    }
    return strItems;
}

QString DlgExport::GetStartTime()
{
    return ui->dateTimeEdit_st->dateTime().toString("yyyy-MM-dd HH:mm");
}

QString DlgExport::GetEndTime()
{
    return ui->dateTimeEdit_ed->dateTime().toString("yyyy-MM-dd HH:mm");
}

QString DlgExport::GetProjectName()
{
    return ui->comboBox_prj->currentText();
}

QString DlgExport::GetExportFileName()
{
    return ui->lineEdit->text();
}

void DlgExport::on_pushButton_browse_clicked()
{
    ui->lineEdit->setText(QFileDialog::getSaveFileName(this, "Export file name", QString(), "*.csv"));
}
