#include "contact.h"

void menu()
{
	printf("*****************************************************\n");
	printf("***   1.ADD                             2.DEL     ***\n");
	printf("***   3.SEARCH                          4.MODIFY  ***\n");
	printf("***   5.SHOW                            6.SORT    ***\n");
	printf("***                   0.EXIT                      ***\n");
	printf("*****************************************************\n");
}

int main()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ:>");
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
			printf("ÍË³ö\n");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó\n");
			break;
		}
	} while (input);
	return 0;
}