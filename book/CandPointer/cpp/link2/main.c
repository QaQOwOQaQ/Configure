#include <stdio.h>

extern int x;
int out();

int main()
{
	x = 10;
	printf("main: %d\n", x);
	printf("old: %d\n", out());
	return 0;
}
