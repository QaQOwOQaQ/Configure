#include <stdio.h>

typedef struct Node{
	int a;
}node;

typedef enum Day{
	mon = 1, tus, wed, thr, fir, sat, sun
}day;

int main()
{
	node p;
	p.a = 1;
	printf("node: %d\n", p.a);
	day b;
	for(b = mon; b <= sun; b ++ )
			printf("%d ", b);
	puts("");
	return 0;
}
