#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("*******************************\n");
	printf("*****1.play         0.exit*****\n");
	printf("*******************************\n");
}

void game()
{
	int x, i=0;
	int ret = rand()%100+1;//0-100随机数
	//猜数字
	while (1)
	{
		printf("请输入0-100随机数->");
		scanf("%d",&x);
		if (x>ret)
			printf("大了\n");
		else if (x < ret)
			printf("小了\n");
		else
			printf("正确\n");
			break;
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入->");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出程序\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	} while (input);
	return 0;
}