#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	pid = getpid();
	printf("before fork, my id is: %d\n", pid);
	//fflush(stdout);
	fork();
	pid = getpid();
	printf("after fork, my pid is %d\n", pid);
	return 0;
}
