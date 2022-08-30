#include <stdio.h>

int main(int argc, char **argv)
{
	char *s = "abcdef";
	printf("%s\n", s);
	printf("%c\n", *s);
	printf("%s\n", "hello");
	printf("%p\n", &("hello"));

	printf("------\n");
	printf("%s\n", "xyz" + 1);
	//printf("%c\n", "xyz" + 1);
	printf("%c\n", *"xyz");
	//printf("%s\n", *"xyz");
	printf("%c\n", "xyz"[2]);
	printf("%c\n", *("xyz" + 2));
	
	return 0;
}
