#ifndef TA_MSGBOX_GLOBAL_H
#define TA_MSGBOX_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TA_MSGBOX_LIBRARY)
#  define TA_MSGBOXSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TA_MSGBOXSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TA_MSGBOX_GLOBAL_H
