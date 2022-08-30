#include <stdio.h>

struct node{
	int a;
	struct node *b;
	struct node *c;
}nodes[2] = {
	{5, nodes + 3, NULL},
	{15, nodes + 4, nodes + 3}
};

int main()
{
	printf("%d\n", nodes->a);
	return 0;
}
