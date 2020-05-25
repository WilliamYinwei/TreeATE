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

#ifndef TESTCTRL_H
#define TESTCTRL_H

#include "testrunner.h"
#include <QThread>

class TestCtrl : public QThread
{
    Q_OBJECT
public:
    TestCtrl(TestRunner* runner);
    ~TestCtrl();

protected:
    void run();

private:
    TestRunner* m_pRunner;
    bool m_bContinue;
};

#endif // TESTCTRL_H
