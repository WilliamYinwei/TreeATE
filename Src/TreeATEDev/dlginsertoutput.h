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

#ifndef DLGINSERTOUTPUT_H
#define DLGINSERTOUTPUT_H

#include <QDialog>

namespace Ui {
class DlgInsertOutput;
}

class DlgInsertOutput : public QDialog
{
    Q_OBJECT

public:
    explicit DlgInsertOutput(QWidget *parent = 0);
    ~DlgInsertOutput();

    QString GetInsertStr();

protected:
    void updateData();

private slots:
    void on_checkBox_rst_clicked(bool checked);

    void on_lineEdit_value_textChanged(const QString &arg1);

    void on_lineEdit_stand_textChanged(const QString &arg1);

    void on_comboBox_rst_currentTextChanged(const QString &arg1);

    void on_checkBox_tv_stateChanged(int arg1);

    void on_checkBox_ts_stateChanged(int arg1);

    void on_comboBox_module_editTextChanged(const QString &arg1);

    void on_tableWidget_itemSelectionChanged();

protected:
    QString getCurrentCode();

private:
    Ui::DlgInsertOutput *ui;
    QString m_funcName;
};

#endif // DLGINSERTOUTPUT_H
