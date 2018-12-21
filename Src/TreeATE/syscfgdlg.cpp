///
/// @brief         TreeATE system option
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "syscfgdlg.h"
#include "ui_syscfgdlg.h"

#include <QFileDialog>

SysCfgDlg::SysCfgDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SysCfgDlg)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->pushButton_add->setIcon(QIcon(":/add.png"));
    ui->pushButton_del->setIcon(QIcon(":/minus.png"));
}

SysCfgDlg::~SysCfgDlg()
{
    delete ui;
}

void SysCfgDlg::on_brownButton_clicked()
{
    QString strPath = ui->lineEdit_Path->text();
    strPath = QFileDialog::getExistingDirectory(this, "Get Path", strPath);
    if(!strPath.isEmpty())
        ui->lineEdit_Path->setText(strPath);
}

void SysCfgDlg::SetSysConfig(const QVariant &sysCfg)
{
    if(!sysCfg.isValid())
        return;

    QVariantMap varMapCfg = sysCfg.toMap();

    if(varMapCfg["Station"].isValid())
    {
        ui->lineEdit_Station->setText(varMapCfg["Station"].toString());
    }
    if(varMapCfg["LineName"].isValid())
    {
        ui->lineEdit_Line->setText(varMapCfg["LineName"].toString());
    }
    if(varMapCfg["WorkPath"].isValid())
    {
        ui->lineEdit_Path->setText(varMapCfg["WorkPath"].toString());
    }
    if(varMapCfg["Server"].isValid())
    {
        ui->lineEdit_Server->setText(varMapCfg["Server"].toString());
    }
    if(varMapCfg["Projects"].isValid())
    {
        QVariantList vlPrj = varMapCfg["Projects"].toList();
        for(int i = 0; i < vlPrj.count(); i++) {
            QVariantMap vmItem = vlPrj.at(i).toMap();

            QTableWidgetItem* item = new QTableWidgetItem();
            item->setText(vmItem["barcode"].toString());
            ui->tableWidget->insertRow(i);
            ui->tableWidget->setItem(i, 0, item);

            item = new QTableWidgetItem();
            item->setText(vmItem["path"].toString());
            ui->tableWidget->setItem(i, 1, item);
        }
    }
}


QVariantMap SysCfgDlg::GetDataValue()
{
    QVariantMap varMapCfg;

    varMapCfg.insert("LineName", ui->lineEdit_Line->text());
    varMapCfg.insert("WorkPath", ui->lineEdit_Path->text());
    varMapCfg.insert("Station", ui->lineEdit_Station->text());
    varMapCfg.insert("Server", ui->lineEdit_Server->text());

    QVariantList vlPrj;
    for(int i = 0; i < ui->tableWidget->rowCount(); i++)
    {
        QVariantMap vmItem;
        QTableWidgetItem* item = ui->tableWidget->item(i, 0);
        if(item) {
            vmItem.insert("barcode", item->text());
        }
        item = ui->tableWidget->item(i, 1);
        if(item) {
            vmItem.insert("path", item->text());
        }
        vlPrj.append(vmItem);
    }
    varMapCfg.insert("Projects", vlPrj);

    return varMapCfg;
}

void SysCfgDlg::on_pushButton_add_clicked()
{
    QTableWidgetItem* item = new QTableWidgetItem();
    int nCnt = ui->tableWidget->rowCount();
    item->setText("No RegEx" + QString::number(nCnt));
    ui->tableWidget->insertRow(nCnt);
    ui->tableWidget->setItem(nCnt, 0, item);

    item = new QTableWidgetItem();
    item->setText("");
    ui->tableWidget->setItem(nCnt, 1, item);
}

void SysCfgDlg::on_pushButton_del_clicked()
{
    int row = ui->tableWidget->currentRow();
    if(row < 0 || row > ui->tableWidget->rowCount())
        return;
    ui->tableWidget->removeRow(row);
}
