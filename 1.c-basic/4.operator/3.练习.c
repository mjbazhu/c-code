#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��sizeof�Ƚϻ�ת��Ϊ�޷�������,-1ת��Ϊunsigned int ����sizeof(i)
int i;
int main()
{
	i--;
	if (i > sizeof(i))
	{
		printf(">");
	}
	else
		printf("<");
	return 0;
}
//���ʽ��ͨ�����ȼ���������