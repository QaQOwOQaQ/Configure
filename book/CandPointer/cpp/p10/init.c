#include <stdio.h>

struct Node {
	int a;
	float b;
	char c;
	Node() : a(), b(), c() {}
	Node(int x, float y, char z) : a(x), b(y), c(z) {}	
};

int main()
{
	//struct node p(1, 2, '3');
	//printf("%d-%f-%c\n", p.a, p.b, p.c);
	return 0;
}
