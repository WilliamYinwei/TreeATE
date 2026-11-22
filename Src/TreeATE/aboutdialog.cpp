///
/// @brief         about this system
/// @author        David Yin  2018-12 willage.yin@163.com  2026-11-22 版本行改为从单一版本源动态生成
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "aboutdialog.h"
#include "ui_aboutdialog.h"
#include "version.h"

#include <QDir>
#include <QFileInfoList>
#include <QDateTime>
#include <QEvent>

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    ui->label_license->setOpenExternalLinks(true);
    updateVersionText();

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

void AboutDialog::updateVersionText()
{
    ui->label_3->setText(tr("Version: %1").arg(TREEATE_VERSION_STR));
}

void AboutDialog::changeEvent(QEvent* e)
{
    if(e && e->type() == QEvent::LanguageChange) {
        ui->retranslateUi(this);
        updateVersionText();
    }
    QDialog::changeEvent(e);
}
