#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//ջ���
//ջ���ռ��ù�
//�ݹ����пؼ�·������������������ʱ��ջ���
//Stack overflow
int main()
{
	printf("hello\n");
	main();
	return 0;
}

//�ݹ�Ҫ������������ҪԽ��Խ�ӽ�������
void print(int x)
{
	if (x > 9)
	{
		print(x/10);//�ظ�ִ�У�ֱ�������㣬��һ�κ���ִ���꣬����ִ�����ϴεĺ���...
	}
	printf("%d ",x%10);
}
int main()
{
	unsigned int x = 0;
	scanf("%d", &x);
	print(x);
	return 0;
}


//�ٵݹ鷵���ַ�������
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1+my_strlen(str+1);
	}
	return 0;
}
int main()
{
	char arr[] = "hello world";
	int len=my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

//�ڽ׳�
int Fac(int x)
{
	if (x >= 1)
	{
		return x * Fac(x - 1);
	}
}
int main()
{
	int x = 10;
	int l=Fac(x);
	printf("%d\n",l);
	return 0;
}

//��쳲���������
//1 1 2 3 5 8 13 21 34 55...
int Fib(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	for(int i=1;i<x-1;i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int x = Fib(5);
	printf("%d\n", x);
	return 0;
}

//�ܺ�ŵ��
void hanoi(int num, char sou, char tar, char aux) {
    //ͳ���ƶ�����
    static int i = 1;
    //���Բ���������� 1 ������ֱ�Ӵ���ʼ���ƶ���Ŀ����
    if (num == 1) {
        printf("��%d��:�� %c �ƶ��� %c\n", i, sou, tar);
        i++;
    }
    else {
        //�ݹ���� hanoi() �������� num-1 ��Բ�̴���ʼ���ƶ�����������
        hanoi(num - 1, sou, aux, tar);
        //����ʼ����ʣ������һ����Բ���ƶ���Ŀ������
        printf("��%d��:�� %c �ƶ��� %c\n", i, sou, tar);
        i++;
        //�ݹ���� hanoi() ���������������ϵ� num-1 Բ���ƶ���Ŀ������
        hanoi(num - 1, aux, tar, sou);
    }
}
int main()
{
    //���ƶ� 3 ��Բ��Ϊ������ʼ����Ŀ�������������ֱ��� A��B��C ��ʾ
    hanoi(3, 'A', 'B', 'C');
    return 0;
}


//��������̨��