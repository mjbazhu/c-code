#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//continue����ѭ��������䲻ִ��
int main()
{
	int i = 0;
	while (i<6)
	{
		i++;
		if (i == 4)
			continue;
		printf("%d\n", i);
		
	}
	return 0;
}

//	EOF����ctrl+z��end of file�ļ�������־
//	���뺯���������������洢���ݣ���\n��β
//	����ͨ��while ((ch = getchar())!= ��\n��)����������������
//  ������������;����
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}

//���뺯���Ὣ�����ֵ���浽���뻺��������\n����
//����ͨ��while((ch=getchar())!='\n')������뻺����
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("����������");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;//ͨ���˷�ʽ������뻺����
	}
	printf("��ȷ��y/n");
	ret = getchar();
	if (ret == 'y')
		printf("���ȷ��");
	else
		printf("δ���ȷ��");
	return 0;
}