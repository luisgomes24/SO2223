#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
static void handler_parent()
{
    printf("%d: Parent received signal\n", getpid());
}
static void handler_child()
{
    printf("%d: Child received signal\n", getpid());
}
int main(int argc, char *argv[])
{
    pid_t pid;
    if (signal(SIGUSR1, handler_parent) == SIG_ERR)
    { /* signal error */
    }
    if (signal(SIGUSR2, handler_child) == SIG_ERR)
    { /* signal error */
    }
    if ((pid = fork()) < 0)
    { /* fork error */
    }
    else if (pid > 0)
    {
        /* parent’s code */
        kill(pid, SIGUSR2);
        pause();
    }
    else
    {
        /* child’s code */
        kill(getppid(), SIGUSR1);
        pause();
    }
}
