#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����ͨʵ��
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}

//��������ʵ��
int check_sys()
{
	union 
	{
		char c;
		int i;
	}u;//ʹ��һ�ο���ʹ������
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = check_sys();
	if (1 == ret)
		printf("С��");
	else
		printf("���");
	return 0;
}