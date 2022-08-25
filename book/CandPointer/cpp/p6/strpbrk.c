#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define string char *

string Strpbrk(string src, string brkset) {
    while(*src ++ ) {
        const string t = brkset;
        while(*t ++ ) {
            if(*t == *src)  
                return src;
        }
    }
    return NULL;
}

int main()
{
    string src = "Hello, world!";
    string brkset = ",! ";
    string p = Strpbrk(src, brkset);
    if(p == NULL)   printf("not found!\n");
    else    printf("%s\n", p);
 
    
    
    return 0;
}
