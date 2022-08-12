#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <err.h>
#include <string.h>

static void child()
{
	char *args[] = {"/bin/echo", "hello", NULL};
	printf("I am child! my pid is %d.\n", getpid());
	fflush(stdout);
	execve("/bin/echo", args, NULL);
	err(EXIT_FAILURE, "execve() failde!");
}

static void parent(pid_t pid_c)
{
	printf("I am parent! my pid is %d and my child pid is %d.\n", getpid(), pid_c);
	exit(EXIT_SUCCESS);
}

int main()
{
	pid_t ret;
	ret = fork();
	if (ret == -1) 
		err(EXIT_FAILURE, "fork() Failed!");
	if (ret == 0)
		child();
	else
		parent(ret);
	
	err(EXIT_FAILURE, "should not reach here!");
	return 0;
}
