#include <stdio.h>

1.typedef
typedef unsigned char u_char;
typedef unsigned int u_int;//���¶���
int main()
{
	u_int m;
	m = 1455;
	printf("%d\n", m);
	return 0;
}

//2.static
//�پ�̬�ؼ���,���ξֲ����������������ӳ�
//������ȫ�ֱ������þ�̬ȫ�ֱ������Լ�Դ�ļ�ʹ��
void test()
{
	static int a = 0;
	a++;
	printf("%d\n",a);
}
static fm = 123;

int main()
{
	int m = 0;
	while (m < 5)
	{
		test();
		m++;
	}
	extern int g_fm;//�����ⲿ�ķ���
	printf("%d\n", g_fm);
}
//�����κ���
//�ı亯�����������ԣ�û���ⲿ��������
//�� -> ��