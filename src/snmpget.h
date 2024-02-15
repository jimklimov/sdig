/*
 * $Id$
 */

#ifndef SDIG_SNMPGET_H

int snmpget_int(char *host, char *community, char *reqoid);
macstring_t snmpget_mac(char *host, char *community, char *reqoid);
char *snmpget_str(char *host, char *community, char *reqoid);

#define SDIG_SNMPGET_H 1
#endif
