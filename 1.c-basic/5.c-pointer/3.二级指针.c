#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//二级指针
int main()
{
	int a = 10;
	int * pa = &a;
	int* * paa = &pa;
	//*pa,int类型
	//*paa，int*类型
	**paa = 100;//指向*pa->a的地址
	printf("%d\n", *pa);
	return 0;
}

//指针数组  存放指针
//整型数组  存放整形
//字符数组  存放字符
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };

}