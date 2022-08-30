#include <stdio.h>
#include <string.h>

#define SIZE 107

int check1(const char *buffer)
{
    int front = 0, rear = strlen(buffer) - 1;
    
    while(front < rear)
    {
        if(buffer[front] != buffer[rear])   return 0;
        front ++ , rear -- ;
    }
    return 1;
}

int check2(const char *buffer)
{
    char *front = buffer;
    // rear的三种求法：
    // 1 好的写法
    char *rear = buffer + strlen(buffer) - 1;
    
    // 2 笨蛋写法
    // while(*rear != '\0')    *rear ++ ; 
    // *rear -- ;
    
    // 3 小trip
    // char *rear = buffer;
    // while(*rear ++ != '\0') ;
    // *rear -- ;  *rear -- ;
    // 这里之所以rear--两次，是因此当rear=‘\0’时，由于while需要判断，所以仍然执行了一次rear++
    
    while(front < rear)
    {
        if(*front != *rear) return 0;
        *front ++ , *rear -- ;
    }
    return 1;
}

void trip(const char *buffer)
{
    char *front = buffer, *rear = buffer + strlen(buffer) - 1;
    // 在上面的check函数中，如果while循环是这种形式，就会出错：
    while(front ++ < rear -- ) // 一种落入陷阱的花里胡哨的写法
        printf("%c---%c\n", *front, *rear);
    // 我们忽略了，在while判断结束之时front，rear的值就已经改变，因此在while循环体内部的front和rear可能不是我们想要的
}

int main() 
{
    char buffer[SIZE] = "21312";
    if(check2(buffer))  printf("%s is 回文!\n", buffer);
    else                printf("%s is not 回文!\n", buffer);
    
    trip(buffer);
    
    
    return 0;
}
