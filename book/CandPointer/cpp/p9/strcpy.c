#include <stdio.h>
#include <string.h>

char *my_strcpy(char *dest, const char *src, int size)
{
    strncpy(dest, src, size);
    dest[size - 1] = '\0'; // 强制执行
    return dest;
}

int main()
{
    char src[] = "hello";
    char dest[110];
    my_strcpy(dest, src, strlen(src));
    puts(dest);
    return 0;
}
