///
/// @brief         Login Dialog Interface
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef TALOGIN_H
#define TALOGIN_H

#include "talogin_global.h"

class TALogin
{
public:
    virtual bool InitLogin(const QString& strHost) = 0;
    virtual bool VerifyLogin(const QString& strUser, const QString& strPwd, QString& err) = 0;
    virtual void ExitLogin() = 0;
};

typedef TALogin *(*CreateInstTALogin_t)();
typedef void (*DestroyInstTALogin_t)(TALogin *pInst);

extern "C" TALOGINSHARED_EXPORT TALogin* CreateTALogin();
extern "C" TALOGINSHARED_EXPORT void DestroyTALogin(TALogin* pInst);

#endif // TALOGIN_H
