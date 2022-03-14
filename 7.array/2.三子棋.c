#include "sanGame.h"

void game()
{
	char ret;
	//����-���������Ϣ
	char board[ROW][COL] = {1,2,12,4,1,45,87};//ASCII��ֵ
	//��ʼ������
	InitBorad(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//���
		PlayerMove(board, ROW, COL);
		//�ж��Ƿ�Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//����
		ComputerMove(board, ROW, COL);
		//�ж��Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("������->");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("��Ϸ����\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);
}

int main()
{
	san_zi_qi();
	return 0;
}