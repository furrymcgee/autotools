#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([mumble],[1.5])
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_MACRO_DIRS([m4])
# AX_REQUIRE_DEFINED([AX_APPEND_FLAG])
# AC_USE_SYSTEM_EXTENSIONS
# AM_GNU_GETTEXT([external])
# AM_GNU_GETTEXT_VERSION([0.19.8])

AM_INIT_AUTOMAKE
AM_PROG_AR
LT_INIT
AC_SUBST([LIBTOOL_DEPS])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_SIZE_T

AC_LANG(C)
AC_MSG_CHECKING([for the Android arm ABI])
AC_RUN_IFELSE(
			  [AC_LANG_PROGRAM([[int zzz;]], [[return zzz;]])], 
			  [ MY_CFLAGS="-xxx"
			   AC_MSG_RESULT([yes]) ],
			  [ MY_CFLAGS="-yyy" ,
			   AC_MSG_RESULT([no]) ],
			  [ MY_CFLAGS="-zzz" 
			   AC_MSG_RESULT([???]) ],
			  )

# AX_APPEND_FLAG([-xxx], CPPFLAGS)
AC_SUBST(MY_CFLAGS)

# Checks for library functions.

AC_CONFIG_FILES([Makefile])
AC_OUTPUT

