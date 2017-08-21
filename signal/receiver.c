#include <sys/types.h>
#include <signal.h>
#include <stdio.h>


void getSignal(int signo)
{
    if(signo == SIGUSR1)
    {
        printf("Received SIGUSR1\n");
        printf("Killing myself!!!!");
    }
    else{
        printf("Received %d\n", signo);
    }
    return;
}
int main(int argc, char **argv)
{
    printf("Registering #SIGUSR1 = %d\n", SIGUSR1);
    signal(SIGUSR1, getSignal);
    sleep(30);
    printf("End of sleep");
}
