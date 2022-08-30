#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int main()
{
	int *array = (int *)malloc(sizeof(int));
	if(array == NULL)
		puts("Alloc Error!");
	else
		printf("Alloc Success! --%ld\n", malloc_usable_size(array));

	int cnt = 1, alloc = 1, x;
	while(scanf("%d", &x) == 1)
	{
		if(alloc <= cnt)	
		{
			alloc <<= 1;
			array = realloc(array, alloc * sizeof(int));
			if(array == NULL)
			{
				puts("Alloc Error!");
				return 0;
			}
		}
		*(array + cnt ++ ) = x;
		printf("malloc: %ld\n", malloc_usable_size(array));
	}

	array = realloc(array, cnt * sizeof(int));
	if(array == NULL)
	{
		puts("Alloc Error!");
		return 0;
	}
	printf("End-Malloc: %ld\n", malloc_usable_size(array));
	array[0] = cnt - 1;
	for(int i = 0; i < cnt; i ++ )
		printf("%d ", *(array + i));
	puts("");
	free(array);

	return 0;
}
