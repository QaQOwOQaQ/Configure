#include <stdio.h>
#include <string.h>

void Strcpy(char *dest, char *src, int Size)
{
	int i = 0;
	char ch;
	while(ch = (dest[i] = src[i]) != NULL)	i ++ ;
	printf("Size = %d\nCur = %d\n", Size, i);
}

int main()
{
	char *src = "hello,world!";
	char dest[20];
	Strcpy(dest, src, strlen(src));
	puts(src);
	puts(dest);
	return 0;
}
