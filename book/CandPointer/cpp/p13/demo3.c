#include <stdio.h>

int main()
{
	char *s[3] = {
		"hello", "world", "xjy"
	};
	char **p = s;
	printf("%s\n", *p);
	printf("%c\n", **p);
	printf("%s\n", *(p + 1));

	printf("%s\n", *p + 1);
	printf("%c\n", *(*p + 1));
	printf("%c\n", *p[2]);
	printf("%s\n", p[2]);
	return 0;
}
