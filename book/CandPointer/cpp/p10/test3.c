#include <stdio.h>
#include<stdlib.h>

#define MAX 10

struct node{
	int a;
}arr[MAX];

int main()
{
	for(int i = 0; i < MAX; i ++ )
		arr[i].a = i;
	for(int i = 0; i < MAX; i ++ )
		printf("%d = %d\n", arr[i].a, (*(arr + i)).a);
	puts("");

	return 0;
}
