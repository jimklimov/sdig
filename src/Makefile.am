# $Id$

bin_PROGRAMS = sdig

AM_CFLAGS = @NET_SNMP_CFLAGS@ -DCONFPATH=\"${sysconfdir}\"
LDADD = @NET_SNMP_LIBS@

sdig_SOURCES = \
	common.c \
	sdig.c \
	query.c \
	config.c \
	snmpget.c \
	output.c

noinst_HEADERS = \
	sdig.h \
	query.h \
	config-sdig.h \
	common.h \
	snmpget.h \
	output.h
