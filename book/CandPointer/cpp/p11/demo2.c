#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
	int x = 1;
	int *p = &x;
	// free(p); // 报错，*p并不是动态申请的内存
	
	int *a = malloc(500);
	int *b = malloc(5000);
	
	printf("500  -> %ld\n", malloc_usable_size(a));
	printf("5000 -> %ld\n", malloc_usable_size(b));


	return 0;
}
