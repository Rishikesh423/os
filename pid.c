#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t p;
printf("Before fork()\n");
p=fork();
if(p==0)
{
printf("I am child process having id %d\n",getpid());
printf("My Parent's id is %d\n",getpid());
}
else
{
printf("My child's process id is %d\n",p);
printf("I am parent process having id %d\n",getpid());
}
}

