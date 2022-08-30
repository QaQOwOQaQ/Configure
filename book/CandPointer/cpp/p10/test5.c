#include <stdio.h>

struct A {
	char x;
	int y;
	char z;
}a;

struct B {
	char x;
	char y;
	int z;
}b;

union C {
	int a;
	float b;
	char c;
}c;

union D {
	int a;
	char *s;
}d;

union E {
	int a;
	char s[20];
}e;

int main()
{
	printf("char+char+int = %ld\n", sizeof b);
	printf("char+int+char = %ld\n", sizeof a);
	printf("int | char | short = %ld\n", sizeof(c));
	printf("int | char* = %ld\n", sizeof(d));
	printf("int | char[20] = %ld\n", sizeof(e));
	return 0;
}
