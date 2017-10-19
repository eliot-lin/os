#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid<0)
		printf("error in fork!");
	else if(pid==0)
		printf("i am the child process, my process id is %d, my parent process id is %d\n",getpid(), getppid());
	else if(pid>0)
		printf("i am the parent process, my process id is %d, my child process id is %d\n",getpid(), wait(NULL));
	return 0;
}
