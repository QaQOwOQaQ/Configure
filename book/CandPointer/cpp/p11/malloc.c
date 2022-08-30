#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

char* copy_string(const char *s)
{
	char *ret = (char *)malloc(strlen(s) + 1);
	if(ret == NULL)	return NULL;
	strcpy(ret, s);
	return ret;
}

int main()
{
	char *s = "hello, world!";
	char *p = copy_string(s);
	puts(s);
	puts(p);

	return 0;
}
