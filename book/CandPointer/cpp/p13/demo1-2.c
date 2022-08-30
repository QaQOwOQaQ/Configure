#include <stdio.h>
#include "demo1-1.h"

extern int f[];

int main()
{
	for(int i = 0; i < 10; i ++ )
		printf("%d ", f[i]);
	puts("");
	return 0;
}
