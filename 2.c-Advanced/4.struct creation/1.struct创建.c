#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ٶ���
struct Stu {
	char c;
	char b;
	int a;
};

//����������
struct {
	char m;
	char n;
	int i;
}S;

//�۴���ʱ����ȫ�ֱ���
struct S{
	char x;
	int j;
}s1,s2,s3;//ȫ�ֱ���
struct S s1;//ȫ�ֱ���

//��
struct T{
	int data;
	//struct T t1;//��������ʹ�ã��ݹ鵼���ڴ����
	//�����ã�һ��ʹ��ָ��
	struct T* t1;
};
//��
typedef struct Node {//Node һ�㲻ʡ�ԣ�����ָ�벻����
	char t;
	struct Node* n;
}Node;
int main()
{

	return 0;
}