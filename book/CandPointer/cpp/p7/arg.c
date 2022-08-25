#include <stdio.h>
#include <stdarg.h>
#include <math.h>

float average(int n, ...)
{
    va_list var_arg;
    float sum = 0;
    
    va_start(var_arg, n);
    for(int i = 0; i < n; i ++ )
    {
        sum += va_arg(var_arg, int);
    }
    va_end(var_arg);
    return sum / n;
}

int _max(int n, ... )
{
    va_list var_arg;
    int maxn = -1;
    va_start(var_arg, n);
    for(int i = 0; i < n; i ++ )
    {
        int t = va_arg(var_arg, int);
        if(t > maxn)    maxn = t;
    }
    va_end(var_arg);
    return maxn;
}

int main()
{
    printf("%lf\n", average(4, 1, 2, 3, 4));
    printf("%lf\n", average(5, 1, 2, 3, 4, 5));
    
    printf("%d\n", _max(4, 4, 6, 1, 10));
    printf("%d\n", _max(5, 6, 20, 3, 9, 3));
    

    
    return 0;
}
