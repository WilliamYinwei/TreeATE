#ifndef TALOGIN_GLOBAL_H
#define TALOGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RFLOGIN_LIBRARY)
#  define TALOGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TALOGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TALOGIN_GLOBAL_H
