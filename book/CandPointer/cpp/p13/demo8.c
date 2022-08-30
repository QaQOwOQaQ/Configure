#include <stdio.h>
#include <string.h>

int main(int argc, char ** argv)
{
	printf("count of args is: %d\n", argc);
	while(*argv != NULL)
		puts(*argv ++ );
	return 0;
}
