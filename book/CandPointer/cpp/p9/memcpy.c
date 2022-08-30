#include <stdio.h>
#include <string.h>

#ifdef _MEMCPY_
void *memcpy1(void *dest, const void *src, unsigned int count)
{
    if(src == NULL || dest == NULL)
        return NULL;
    while(count -- )
        *dest ++ = *src ++ ;
    return dest;
// 存在两个问题：
// 1.如果dest和src的类型不一致，那么dest和src的++是不一致的
// 例如char类型每次增加1字节，而int类型每次增加4字节
// 2.最后返回的dest并不是dest的首地址
}
#endif

void *memcpy2(void *dest, const void *src, unsigned int count)
{
    void *tmp = dest;
    while(count -- )
    {
        *(char *)tmp = *(char *)src;
        tmp = (char *)tmp + 1;
        src = (char *)src + 1;
    }
    return dest;
}

int main()
{
    char dest[110];
    char src[110] = "hello,world!";
    memcpy2(dest, src, strlen(src) + 1);
    puts(src);
    puts(dest);
    
    return 0;
}
