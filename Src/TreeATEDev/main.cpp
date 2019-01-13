///
/// @project       TreeATE
/// @brief         TreeATEDev's main function
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    if( argc >= 2) {
        w.SetNewPrjDisabled();
        if(!w.OpenProjectFile(argv[1]))
            return -1;
    }
    w.show();

    return a.exec();
}
