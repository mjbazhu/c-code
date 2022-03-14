#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//输出一个数的奇偶数位
void print(int m)
{
	int i = 0;
	printf("奇数位：");
	for (i = 30; i >= 0; i -= 2)
	{

		printf("%d ",(m>>i)&1);
	}
	printf("\n");
	printf("偶数位：");
	for (i = 31; i >= 1; i -= 2)
	{

		printf("%d ", (m >> i) & 1);
	}
}
int main()
{
	int x;
	scanf("%d", &x);
	print(x);
	return 0;
}


//打印一个数组，使用指针
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pa = arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", *(pa + i));
	}
	return 0;
}