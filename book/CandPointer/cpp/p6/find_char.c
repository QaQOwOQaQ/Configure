#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int find_char1(char **strings, char value)
{
    char *string;
    
    while((string = *strings ++ ) != NULL)
    {
        while(*string != '\n')  
        {
            if(*string ++ == value) return 1;
        }
    }
    
    return 0;
}

int find_char2(char **strings, char value)
{
    assert(strings != NULL);
    
    while(*strings != NULL)
    {
        while(**strings != '\n')
        {
            if(*(*strings) ++  == value)    return 1;
        }
        *strings ++ ;
    }
    
    
    return 0;
}

int main() 
{
    char *names[4] = {
        "xujiayuan",
        "tepangpu",
        "xijinping",
        "xushuyu1"
    };
 	
	for(int i = 0; i < 4; i ++ )
	{
		printf("%s\n", *(names + i));
	}

 	printf("find 1 in strings is %d\n", find_char2(names, '1'));	

    return 0;
}
