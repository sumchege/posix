#include <stdio.h>
#include <sys/types.h>
int main(void) {
  pid_t ret;
  char *name;

  ret = fork();

  if (ret == 0) { /* Child */
    name = "child";
  } else {
    name = "parent";
    sleep(2);
  }

 name[1] = 'o'; 

  printf("process %s ret  = %d\n", name, ret);
}
