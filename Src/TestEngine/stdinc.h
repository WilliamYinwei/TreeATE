///
/// @brief         some define of global
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef STDINC_H
#define STDINC_H

#include <iostream>

using namespace std;

#define TA_TR   QObject::tr

#define TREEATE_TIME_FORMAT "HH:mm:ss.zzz"
#define TREEATE_DATETIME_FORMAT "yyyy-MM-dd HH:mm:ss.zzz"
#define TREEATE_DATETIME_FORMAT2 "yyyy-MM-dd(HH_mm_ss_zzz)"

typedef enum {
    eTestCase = 0,
    eTestSuite,
    eTestProject
}TA_UNIT_TYPE;

#define TA_UPLOAD_OK        10001
#define TA_LIST_OK          10000

#define TA_OK               0

#define TA_ERR_NEED_PARA    -1
#define TA_ERR_NO_PROJECT   -2
#define TA_ERR_LOAD_UNITS   -3
#define TA_ERR_LOAD_PARA    -4
#define TA_ERR_INIT_RUNNER  -5
#define TA_ERR_UNSELECTED   -6
#define TA_ERR_INIT_RESULT  -7
#define TA_ERR_RUNNING      -8
#define TA_ERR_UPLOAD_HRST  -9


#define TA_OUT_DEBUG_INFO  qDebug()
#define TA_MASK_RST     0x7FFFFFFF
#define TA_STOPPED      "stop"
#define TA_RST_FILE     ".rst"
#define TA_UPLOAD_RST   "uploadrst"

#define TA_RST_MAXLEN_NAME      32
#define TA_RST_MAXLEN_VALUE     256
#define TA_RST_MAXLEN_STAND     256

#endif // STDINC_H
