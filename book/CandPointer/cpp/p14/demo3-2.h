#include <iostream>
#include "demo3-1.h"

using namespace std;

int more_add(int a, int b, int c, int d)
{
	int s1 = add(a, b);
	int s2 = add(c, d);
	int ans = add(s1, s2);
	return ans;
}

