#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int m = 1;
	int n = 2;
	if (1==m)//����д�����
	{
		if (n == 1)
			printf("%d\n", n);
	}
	else
		printf("ʧ��");
	return 0;
}

//����
int main()
{
	int x;
	for (x=1;x<=100;x++)
	{
		if (x % 2 == 1)
			printf("%d ������\n", x);
	}
	return 0;
}

//����
int main()
{
	int day = 0;
	scanf("%d",&day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n"); 
		break;
	case 4:
		printf("������\n"); 
		break;
	case 5:
		printf("������\n"); 
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	}
	return 0;
}

////defaultʹ��
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
			printf("������");
			break;
		default:
			printf("���벻��ȷ");
			break;
	}
	return 0;
}