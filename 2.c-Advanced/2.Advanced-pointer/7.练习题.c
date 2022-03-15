#define _CRT_SECURE_NO_WARNINGS 1
#define LINE 10
#include <stdio.h>
#include <math.h>

//水仙花数
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int sum = 0;
		int tem = i;
		while (tem /= 10)
		{
			n++;
		}
		tem = i;
		while (tem)
		{
			sum += (int)pow(tem % 10, n);
			tem /= 10;
		}
		if (i == sum && i > 99)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}

//打印矩形
int main()
{
	int i = 0;
	int line = 20;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	int tem = (i-1) * 2 + 1;
	for (i = 0; i < line-1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < tem - (i+1)* 2; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//20元喝汽水，两个空瓶换一瓶水
int main()
{
	int money = 20;
	int empty = 0;
	int total = 0;
	//①
	/*
	if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;
	*/
	//②
	empty = money;
	total = empty;
	while (empty>=2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("total=%d\n", total);
	return 0;
}

//杨辉三角
int main()
{
	int arr[LINE][LINE] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < LINE; i++)
	{
		for (j = 0; j <LINE; j++)
		{
			
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < LINE; i++)
	{
		for (j = 0; j < LINE-1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}