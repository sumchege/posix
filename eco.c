#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *args[])
{
    int i = 1;
    while (args[i]) {
       write(1, args[i], strlen(args[i]));
       // write(1, "\r\n", 2);
       i++;
    }
    exit(0);
}
