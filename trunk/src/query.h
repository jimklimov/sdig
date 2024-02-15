#ifndef SDIG_QUERY_H

macstring_t pack_mac(macstring_t buf);
void resolvename(const char *name);
void switchscan(const char *ipaddr, const macstring_t macaddr);
void routerscan(const char *ipaddr);

void do_ifdescr(stype *sw, long port);

#define SDIG_QUERY_H 1
#endif
