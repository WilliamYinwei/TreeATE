///
/// @project       TreeATE
/// @brief         New project dialog
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
///

#ifndef NEWPRJDLG_H
#define NEWPRJDLG_H

#include <QDialog>

namespace Ui {
class NewPrjDlg;
}

class NewPrjDlg : public QDialog
{
    Q_OBJECT

public:
    explicit NewPrjDlg(QWidget *parent = 0);
    ~NewPrjDlg();

    QStringList GetNewProjectFiles();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NewPrjDlg *ui;
};

#endif // NEWPRJDLG_H
