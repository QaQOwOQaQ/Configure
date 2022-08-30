#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 4

int cnt[SIZE], total;
char *name[SIZE] = {
	"upper",
	"lower",
	"digit",
	"space",
};

int (*func[SIZE])(int) = {
	isupper,
	islower,
	isdigit,
	isspace,
};

int main()
{
	int ch;
	while((ch = getchar()) != EOF)
	{
		total += 1;
		for(int i = 0; i < SIZE; i ++ )
			if(func[i](ch))
				cnt[i] ++ ;
	}

	printf("total = %d\n", total);
	for(int i = 0; i < SIZE; i ++ )
		printf("%s = %d\n", name[i], cnt[i]);
	return 0;
}

