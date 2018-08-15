SUBDIRS = testsuite

lib_LTLIBRARIES=libtestlib.la
libtestlib_la_SOURCES = testlib.cpp
libtesttool_la_CFLAGS = ${MY_CFLAGS}

bin_PROGRAMS = testtool
testtool_SOURCES = testtool.cpp
testtool_LDADD = libtestlib.la
testtool_LDFLAGS = -no-install
sysconf_DATA = README
