/*
 * com1.c
 *TRANSMITER

 * Program to interprocess communcation using flag

 * input process id of reciver ,interger value need to enter
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


int main()
{
union sigval value;
int pid,ret,c;


printf("enter the process id of reciver\n");
scanf("%5d",&pid);

if((kill(pid,0)==-1))
{
  perror("process");
  exit(EXIT_FAILURE);
}

printf("enter data to send\n");
while(1){
scanf("%d",&c);
value.sival_int = c;
ret = sigqueue (pid,SIGUSR2,value);
if (ret)
    {
      perror ("sigqueue");
      exit(EXIT_FAILURE);
  }

}
return 0;
}
