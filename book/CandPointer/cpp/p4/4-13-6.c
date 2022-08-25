#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* Substr(char *src, int start, int len)
{
	char *str = (char *)malloc(len + 1);
	char *cur = str;
	while(start -- ) {
		*src ++ ;
	}
	printf("start: %s\n", src);
	while(len -- && src) {
		*cur ++ = *src ++ ;
	}
	printf("tmp: %s\n", st);
	return str;
}

int main()
{
	char *s = "abcdefghigk";
	char *subs = Substr(s, 2, 3);
	puts(subs);
	return 0;
}
