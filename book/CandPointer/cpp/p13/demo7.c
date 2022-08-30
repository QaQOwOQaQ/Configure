#include <stdio.h>

int add(int a,int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int main()
{
	int flag;
	int a = 3, b = 4, res = 0;
	printf("pls input a number: ");
	scanf("%d", &flag);
	switch(flag)
	{
		case 1: 
			res = add(a, b);
			break;
		case 2:
			res = sub(a, b);
			break;
		case 3:
			res = mul(a, b);
			break;
		default:
			res = a;
			break;
	}
	printf("res = %d\n", res);

	return 0;
}
