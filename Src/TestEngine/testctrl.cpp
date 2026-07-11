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

#include "../../Libs/TACommon/ta_inc.h"
#include "testctrl.h"

TestCtrl::TestCtrl(TestRunner *runner)
    : m_pRunner(runner)
    , m_bContinue(true)
{
}

TestCtrl::~TestCtrl()
{
    m_bContinue = false;
    requestInterruption();
    if(!wait(3000)) {
        qWarning() << "TestCtrl thread did not stop within timeout";
    }
}

void TestCtrl::run()
{
    while(m_bContinue && !isInterruptionRequested()) {
        string strStopped;
        if(!(cin >> strStopped)) {
            if(cin.eof() || cin.bad())
                break;
            continue;
        }
        if(0 == QString::fromStdString(strStopped).compare(TA_STOPPED, Qt::CaseInsensitive))
            break;
    }

    if(m_pRunner)
        m_pRunner->stop();
}
