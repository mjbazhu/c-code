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
	int ret = rand()%100+1;//0-100�����
	//������
	while (1)
	{
		printf("������0-100�����->");
		scanf("%d",&x);
		if (x>ret)
			printf("����\n");
		else if (x < ret)
			printf("С��\n");
		else
			printf("��ȷ\n");
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
		printf("������->");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳�����\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);
	return 0;
}