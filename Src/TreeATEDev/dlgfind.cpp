///
/// @project       TreeATE Dev
/// @brief         Find Dialog
/// @author        David Yin  2019-4 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "dlgfind.h"
#include "ui_dlgfind.h"

#include <QActionEvent>
#include <QMessageBox>

DlgFind::DlgFind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgFind)
{
    ui->setupUi(this);
}

DlgFind::~DlgFind()
{
    delete ui;
}

QString DlgFind::GetFindText()
{
    return ui->lineEdit->text();
}

bool DlgFind::IsWhole()
{
    return ui->checkBox_whole->isChecked();
}

bool DlgFind::IsCase()
{
    return ui->checkBox_case->isChecked();
}

bool DlgFind::IsRegEx()
{
    return ui->checkBox_regex->isChecked();
}

void DlgFind::on_buttonBox_clicked(QAbstractButton *button)
{
    if(button && button->text() == "Apply")
    {
        emit seachForText(GetFindText(), IsWhole(), IsCase(), IsRegEx());
    }
}
