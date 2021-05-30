///
/// @project       TreeATE Dev
/// @brief         Dialog of the output results with insert
/// @author        David Yin  2021-05 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "dlginsertoutput.h"
#include "ui_dlginsertoutput.h"

DlgInsertOutput::DlgInsertOutput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgInsertOutput)
{
    ui->setupUi(this);
    ui->comboBox_rst->setDisabled(true);
    m_funcName = "__ate.OutputRst";
}

DlgInsertOutput::~DlgInsertOutput()
{
    delete ui;
}

void DlgInsertOutput::updateData()
{
    QString strTemp = "(\""; // default: __ate.OutputRst()

    QString tvisStr = "\"";
    if(ui->checkBox_tv->isChecked()) {
        tvisStr = "";
    }

    QString tsisStr = "\"";
    if(ui->checkBox_ts->isChecked()) {
        tsisStr = "";
    }

    QString strPara = tsisStr + ")";
    if(ui->checkBox_rst->isChecked()) {
        strTemp = "Ex(\"";  // is __ate.OutputRstEx()
        strPara = tsisStr + ", " + QString::number(ui->comboBox_rst->currentIndex()) + ")";
    }

    ui->label_func->setText(m_funcName + strTemp +
                            getCurrentCode() + "\", " + tvisStr +
                            ui->lineEdit_value->text() + tvisStr + ", " + tsisStr +
                            ui->lineEdit_stand->text() + strPara);
}

QString DlgInsertOutput::getCurrentCode()
{
    auto lst = ui->tableWidget->selectedItems();
    foreach(QTableWidgetItem* item, lst) {
        if(item && 0 == item->column()) {
            return item->text();
        }
    }

    return "";
}

QString DlgInsertOutput::GetInsertStr()
{
    return ui->label_func->text();
}

void DlgInsertOutput::on_checkBox_rst_clicked(bool checked)
{
    ui->comboBox_rst->setEnabled(checked);
    updateData();
}


void DlgInsertOutput::on_lineEdit_value_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1)
    updateData();
}

void DlgInsertOutput::on_lineEdit_stand_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1)
    updateData();
}

void DlgInsertOutput::on_comboBox_rst_currentTextChanged(const QString &arg1)
{
    Q_UNUSED(arg1)
    updateData();
}

void DlgInsertOutput::on_checkBox_tv_stateChanged(int arg1)
{
    Q_UNUSED(arg1)
    updateData();
}

void DlgInsertOutput::on_checkBox_ts_stateChanged(int arg1)
{
    Q_UNUSED(arg1)
    updateData();
}

void DlgInsertOutput::on_comboBox_module_editTextChanged(const QString &arg1)
{
    Q_UNUSED(arg1)
    updateData();
}

void DlgInsertOutput::on_tableWidget_itemSelectionChanged()
{
    updateData();
}
