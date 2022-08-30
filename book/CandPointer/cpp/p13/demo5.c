#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "hello";
	char *s2 = "hello";
	char *s3 = "hello";
	printf("s1: %p\n", &s1);
	printf("s2: %p\n", &s2);
	printf("s3: %p\n", &s3);
	printf("string: %p\n", &"hello");

//	strcpy("hello\n", "bye\n"); // 会导致SE
	printf("hello\n");
	printf("%s", "hello\n");
	


	return 0;
}
