#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int del_substr_1(char *src, const char *subs)
{
    while(*src)
    {
        const char *t_subs = subs;
        const char *t_src = src;
        while(*t_src && *t_src && *t_src == *t_subs) 
        {
            t_subs ++ , t_src ++ ;
            if(*t_subs == '\0')   
            {
                while(*t_src)   *src ++ = *t_src ++ ;
                *src = '\0';
                return 1;
            }
        }
        src ++ ;
    }
    
    return 0;
}

// 判断src从当前位置是否含有串dest
char *match(char *src, char *dest)
{
    while(*dest) // 只要模式串dest还由就一直匹配，即使src=='\0'也会返回null 
    {
        if(*src ++ != *dest ++ )    return NULL;
    }
    return src;
}

int del_substr_2(char *src, const char *subs)
{
    char *next;
    while(*src != '\0')
    {
        next = match(src, subs);
        if(next != NULL)    break;
        src ++ ;
    }
    if(*src == '\0')    return 0;
    while(*src ++ = *next ++ ) ;
    return 1;
}

int main()
{
    char s[] = "ABCDEFGH";
    char subs[] = "CDE";
    char goal[] = "ABFGH";
    
    /*  del_1
    int ret = del_substr_1(s, subs);
    if(ret == 0)    printf("not found!\n");
    else printf("goal:%s\nget :%s\n", goal, s);
    */
    
    // del_2
    int ret = del_substr_2(s, subs);
    if(ret == 0)    printf("not found!\n");
    else printf("goal:%s\nget :%s\n", goal, s);
    
    return 0;
}
