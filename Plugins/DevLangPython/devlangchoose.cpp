/// @project       TreeATE
/// @brief         parser test for Python
/// @author        David Yin  2019-01 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///
#include "devlangchoose.h"
#include "langpy.h"

void* CreateLanguageInst(const char *strLangName)
{
    if(QString(strLangName) == "py")
        return new LangPy();

    return NULL;
}
