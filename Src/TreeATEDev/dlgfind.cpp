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
