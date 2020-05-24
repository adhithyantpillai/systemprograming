

/*
 * com2.c
 *reciver

 * Program to interprocess communcation using flag


 * Author :  Adhithyan t pillai
 * License: MIT
 */

 #include <signal.h>
 #include <stdio.h>
 #include <unistd.h>
 #include <sys/types.h>
 #include <sys/wait.h>
 #include <string.h>
 #include <stdlib.h>


void handler(int signo,siginfo_t *si,void *ucontext)
{
    printf("recives value is %d\n",si->si_int);

}
int main()
{
static  int x;

struct sigaction sa;
sa.sa_handler=handler;
sigemptyset(&sa.sa_mask);
sa.sa_flags = SA_NODEFER|SA_SIGINFO;
if (sigaction(SIGUSR2, &sa, NULL) == -1)
    { perror("sigaction failed ");
      exit(EXIT_FAILURE);}
printf("pid is %d\n",getpid());
while(1);
return 0;

  }
