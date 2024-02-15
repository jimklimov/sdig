AC_INIT([sdig], [0.46svn], [https://sdig.sourceforge.net])
AC_REVISION([$Id$])
AC_PREREQ([2.63])

AC_CONFIG_AUX_DIR([.])
AC_CONFIG_SRCDIR([src/sdig.c])
AC_CONFIG_HEADERS([include/config.h])
AC_CANONICAL_TARGET
AM_INIT_AUTOMAKE([subdir-objects])

AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL

AC_CHECK_PROG(NET_SNMP_CONFIG, net-snmp-config, net-snmp-config)
if test x$NET_SNMP_CONFIG = x; then
	AC_MSG_ERROR(Need net-snmp to continue.)
else
	NET_SNMP_CFLAGS=`net-snmp-config --cflags`
	NET_SNMP_LIBS=`net-snmp-config --libs`
fi

AC_CHECK_LIB(nsl, inet_pton,
	AC_DEFINE(HAVE_INET_PTON, 1, [Do we have inet_pton]))
AC_CHECK_FUNC(inet_aton,
	AC_DEFINE(HAVE_INET_ATON, 1, [Do we have inet_aton]))
AC_CHECK_FUNC(inet_pton,
	AC_DEFINE(HAVE_INET_PTON, 1), LIBS="$LIBS -lnsl")

AC_SUBST(NET_SNMP_CFLAGS)
AC_SUBST(NET_SNMP_LIBS)

#AC_SUBST(HAVE_INET_PTON)
#AC_SUBST(HAVE_INET_ATON)

AC_CONFIG_FILES([
 Makefile
 src/Makefile
])

AC_OUTPUT
