#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//��malloc
	//int* p = (int*)malloc(10*sizeof(int));

	//��calloc
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		//ʹ��
	}
	//ʹ����������ͷſռ�
	//��free()
	free(p);
	p=NULL;//�ͷ��껹�ܷ��ʣ����Ը��Կ�ָ��


	//��realloc()
	//׷���µĶ�̬�ڴ�
	//��Ϊ�������
	//1���㹻������ԭ��ַ
	//2���������¿ռ䣬�����µ�ַ

	return 0;
}