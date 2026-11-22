///
/// @project       TreeATE
/// @brief         Export dialog of the test results
/// @author        David Yin  2018-12 willage.yin@163.com  2026-11-21 M4：导出项显示名可本地化，返回稳定字段 ID；对话框按钮文案本地化
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "dlgexport.h"
#include "ui_dlgexport.h"

#include <QFileDialog>
#include <QFileInfo>
#include <QPushButton>

DlgExport::DlgExport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgExport)
{
    ui->setupUi(this);
    setWindowTitle(tr("Export results"));
    // Yes/No 使用业务文案，避免未加载 qtbase 翻译时中英混排
    ui->buttonBox->button(QDialogButtonBox::Yes)->setText(tr("Export"));
    ui->buttonBox->button(QDialogButtonBox::No)->setText(tr("Cancel"));
    ui->dateTimeEdit_st->setDateTime(QDateTime::currentDateTime().addDays(-7));
    ui->dateTimeEdit_ed->setDateTime(QDateTime::currentDateTime());
}

DlgExport::~DlgExport()
{
    delete ui;
}

void DlgExport::on_checkBox_all_clicked(bool checked)
{
    foreach(QCheckBox* item, m_lstItems)
        item->setChecked(checked);
}

void DlgExport::InitProjectName(const QStringList& lstNames,
                                const QList< QPair<QString, QString> >& lstPrjItems,
                                const QList< QPair<QString, QString> >& lstCaseItems,
                                const QList< QPair<QString, QString> >& lstDetailItems)
{
    ui->comboBox_prj->addItems(lstNames);

    for(int i = 0; i < lstPrjItems.count(); i++) {
        QCheckBox* chkBox = new QCheckBox(lstPrjItems.at(i).second, ui->groupBox_prj);
        ui->gridLayout_prj->addWidget(chkBox, i / 3, i % 3);
        m_lstItems.append(chkBox);
        m_mapItemId.insert(chkBox, lstPrjItems.at(i).first);
    }
    for(int i = 0; i < lstCaseItems.count(); i++) {
        QCheckBox* chkBox = new QCheckBox(lstCaseItems.at(i).second, ui->groupBox_case);
        ui->gridLayout_case->addWidget(chkBox, i / 3, i % 3);
        m_lstItems.append(chkBox);
        m_mapItemId.insert(chkBox, lstCaseItems.at(i).first);
    }
    for(int i = 0; i < lstDetailItems.count(); i++) {
        QCheckBox* chkBox = new QCheckBox(lstDetailItems.at(i).second, ui->groupBox_detail);
        ui->gridLayout_detail->addWidget(chkBox, i / 3, i % 3);
        m_lstItems.append(chkBox);
        m_mapItemId.insert(chkBox, lstDetailItems.at(i).first);
    }
}

QStringList DlgExport::GetSelectedItems()
{
    QStringList strItems;
    foreach(QCheckBox* item, m_lstItems) {
        if(item->isChecked())
            strItems.append(m_mapItemId.value(item));
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
    QString strFile = QFileDialog::getSaveFileName(this, tr("Export file name"),
                                                   QString(), tr("CSV files (*.csv)"));
    if(strFile.isEmpty())
        return;

    QFileInfo info(strFile);
    if(info.suffix().compare("csv", Qt::CaseInsensitive) != 0)
        strFile += ".csv";

    ui->lineEdit->setText(strFile);
}
