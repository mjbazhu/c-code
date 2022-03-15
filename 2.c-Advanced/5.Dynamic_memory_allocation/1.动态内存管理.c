#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//①malloc
	//int* p = (int*)malloc(10*sizeof(int));

	//②calloc
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		//使用
	}
	//使用完此命令释放空间
	//③free()
	free(p);
	p=NULL;//释放完还能访问，所以赋以空指针


	//④realloc()
	//追加新的动态内存
	//分为两种情况
	//1：足够，返回原地址
	//2：不够，新空间，返回新地址

	return 0;
}