/*
 * fork2.c
 *
 * Program to create a orphans process
 * parent process die before child dies.child ppid become 1
 * Author :  Adhithyan t pillai
 * License: MIT
 */

#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
static  int x;
  printf("program to create a zombie \n\n");
switch (x=fork())
      {
        case 0:
        printf("child created with pid %d with parrent id %d\n",getpid(),getppid());
        sleep(2);
        printf("ppid after parent dead id- %d\n",getppid());
        system("ps -l");
        while(1);
        exit(0);
        break;

        case -1:
        perror("fork");
        break;

        default:
        sleep(1);
        printf("orphnan created with pid %d\n",x);

       }

return 0;
}
