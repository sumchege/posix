#include <sys/types.h>
#include <signal.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int pid;
    
    if(argc < 2)
    {
        printf("Usage: sender <destination process pid>");
        exit(-1);
    }
    
    pid = atoi(argv[1]);
    printf("Sending SIGURG to %d\n", pid);
    kill(pid, SIGURG);
    printf("Sending SIGUSR1 to %d\n", pid);
    kill(pid, SIGUSR1);
}
    
    
