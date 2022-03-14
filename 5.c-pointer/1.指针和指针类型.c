#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//指针类型的意义
//进行解引用是能够访问的空间的大小
//int* p；*p 4个字节
//char* p；*p 1个字节


//指针类型决定了指针的步长
//int* p；p+1 —>1步，4个字节
//char* p；p+1 ->1步，1个字节


//野指针要避免
//未初始化
//指针越界访问，数组

//指针指向的内存空间被释放
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();//从函数中出来就会被释放，此时指向野指针，已经释放
	return 0;
}

//指针变量初始化
//int* p=NULL;
//通过赋值NULL使其释放空间