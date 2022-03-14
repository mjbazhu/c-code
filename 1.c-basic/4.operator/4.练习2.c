#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//求一个数存到计算机中含1的个数

//① 传入无符号位
int is_one_count(unsigned int x)
{
	int count = 0;
	while (x)
	{
		if (x % 2 == 1)
		{
			count++;
		}
		x = x / 2;
	}
	return count;
}

//②通过补码按位与求1的个数
int is_one_count(int x)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((x >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = is_one_count(a);
	printf("count=%d\n", count);
	return 0;
}

//③最简单
//13
//1101 n
//1100 n-1
//1100 n //n & (n - 1)
//1011 n-1
//1000 n //n & (n - 1)
//0111 n-1
//0000 n //n & (n - 1)
//n= n & (n - 1)的次数就是一的个数


int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("count=%d\n", count);
	return 0;
}