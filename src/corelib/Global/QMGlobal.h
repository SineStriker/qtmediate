#ifndef QMGLOBAL_H
#define QMGLOBAL_H

#include <QtGlobal>

// clang-format off

#ifndef QMCORE_EXPORT
#  ifdef QMCORE_STATIC
#    define QMCORE_EXPORT
#  else
#    ifdef QMCORE_LIBRARY
#      define QMCORE_EXPORT Q_DECL_EXPORT
#    else
#      define QMCORE_EXPORT Q_DECL_IMPORT
#    endif
#  endif
#endif

// clang-format on

#endif // QMGLOBAL_H
