#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//���
//Ѱ�������г���һ�ε�����
int main()
{
	int arr[] = { 1,2,3,4,5,6,1,2,3,4,5,6,4,5,2,7,8,9,7,9,4,5,2 };
	int ret=0;
	int i=0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("����һ�ε�����%d\n", ret);
	return 0;
}