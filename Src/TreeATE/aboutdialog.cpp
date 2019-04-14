///
/// @brief         about this system
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "aboutdialog.h"
#include "ui_aboutdialog.h"

#include <QDir>
#include <QFileInfoList>
#include <QDateTime>

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    ui->label_license->setOpenExternalLinks(true);

    QDir dir;
    dir.setFilter( QDir::Files | QDir::Hidden | QDir::NoSymLinks );
    dir.setSorting( QDir::Size | QDir::Reversed );
    QFileInfoList lstFile = dir.entryInfoList(QStringList() << "*.exe");
    foreach(QFileInfo fInfo, lstFile) {
        ui->listWidget->addItem(fInfo.fileName() + " - " + fInfo.lastModified().toString());
    }
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
