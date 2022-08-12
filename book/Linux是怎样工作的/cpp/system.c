#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char command[110];
	strcpy(command, "ls -al");
	system(command);

	return 0;
}
