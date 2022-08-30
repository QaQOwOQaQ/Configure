#include <stdio.h>
#include <stdlib.h>

#define malloc

int main()
{
	#define MAX 100
	printf("%d\n", MAX);
	#undef MAX 
	// printf("%d\n", MAX); //报错。因为MAX已经被取消define了

	return 0;
}
