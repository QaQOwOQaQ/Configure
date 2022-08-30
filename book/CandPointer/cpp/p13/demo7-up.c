#include <stdio.h>

#define SIZE 3

int add(int a, int b)
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
	// 定义一个元素是函数指针的数组
	int (*func[SIZE])() = {
		add, sub, mul
	};
	
	int flag = -1, res = -1, a = 1, b = 2;
	puts("pls input a number: ");
	scanf("%d", &flag);
	if(flag < 0 || flag >= SIZE)	puts("Wrong uumber of flag!");
	else printf("res = %d\n", res = func[flag](a, b));
	return 0;
}
