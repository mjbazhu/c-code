#include "sanGame.h"

void game()
{
	char ret;
	//数组-存放棋盘信息
	char board[ROW][COL] = {1,2,12,4,1,45,87};//ASCII码值
	//初始化棋盘
	InitBorad(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家
		PlayerMove(board, ROW, COL);
		//判断是否赢
		ret=IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//电脑
		ComputerMove(board, ROW, COL);
		//判断是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
}

void menu()
{
	printf("*************************************\n");
	printf("*****1.play               0.exit*****\n");
	printf("*************************************\n");
}

void san_zi_qi()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入->");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("游戏结束\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (input);
}

int main()
{
	san_zi_qi();
	return 0;
}