#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <err.h>

static void child()
{
	printf("I am child! my pid is %d.\n", getpid());
	exit(EXIT_SUCCESS);
}

static void parent(pid_t pid_c)
{
	printf("I am parent! my pid is %d and the pid of my child is %d.\n", getpid(), pid_c);
	exit(EXIT_SUCCESS);
}

int main()
{
	pid_t ret;
	ret = fork();
	
	printf("ret =  %d and pid = %d\n", ret, getpid());

	if(ret == -1)
	{
		err(EXIT_FAILURE, "fork failed!");
	}
	if(ret == 0)
	{
		child();
	}
	else
	{
		parent(ret);
	}
	err(EXIT_FAILURE, "Should not reach here");
}


