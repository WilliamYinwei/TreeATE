///
/// @brief         Scan the barcode for every one of the test project
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "manybarcodedlg.h"
#include "ui_manybarcodedlg.h"

#include <QMessageBox>
#include <QCloseEvent>

ManyBarcodeDlg::ManyBarcodeDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManyBarcodeDlg)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
}

ManyBarcodeDlg::~ManyBarcodeDlg()
{
    delete ui;
}

void ManyBarcodeDlg::SetProjectName(const QStringList& lstName)
{
    for(int i = 0; i < lstName.count(); i++)
    {
        QTableWidgetItem* item = new QTableWidgetItem();
        item->setText(lstName.at(i));
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i, 0, item);

        item = new QTableWidgetItem();
        item->setText("");
        ui->tableWidget->setItem(i, 1, item);
    }

}

void ManyBarcodeDlg::SetBarcodeReg(const QString& strReg)
{
    m_strSNReg = strReg;
}

QMap<QString, QString> ManyBarcodeDlg::GetPrjsBarcodes()
{
    QMap<QString, QString> mapSN;
    for(int i = 0; i < ui->tableWidget->rowCount(); i++)
    {
        QTableWidgetItem* item = ui->tableWidget->item(i, 0);
        QTableWidgetItem* itemSN = ui->tableWidget->item(i, 1);
        if(item && itemSN) {
            mapSN.insert(item->text(), itemSN->text());
        }
    }

    return mapSN;
}

QStringList ManyBarcodeDlg::GetProjectSN()
{
    QStringList lstSN;
    for(int i = 0; i < ui->tableWidget->rowCount(); i++)
    {
        QTableWidgetItem* item = ui->tableWidget->item(i, 1);
        if(item) {
            QString strSN = item->text();
            if(!strSN.trimmed().isEmpty()) {
                lstSN << item->text();
            }
        }
    }

    return lstSN;
}

bool ManyBarcodeDlg::isSampleBarcode(const QString& barcode)
{
    for(int i = 0; i < ui->tableWidget->rowCount(); i++)
    {
        QTableWidgetItem* item = ui->tableWidget->item(i, 1);
        if(item){
            QString strSN = item->text();
            strSN = strSN.trimmed();
            if(barcode == strSN)
                return true;
        }
    }
    return false;
}

void ManyBarcodeDlg::accept()
{
    QStringList lstSN = GetProjectSN();
    if(lstSN.count() != ui->tableWidget->rowCount())
    {
        int row = lstSN.count();
        QTableWidgetItem* item = ui->tableWidget->item(row, 1);
        if(item) {
            QString strSrcSN = ui->lineEdit_SN->text();
            if(isSampleBarcode(strSrcSN)) {
                QMessageBox::information(this, tr("Info"),
                                      tr("Please scan the barcode again, the '") + strSrcSN + tr("' already exists."));
                ui->lineEdit_SN->setFocus();
                ui->lineEdit_SN->selectAll();
                return;
            }

            if(!m_strSNReg.isEmpty())
            {
                QRegExp rx(m_strSNReg);
                if(strSrcSN.indexOf(rx) < 0 || rx.captureCount() < 0)
                {
                    QMessageBox::critical(this, tr("Critical"),
                                          tr("Please scan the barcode for the correct rules, refer the project option."));
                    ui->lineEdit_SN->setFocus();
                    ui->lineEdit_SN->selectAll();
                    return;
                }

                ui->lineEdit_SN->setText(rx.cap(0));
            }

            item->setText(ui->lineEdit_SN->text());
            ui->lineEdit_SN->setText("");
        }
    }

    lstSN = GetProjectSN();
    if(lstSN.count() != ui->tableWidget->rowCount()) {
        QDialog::rejected();
    }
    else {
        QDialog::accept();
    }
}
