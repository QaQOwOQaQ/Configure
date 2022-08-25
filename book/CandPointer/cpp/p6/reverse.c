#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse(char *src)
{
    char *t = src;
    while(*t)   t ++ ;
    t -- ;
    // puts(t);
    // puts(src);
    while(src < t)
    {
        char ch = *src;
        *src ++ = *t;
        *t -- = ch;
    }
    // puts(t);
    // puts(src);
}

int main()
{
    char src[] = "ABCDE";
    Reverse(src);
    printf("reverse: %s\n", src);
    return 0;
}
