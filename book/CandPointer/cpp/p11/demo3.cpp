#include <iostream>
using namespace std;

typedef struct
{
	char name[9];
}stu;
int   main()
{
	int   cnt = 0;
	stu   *pstu = NULL;
	int   *p = NULL;
	int   stulen = sizeof(stu);
	pstu = (stu *)malloc(sizeof(stu)*14);
	p = (int)pstu-4;    //将stu *类型强制转换为 int类型，获取pstu第前四个字节地址。
	cnt = (*p-5)/stulen;    //求取分配的stu类型的数目
	printf(" addr: %d \n stulen:%d \n cnt:%d\n size:%d\n size():%d \r\n",p, stulen, cnt, *p-5, malloc_usable_size(pstu));
	free(pstu);   //需要主动释放内存
	pstu = NULL;    //防止出现野指针
}
