/*
 * fork1.c
 *
 * Program to create a zombie process
 * child process die and parent process dont take status od the child
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
        printf("child created with pid %d \n",getpid());
        printf("child deleted ,zombie created \n");
        exit(0);
        break;

        case -1:
        perror("fork");
        break;

        default:
        sleep(1);
        printf("zombie created with pid %d\n",x);
        system("ps -l|grep Z");
        while(1);
       }

return 0;
}
