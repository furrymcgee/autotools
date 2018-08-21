#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([testtool], [1.0.0], [BUG-REPORT-ADDRESS])
AM_INIT_AUTOMAKE([])
AC_CONFIG_SRCDIR([testtool.cpp])
AC_CONFIG_HEADERS([config.h])
LT_INIT

# Checks for programs.
AC_PROG_CXX

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_SIZE_T

AC_LANG(C)
AC_MSG_CHECKING([for the Android arm ABI])
AC_CHECK_TYPE([int32_t])
AC_RUN_IFELSE(
			  [AC_LANG_PROGRAM([[int zzz;]], [[return zzz;]])], 
			  [ MY_CFLAGS="-xxx"
			   AC_MSG_RESULT([yes]) ],
			  [ MY_CFLAGS="-yyy" ,
			   AC_MSG_RESULT([no]) ],
			  [ MY_CFLAGS="-zzz" 
			   AC_MSG_RESULT([???]) ],
			  )

## AX_APPEND_FLAG([-xxx], CPPFLAGS)
## AC_SUBST(MY_CFLAGS)

# Checks for library functions.

AC_CONFIG_FILES([Makefile
		testsuite/Makefile])
AC_OUTPUT
