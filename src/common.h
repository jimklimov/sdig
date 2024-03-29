#ifndef SDIG_COMMON_H

#define LARGEBUF 1024

void debug(int level, const char *format, ...);
void inc_debuglevel(void);
int get_debuglevel(void);

void fatal(const char *fmt, ...);

int parseconf(const char *fn, int ln, char *buf, char **arg, int numargs);

int snprintfcat(char *dst, size_t size, const char *fmt, ...);
void *xmalloc(size_t size);
char *xstrdup(const char *string);

#define SDIG_COMMON_H 1
#endif
