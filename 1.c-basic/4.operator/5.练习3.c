#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//���һ��������ż��λ
void print(int m)
{
	int i = 0;
	printf("����λ��");
	for (i = 30; i >= 0; i -= 2)
	{

		printf("%d ",(m>>i)&1);
	}
	printf("\n");
	printf("ż��λ��");
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


//��ӡһ�����飬ʹ��ָ��
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