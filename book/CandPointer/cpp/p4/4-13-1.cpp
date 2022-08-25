#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "pls input a number: ";
	cin >> n;

	double res = 1;
	for(int i = 0; i < 20; i ++ )
	{
		double t = (res + n / res) / 2;
		if(res == t)	break;
		res = t;
	}

	cout << "sqrt(n) = " << res << endl;

	return 0;
}
