#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//①判断三个数的大小
int main()
{
	int a, b, c;
	printf("请输入三个数");
	scanf("%d%d%d",&a,&b,&c);
	if (b>a)
	{
		int m = a;
		a = b;
		b = m;
	}
	if (c > a)
	{
		int m = a;
		a = c;
		c = m;
	}
	if (c > b)
	{
		int m = b;
		b = c;
		c = m;
	}
	printf("%d,%d,%d",a,b,c);
	return 0;
}

//②辗转相除法,求最大公约数
int main()
{
	int x = 24, y = 18;
	int s = 0;
	while (s=x%y)
	{
		x = y;
		y = s;
	}
	printf("%d\n",y);
	return 0;
}

//③闰年
//能被4整除却不能被100整除或能被400整除的年份就是闰年
int main()
{
	int i;
	int count=0;
	for (i=1000;i<=2000;i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			printf("%d,", i);
			count++;
		}
	}
	printf("\n总共有：%d", count);
	return 0;
}

//④素数
int main()
{
	int i, j,count=0;
	for (i=101;i<=200;i+=2)//除了偶数
	{
		for (j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d  ",i);
		}
	}
	printf("\n%d\n", count);
	return 0;
}

//⑤1-100含9的数量
int main()
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n",count);
	return 0;
}

//⑥求1/1-1/2+1/3-1/4+...+1/99-1/100的值
//第一种
int main()
{
	int i=0;
	double sum=0.0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			sum += -1.0 / i;
		if (i % 2 == 1)
		{
			sum += 1.0 / i;
		}
	}
	printf("%lf\n", sum);
	return 0;
}
//第二种
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}

//⑦九九乘法表
int main()
{
	int i = 0;
	int j = 1;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}