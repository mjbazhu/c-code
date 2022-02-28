#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//条件判断
int main()
{
	int m = 1;
	int n = 2;
	if (1==m)//常数写到左边
	{
		if (1 == n)
			printf("%d\n", n);
	}
	else
		printf("失败");
	return 0;
}

//奇数
int main()
{
	int x;
	for (x=1;x<=100;x++)
	{
		if (x % 2 == 1)
			printf("%d 是奇数\n", x);
	}
	return 0;
}

//switch循环语句
int main()
{
	int day = 0;
	scanf("%d",&day);
	switch (day)
	{
	case 1:printf("星期一\n"); return;
	case 2:printf("星期二\n"); return;
	case 3:printf("星期三\n"); return;
	case 4:printf("星期四\n"); return;
	case 5:printf("星期五\n"); return;
	case 6:printf("星期六\n"); return;
	case 7:printf("星期日\n"); return;
	}
	return 0;
}

//default使用
int main()
{
	int day = 0;
	scanf("%d",&day);
	switch (day)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日");
			break;
		default:
			printf("输入不正确");
			break;
	}
	return 0;
}
//switch循环语句可以嵌套使用
