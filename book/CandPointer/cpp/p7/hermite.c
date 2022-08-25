#include <stdio.h>
#include <stdarg.h>

int hermite(int n, int x)
{
    if(n <= 0)  return 1;
    if(n == 1)  return x << 1;
    return 2 * x * hermite(n - 1, x) - 2 * (n - 1) * hermite(n - 2, x);
}



int main()
{
    printf("%d\n", hermite(3, 2));


    return 0;
}
