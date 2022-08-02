#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	for(int i = 0; i < 500000000; i ++ ) 
	{
		printf("the i number is: %d\n", rand() % 123456789);
	}
}
