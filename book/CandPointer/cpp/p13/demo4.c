#include <stdio.h>

typedef struct NODE {
	int x, y;
}Node;

int main()
{
	Node p;
	p.x = 1;
	p.y = 2;
	printf("x = %d, y = %d\n", p.x, p.y);
	Node *a = &p;
	printf("a->x = %d, a->y = %d\n", a->x, a->y);

	return 0;
}
