///
/// @brief         global define
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef TADEFINE_H
#define TADEFINE_H

#define TA_STATUS_EXCE  "Exce"
#define TA_STATUS_FAIL  "Fail"
#define TA_STATUS_PASS  "Pass"
#define TA_STATUS_UNLOAD    "Unload"

#define TA_COLUMN_UNIT_NAME     0
#define TA_COLUMN_UNIT_PATH     1
#define TA_COLUMN_UNIT_DESC     2
#define TA_COLUMN_TEST_STATUS   3
#define TA_COLUMN_TEST_RST      4
#define TA_COLUMN_TEST_STAND    5
#define TA_COLUMN_START_TIME    6
#define TA_COLUMN_SPEND_TIME    7

#ifdef WIN32
#define TA_TEST_COM_SUFFIX  "dll"
#else
#define TA_TEST_COM_SUFFIX  "so"
#endif

#endif // TADEFINE_H
