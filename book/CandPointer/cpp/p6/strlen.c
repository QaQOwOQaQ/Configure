#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Strlen(char *s)
{
	int length = 0;
	while(*s ++ != '\0')	length ++ ;
	return length;
}

int main()
{
	char s[110];
	printf("pls input a string: ");
	scanf("%s", s);
	printf("string: %s\n", s);
	printf("strlen of\"%s\" is : %d\n", s, Strlen(s));

	return 0;
}
