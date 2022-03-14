#define _CRT_SECURE_NO_WARNINGS 1
#include "sanGame.h"

//数组存放" "内容，初始化
void InitBorad(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for (i = 0; i < row; i++) 
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x=0, y=0;
	printf("玩家走:\n");
	while (1)
	{
		printf("请输入坐标 ->");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已下子\n");
			}	
		}
		else
		{
			printf("坐标错误\n");
		}
	}
	DisplayBoard(board, ROW, COL);
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("电脑走:\n");
	while (1)
	{
		//0-2随机数



		x = rand()%row;
		y = rand()%col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	DisplayBoard(board, ROW, COL);
}

//判断平局
int IsFull(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;

}

//判断谁赢了
char IsWin(char board[ROW][COL],int row,int col)
{
	int i=0;
	//行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] ==board[i][2] && board[i][1] !=' ')
				return board[i][1];
	}
	//列
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[ 1][i] != ' ')
			return board[1][i];
	 }
	//对角
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[0][2];
	//平局
	if (1 == IsFull(board, ROW, COL))
	{
		return 'q';
	}
	return 'c';
}