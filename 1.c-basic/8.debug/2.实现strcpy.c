#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//①6分
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

//②7分
void my_strcpy(char* arr1, char* arr2)
{
	while (*arr1++ = *arr2++)
	{
		;
	}
}

#include <assert.h>
//8分
void my_strcpy(char* arr1, char* arr2)
{
	assert(arr1 != NULL);//断言
	assert(arr2 != NULL);//断言
	while (*arr1++ = *arr2++)
	{
		;
	}
}

//③9分
void my_strcpy(char* arr1, const char* arr2)
{
	assert(arr1 != NULL);//断言
	assert(arr2 != NULL);//断言

	while (*arr1++ = *arr2++)
	{
		;
	}
}

//
char* my_strcpy(char* arr1, const char* arr2)
{
	char* tem = arr1;
	assert(arr1 != NULL);//断言
	assert(arr2 != NULL);//断言
	//将arr2指向的字符串拷贝到arr1所指向的空间中，包含'\0'
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
	//const int* p = &num; const在该位置表示*p不能被修改
	int* const p = &num;
	//const const p= &num; const在该位置表示p不能被修改
	//*p = 20;
	//p = 10;

	return 0;
}