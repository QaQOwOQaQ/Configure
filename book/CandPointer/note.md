(参考博客)[https://github.com/Y-puyu/reading_note/tree/main/Pointers%20On%20C]

### 1.宏函数与自定义函数
宏函数与自定义函数是对立的，宏函数优点就是自定义函数的缺点，自定义函数的缺点就是宏函数的优点。
宏函数的优点：1·执行效率高	2·节省空间
宏函数的缺点：1·编译时间长	2·不安全，没有语法检查

因为宏函数在编译时直接展开，所以不像自定义函数一样需要进行函数调用，因此宏函数运行时没有通过函数名找到函数的入口地址，保存返回地址，为形参分配空间，实参分配给形参，形参入栈等操作。因此步骤少，不需要在栈上分配额外空间。
但因此宏函数需要在编译时替换，因此编译时间长。
外，宏函数也没有语法检查，不安全。

### 2.extern And static 
``` 1.c
#include <stdio.h>

//static int num = 100; // 1.static修饰全局变量，改变变量的作用域，只能在本文件中被调用，采用这种声明，编译1.c和2.c就会报错。
int num = 100;  // 声明并初始化一个变量，会分配内存
void f();       // 声明一个函数

int main()
{
	f();
	return 0;
}
```

``` 2.c
#include <stdio.h>

// 仅声明变量num，但不初始化，否则就会为其分配内存
// extern表示该变量在别处定义并初始化
extern int num;

//static void f()    // 2.static修饰函数，改变函数的作用域，只能在本文件中被调用 
void f()
{
	printf("num = %d\n", num);
}
```

``` excute
gcc 1.c 2.c -o main
./main
// 编译多个文件时，要保证只有一个main函数
```

``` 3.c
nclude <stdio.h>

void Add()
{

	static int x = 0; // 3.static修饰局部变量，叫静态变量（存放在静态数据区），改变变量的生命周期，直到程序结束释放
	//int x = 0;
	x ++ ;
	printf("%d\n", x);
}

int main()
{
	int i;
	for(i = 0; i < 3; i ++ )
		Add();
	return 0;
}
```


### 3.const
const 修饰普通变量<=>const修饰只读变量，不能通过变量本身修改变量的值，可以通过其他方式(指针)修改

``` 
#include <stdio.h>

int main()
{
	const int a = 100;
	int *p = (int *)&a;
	*p ++ ;
	printf("%d\n", a);
	return 0;
}
```

运行上面的程序之后可以发现a的值仍然被修改了，所以说这也就说明了一个常见的误解，认为const修饰的就是常量，实际上并不是

const修饰指针，
