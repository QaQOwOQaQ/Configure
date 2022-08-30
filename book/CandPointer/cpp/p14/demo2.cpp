#include <iostream>

#define ONE 0
#define TWO 0
#define OTHER 1

using namespace std;

int main()
{
#if ONE
	cout << "one!" << endl;
#elif TWO
	cout << "two!" << endl;
#else
	cout << "other!" << endl;
#endif

	return 0;
}
