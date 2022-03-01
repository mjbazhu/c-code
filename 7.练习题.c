#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

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
