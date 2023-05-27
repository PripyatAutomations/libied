#if	!defined(_util_h)
#define	_util_h
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif
   extern void toggle(int *v);
   extern int is_link(const char *path);
   extern int is_dir(const char *path);
   extern int is_file(const char *path);
   extern int is_fifo(const char *path);
   extern time_t timestr2time_t(const char *str);
   extern bool str2bool(const char *str, bool def);
#ifdef __cplusplus
};
#endif
#endif	// !defined(_util_h)
