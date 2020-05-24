/*
 * fork3.c
 *
 * fork 2 children; have the parent wait for both to die; ensure zombies are prevented using the signalling mechanism
 * child wait by flag set SA_NOCLDWAIT,no wait on isr because SA_NOCLDWAIT flag used
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

void handler(int signo)
{
    printf("child deleted ..\n");

}
int main()
{
static  int x;


    struct sigaction sa;


    sa.sa_handler =handler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = SA_NOCLDWAIT|SA_NOCLDSTOP|SA_NODEFER; /* Restart functions if
                                 interrupted by handler */
    if (sigaction(SIGCHLD, &sa, NULL) == -1)
      perror("sigaction failed ");
      exit(EXIT_FAILURE);

      switch (x=fork())
      {
        case 0:
          printf("child created with pid %d \n",getpid());
          printf("child deleted ,zombie created \n");
          exit(0);
        break;

        case -1:
          perror("fork");
          exit(EXIT_FAILURE);
        break;

        default:
          sleep(1);
          printf("zombie not created with pid %d\n",x);
          system("ps -l|grep Z");
        while(1);
       }

return 0;
}
