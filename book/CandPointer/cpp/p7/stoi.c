#include <stdio.h>
#include <stdarg.h>

int check(char ch)
{
    if(ch >= '0' && ch <= '9')  return 1;
    return 0;
}

int _stoi(char *s)
{
    if(s == NULL)   return 0;

//  -----    
    int res = 0;
    int flag = 0;

    if(*s == '-')   flag = 1, s ++ ;
    
    while(*s)
    {
        if(!check(*s))  
        {
            printf("wrong: %c\n", *s);
            return 0;   
        }
        res = res * 10 + *s - '0';
        s ++ ;
    }
    if(flag)    res *= -1;
    return res;
}

int main()
{
    char *s = "-21233";
    printf("%d\n", _stoi(s));

    return 0;
}
