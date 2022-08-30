#include <iostream>
using namespace std;

typedef struct Node {
	int a, b, c;
	Node(){}
	Node(int x, int y, int z) : a(x), b(y), c(z) {}
}node;

int main()
{
	node x(1, 2, 3);
	cout << x.a << ' ' << x.b << ' ' << x.c << endl;

	return 0;
}
