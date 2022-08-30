#include <stdio.h>
#include <stdlib.h>

void *my_calloc(size_t num_element, size_t element_size)
{
	char *p = (char *)malloc(num_element * element_size);
	if(p == NULL)	return NULL;
	for(int i = 0; i < num_element; i ++ )
		*(p + i) = '\0';
	return p;
}

int main()
{
	int n = 5010;
	int *p1 = my_calloc(n, sizeof(int));
	int *p2 = malloc(sizeof(int) * n);

	printf("malloc: ");
	for(int i = 0; i < n; i ++ )
		if(p1[i] != 0)	
			printf("%d ", p1[i]);
	puts("");
	
	printf("calloc: ");
	for(int i = 0; i < n; i ++ )
		if(p2[i] != 0)	
			printf("%d ", p2[i]);
	puts("");



	return 0;
}
