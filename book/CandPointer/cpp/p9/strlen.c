#include <stdio.h>
#include <string.h>

size_t my_strlen(const char *s, const int size)
{
    size_t i = 0;
    for(i = 0; i < size; i ++ )
        if(*s ++ == '\0')
            break;
    return i;
}

int main()
{
    char a[11] = "12345";
    char b[6] = "abcde";
    strncat(a, b, 5);
    puts(a);
    printf("%d", my_strlen(a, 10));
    return 0;
}
