#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> primes;

bool is_prime(int x)
{
	if(x < 2)	return false;
	if(x == 2)	return true;
	for(int i = 2; i < x; i ++ )
	{
		if(x % i == 0)	return false;
	}
	return true;
}

int main()
{
	cout << "pls input a range 1 to n: ";
	cin >> n;
	for(int i = 2; i <= n; i ++ )
	{
		if(is_prime(i))	primes.push_back(i);
	}

	cout << "primes: ";
	for(auto &x: primes)	cout << x << ' ';
	cout << endl;
	return 0;
}
