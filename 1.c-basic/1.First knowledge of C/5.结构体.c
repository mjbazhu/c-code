#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


//&ȡ��ַ
//*����
//.�ṹ�����
//->�ṹ��ָ��

//���Ӷ��� -> �ṹ��
//�����ṹ������
struct Person
{
	char name[20];
	int age;
};
//.�ṹ�����
int main()
{
	//�����ṹ�����
	struct Person x = {"�������",10};
	x.age = 100;//�޸�ֵ
	printf("%d\n", x.age);
	return 0;
}
//-> �ṹ��ָ��
int main()
{
	//�����ṹ�����
	struct Person x = { "name",10 };
	//x.name[100] = "hello";//���ܸı�����
	strcpy(x.name,"hello");//ͨ������
	struct Person* px = &x;
	printf("%s\n", x.name);
	//printf("%s\n", px->name);
	return 0;
}