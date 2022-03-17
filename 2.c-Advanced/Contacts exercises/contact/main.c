#include "contact.h"

void menu()
{
	printf("***********************************************\n");
	printf("***   1.Add                        2.Del    ***\n");
	printf("***   3.Search                     4.modify ***\n");
	printf("***   5.show                       6.sort   ***\n");
	printf("***                0.exit                   ***\n");
	printf("***********************************************\n");
}

int main()
{
	int input = 0;
	struct Contact con;
	//��ʼ��
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}
