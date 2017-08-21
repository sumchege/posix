/* syssample.C: The program below illustrates usage of sysinfo functions*/
#include <stdio.h>
#include <unistd.h>
void main( void )
{
/* retrieve the system information */
   long sinfo;
   sinfo = sysconf(_SC_VERSION);
   printf("Version supported: %d\n",sinfo);
   sinfo = sysconf(_SC_LINE_MAX);
   printf("Maximum line: %d\n",sinfo);    return;
}
