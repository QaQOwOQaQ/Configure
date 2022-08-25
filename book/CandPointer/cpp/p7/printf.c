#include <stdio.h>
#include <stdarg.h>

void print_integer(int x)
{
    printf("%d", x);
}

void print_float(double f)
{
    printf("%lf", f);
}

void _printf(char *format, ...) 
{
    va_list arg;
    char c;
    char *str;
    
    va_start(arg, format);
    while((c = *format ++ ) != '\0') // while判断之后,format的值就++了
    {
        if(c != '%') 
        {
            putchar(c);
            continue;
        }
        
        switch(*format != '\0' ? *format ++  : '\0') // 因此这里需要判断当前是不是'\0''
        {
            case 'd':
                print_integer(va_arg(arg, int));
                break;
            case 'f':
                print_float(va_arg(arg, double));
                break;
            case 'c':
                putchar(va_arg(arg, int));
                break;
            case 's':
                str = va_arg(arg, char *);
                while(*str != '\0')
                    putchar(*str ++ );
                break;
            default:
                puts("error!");
                break;
        }
    }
}

int main() 
{
    int i = 1;
    float p = 3.14;
    char ch = 'S';
    char *s = "Hello!";
    _printf("int: %d\n", i);
    _printf("float: %f\n", p);
    _printf("char: %c\n", ch);
    _printf("string: %s", s);
    
    return 0;
}
