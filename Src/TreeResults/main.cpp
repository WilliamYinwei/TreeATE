///
/// @project       TreeATE
/// @brief         main function of the test results manager
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
///

#include "mainwindow.h"
#include <QApplication>
#include <QSharedMemory>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int iRet = 0;

    QSharedMemory sharedMemory("TreeATEResults_exe");
    if (sharedMemory.create(1) && sharedMemory.error() != QSharedMemory::AlreadyExists)
    {
        MainWindow w;
        w.show();
        iRet = a.exec();
    }
    else
    {
        QMessageBox::warning(NULL, "Warning", QObject::tr("TreeResults is running."));
    }

    return iRet;
}
