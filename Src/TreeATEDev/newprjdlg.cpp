///
/// @project       TreeATE
/// @brief         New project dialog
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "newprjdlg.h"
#include "ui_newprjdlg.h"

#include <QFileDialog>

NewPrjDlg::NewPrjDlg(const QString &workpath, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewPrjDlg)
{
    ui->setupUi(this);
    ui->lineEdit_workpath->setText(workpath);
    ui->radioButton_js->setChecked(true);
}

NewPrjDlg::~NewPrjDlg()
{
    delete ui;
}

void NewPrjDlg::on_pushButton_clicked()
{
    QString workPath = QFileDialog::getExistingDirectory(this, tr("Select path"),
                                                         ui->lineEdit_workpath->text());
    if(workPath.isEmpty())
        return;
    ui->lineEdit_workpath->setText(workPath);
}

QStringList NewPrjDlg::GetNewProjectFiles()
{
    QString strName = ui->lineEdit_name->text();
    QString strPath = ui->lineEdit_workpath->text();
    QString strNewName = strName.trimmed();
    strNewName.remove(' ');
    QString suffix = GetScriptSuffix();
    QStringList lstFile;
    if(!strNewName.isEmpty()) {
        strName = strPath.trimmed() + "/" + strNewName + "/" + strNewName;
        lstFile << strName + ".tp"
                << strName + ".tpx"
                << strName + "." + suffix;
    }
    return lstFile;
}

QString NewPrjDlg::GetScriptSuffix()
{
    QString suffix = "js";
    if(ui->radioButton_py->isChecked())
        suffix = "py";
    return suffix;
}

QString NewPrjDlg::GetWorkpath()
{
    if(ui->lineEdit_workpath) {
        return ui->lineEdit_workpath->text();
    }
    return "";
}
