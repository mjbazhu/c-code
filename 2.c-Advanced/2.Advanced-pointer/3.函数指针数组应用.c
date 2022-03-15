#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//函数指针数组-转移表
//计算器实现

int Add(int x,int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int Xor(int x, int y)
{
	return x ^ y;
}

void menu()
{
	printf("************************************\n");
	printf("***1.Add                    2.Sub***\n");
	printf("***3.Mul                    4.Div***\n");
	printf("***5.Xor                    0.exit**\n");
	printf("************************************\n");
}
int main()
{
	menu();
	int input = 0;
	printf("请选择->");
	scanf("%d", &input);
	int x = 0;
	int y = 0;
	int ret = 0;
	int (*pArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
	if (input >=1 && input <= 5)
	{
		printf("请输入两个数->");
		scanf("%d%d", &x, &y);
		ret = pArr[input](x, y);
		printf("%d\n", ret);
	}
	else if (input==0)
	{
		printf("退出\n");
	}
	else
	{
		printf("选择错误\n");
	}
	return 0;
//}


//回调函数
void Calc(int (*p)(int,int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个数->");
	scanf("%d%d", &x, &y);
	printf("%d\n", p(x, y));
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				Calc(Add);
				break;
			case 2:
				Calc(Sub);
				break;
			case 3:
				Calc(Mul);
				break;
			case 4:
				Calc(Div);
				break;
			case 5:
				Calc(Xor);
				break;
			default:
				printf("选择错误\n");
				break;
			case 0:
				printf("退出\n");
				break;
		}
	} while (input);
	return 0;
}