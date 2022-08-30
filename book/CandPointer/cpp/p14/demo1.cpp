#include <iostream>

using namespace std;

#define debug1(a, b) \
	printf("a = %d, b = %d\n", a, b)

#define debug2(a, b) \
	cout << "a = " << #a << " b = " << #b << endl

#define debug3(a, b) \
	cout << #a << ' ' << a << ' ' << #b << ' ' << b << endl

#define debug4(a, b) \
	printf("#a = %d, #b = %d\n", a, b)

#define debug5(a, b) \
	printf(""#a" = %d, "#b" = %d\n", a, b)

int main()
{
	int a = 1, b = 2;
	debug1(a + 1, b + 2);
	debug2(a + 1, b + 2);
	debug3(a + 1, b + 2);
	debug4(a + 1, b + 2);
	debug5(a + 1, b + 2);
	return 0;
}
