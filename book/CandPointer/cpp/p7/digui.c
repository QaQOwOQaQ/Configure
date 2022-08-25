#include <stdio.h>

void dg(int x)
{
    if(x < 10)  printf("%d ", x);
    else    
    {
        dg(x / 10);
        printf("%d ", x % 10);
    }
}

void _dg(int x)
{
    if(x >= 10)  _dg(x / 10);
    printf(" = %d = ", x % 10);
}

int main()
{
    int x = 12;
    
    _dg(x);
    
    return 0;
}
