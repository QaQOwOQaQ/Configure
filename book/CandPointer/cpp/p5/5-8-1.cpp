#include <iostream>
using namespace std;

int func()
{
	static int cnt = 1;
	return ++ cnt;
}

int main()
{
	int res = 0;
	res = func() - func() * func();
	cout << res << endl;
	return 0;
}
