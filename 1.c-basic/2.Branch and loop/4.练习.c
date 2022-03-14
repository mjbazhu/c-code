#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef unsigned int u_int;
typedef unsigned char u_char;

//①n的阶乘
int main()
{
	u_int x = 0;
	u_int z = 1;
	printf("请输入一个整数");
	scanf("%d",&x);//4个字节，100超出
	for (int i = 1; i < x+1; i++)
	{
		z =  z * i;
	}
	printf("%d\n", z);
	return 0;
}

//②1-10的阶乘的和
int main()
{
	int i, j;
	int z=1,sum=0;
	for (i=1;i<=3;i++)
	{
		z = 1;
		for (j = 1; j <= i; j++)
		{
			z = z * j;
		}
		sum = sum + z;
	}
	printf("%d\n",sum);
	return 0;
}

//简化
int main()
{
	int i, j;
	int z = 1, sum = 0;
	for (i = 1; i <= 4; i++)
	{
		z = z * i;
		sum = sum + z;
	}
	printf("%d\n", sum);
	return 0;
}