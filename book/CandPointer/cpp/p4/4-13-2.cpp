#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 1010;

int n, idx, primes[N];
bool st[N];

void get_prime(int x)
{
	memset(st, false, sizeof st);
	for(int i = 2; i <= x; i ++ )
	{
		if(!st[i])
		{
			st[i] = true;
			primes[idx ++ ] = i;
		}	
		for(int j = 0; i * primes[j] <= x; j ++ )
			st[i * primes[j]] = true;
	}
}

int main()
{
	cout << "pls input a range 1 to n: ";
	cin >> n;
	get_prime(n);

	cout << "primes: ";
	for(int i = 0; i < idx; i ++ )	cout << primes[i] << ' ';
	cout << endl;

	return 0;
}
