#ifndef __OS3_ERR_H__
#define __OS3_ERR_H__

#ifdef __cplusplus
  extern "C" {
#endif

#ifdef __l4env__

/* l4env includes */
#include <l4/env/errno.h>

#endif

char const *l4os3_errtostr(long err);

#ifdef __cplusplus
  }
#endif

#endif
