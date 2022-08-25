#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s[10];
    for(int i = 0; i < 10; i ++ )   s[i] = malloc(110);
    s[0] = "asd";
    s[1] = "fuck";
    s[2] = "ok!";
    for(int i = 0; i < 3; i ++ )
        printf("%s\n", s[i]);
    
    return 0;
}


