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

#ifndef SYSCFGDLG_H
#define SYSCFGDLG_H

#include <QDialog>

namespace Ui {
class SysCfgDlg;
}

class SysCfgDlg : public QDialog
{
    Q_OBJECT

public:
    explicit SysCfgDlg(QWidget *parent = 0);
    ~SysCfgDlg();

    void SetSysConfig(const QVariant& sysCfg);
    QVariantMap GetDataValue();

private slots:
    void on_brownButton_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_del_clicked();

private:
    Ui::SysCfgDlg *ui;
};

#endif // SYSCFGDLG_H
