#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��6��
void my_strcpy(char* arr1,char* arr2)
{
	while (*arr2 != '\0')
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	*arr1 = *arr2;
}

//��7��
void my_strcpy(char* arr1, char* arr2)
{
	while (*arr1++ = *arr2++)
	{
		;
	}
}

#include <assert.h>
//8��
void my_strcpy(char* arr1, char* arr2)
{
	assert(arr1 != NULL);//����
	assert(arr2 != NULL);//����
	while (*arr1++ = *arr2++)
	{
		;
	}
}

//��9��
void my_strcpy(char* arr1, const char* arr2)
{
	assert(arr1 != NULL);//����
	assert(arr2 != NULL);//����

	while (*arr1++ = *arr2++)
	{
		;
	}
}

//
char* my_strcpy(char* arr1, const char* arr2)
{
	char* tem = arr1;
	assert(arr1 != NULL);//����
	assert(arr2 != NULL);//����
	//��arr2ָ����ַ���������arr1��ָ��Ŀռ��У�����'\0'
	while (*arr1++ = *arr2++)
	{
		;
	}
	return tem;
}

int main()
{
	char arr1[] = "##############";
	char arr2[] = "hello";
	my_strcpy(arr1,arr2);
	printf("%s\n", arr1);
	return 0;
}


int main()
{
	const int num = 0;
	//const int* p = &num; const�ڸ�λ�ñ�ʾ*p���ܱ��޸�
	int* const p = &num;
	//const const p= &num; const�ڸ�λ�ñ�ʾp���ܱ��޸�
	//*p = 20;
	//p = 10;

	return 0;
}