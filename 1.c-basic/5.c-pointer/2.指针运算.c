#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ָ��-ָ��
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char ch[] = "hello";
	int len = my_strlen(ch);
	printf("%d\n", len);
	return 0;
}

//ָ���ϵ����
//ͨ��ʹ������ʽ��
//��
int main()
{
	char arr[5];
	char* p;
	for (p = &arr[5]; p > &arr[0];)
	{
		*--p = 0;
	}
	return 0;
}
//��
int main()
{
	char arr[5];
	char* p;
	for (p=&arr[4];p>=&arr[0];--p)
	{
		*p = 0;
	}
	printf("%d\n", *p);
	return 0;
}

//ָ��-����
int main()
{
	int arr[10] = { 0 };
	int* p = arr;//arr,&arr[0]��ͬ�����Բ���&����
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p+i));
	}
	printf("\n\n");
	for (i = 0; i < 10; i++)
	{
		arr[i]=i;
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}