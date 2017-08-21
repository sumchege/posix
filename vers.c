#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309

#include <unistd.h>
#include <stdio.h>
#ifdef _POSIX_ASYNCHRONOUS_IO
printf("Yes");
#else
printf("No");
#endif
