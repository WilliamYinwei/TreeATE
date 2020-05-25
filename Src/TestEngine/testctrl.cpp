///
/// @brief         Stop the current testing with command line
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "stdinc.h"
#include "testctrl.h"

TestCtrl::TestCtrl(TestRunner *runner)
{
    m_pRunner = runner;
}

TestCtrl::~TestCtrl()
{
    QThread::terminate();
    QThread::wait(300);
}

void TestCtrl::run()
{    
    while(1) {
        string strStopped;
        cin >> strStopped;
        if(0 == QString::fromStdString(strStopped).compare(TA_STOPPED, Qt::CaseInsensitive))
            break;
    }
    m_pRunner->stop();
}
