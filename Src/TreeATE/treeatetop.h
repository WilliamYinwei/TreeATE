///
/// @brief         TreeATE Top Interface
/// @author        David Yin  2022-09 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///
#ifndef TREEATETOP_H
#define TREEATETOP_H

#include <QtCore/qglobal.h>

#if defined(TREEATETOP_LIBRARY)
#  define TREEATETOPSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TREEATETOPSHARED_EXPORT Q_DECL_IMPORT
#endif

class TreeATEtop
{
public:
    virtual bool InitATEtop() = 0;
    virtual bool VerifyProcedure(const QString& strSN, const QString& strProcedure) = 0;
    virtual bool DownloadProject(const QString& strSN, const QString& strProcedure, const QString& workingPath) = 0;
    virtual QString GetDownloadPrjName() = 0;
    virtual void ExitATEtop() = 0;
    virtual QString GetLastError() = 0;
};

typedef TreeATEtop *(*CreateInstTreeATEtop_t)(void *parent);
typedef void (*DestroyInstTreeATEtop_t)(TreeATEtop *pInst);

extern "C" TREEATETOPSHARED_EXPORT TreeATEtop* CreateTreeATEtop(void *parent);
extern "C" TREEATETOPSHARED_EXPORT void DestroyTreeATEtop(TreeATEtop* pInst);

#endif // TREEATETOP_H
