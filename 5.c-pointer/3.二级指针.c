#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����ָ��
int main()
{
	int a = 10;
	int * pa = &a;
	int* * paa = &pa;
	//*pa,int����
	//*paa��int*����
	**paa = 100;//ָ��*pa->a�ĵ�ַ
	printf("%d\n", *pa);
	return 0;
}

//ָ������  ���ָ��
//��������  �������
//�ַ�����  ����ַ�
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };

}