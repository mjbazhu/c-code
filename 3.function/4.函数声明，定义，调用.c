#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "binary_search.h"

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int x = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);//将下标传入函数中
	                   //首个元素的地址
	int m=binary_search(arr, x,sz);
	if (m == -1)
		printf("没有该数");
	else
		printf("下标是%d\n", m);
	return 0;
}