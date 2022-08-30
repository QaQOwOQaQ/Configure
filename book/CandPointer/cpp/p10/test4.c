#include <stdio.h>
#include <stdlib.h>

struct node{
	unsigned a : 7;
	unsigned b : 6;
	unsigned c : 19;
};

int main()
{
	struct node a;
	printf("size = %ld\n", sizeof(a));

	return 0;
}
