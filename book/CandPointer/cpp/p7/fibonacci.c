#include <stdio.h>

int fibonacci(int n)
{
    if(n <= 2)  return 1;
    int x = 1, y = 1, res = 1;
    for(int i = 3; i < n; i ++ )
    {
        res = x + y;
        x = y;
        y = res;
    }
    return res;
}

int main()
{
    int n = 10;
    for(int i = 1; i <= n; i ++ )
        printf("fibonacci[%d] = %d\n", i, fibonacci(i));
    return 0;
}
