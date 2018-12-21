///
/// @brief         Test Project option dialog
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "prjoptdlg.h"
#include "ui_prjoptdlg.h"

PrjOptDlg::PrjOptDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrjOptDlg)
{
    ui->setupUi(this);
    ui->lineEdit_Name->setDisabled(true);
    ui->lineEdit_Desc->setDisabled(true);
    ui->lineEdit_Ver->setDisabled(true);
}

PrjOptDlg::~PrjOptDlg()
{
    delete ui;
}

void PrjOptDlg::SetFailedToStop(const bool bYes)
{
    ui->checkBox->setChecked(bYes);
}

void PrjOptDlg::SetStopedForLoop(const bool bYes)
{
    ui->checkBox_loop->setChecked(bYes);
}

void PrjOptDlg::SetLoopCounts(const int nCnt)
{
    ui->spinBox->setValue(nCnt);
}

void PrjOptDlg::SetRegSN(const QString& reg)
{
    ui->lineEdit->setText(reg);
}

void PrjOptDlg::SetPrjName(const QString& strName)
{
    ui->lineEdit_Name->setText(strName);
}

void PrjOptDlg::SetPrjDesc(const QString& strDesc)
{
    ui->lineEdit_Desc->setText(strDesc);
}

void PrjOptDlg::SetPrjVer(const QString& strVer)
{
    ui->lineEdit_Ver->setText(strVer);
}

bool PrjOptDlg::GetFailedToStop()
{
    return (Qt::Checked == ui->checkBox->checkState());
}

bool PrjOptDlg::GetStoppedForLoop()
{
    return (Qt::Checked == ui->checkBox_loop->checkState());
}

int PrjOptDlg::GetLoopCounts()
{
    return ui->spinBox->value();
}

QString PrjOptDlg::GetRegSN()
{
    return ui->lineEdit->text();
}
