#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//��strcpy
//strcpy(str1,str2)
�Ὣ�ַ���str2���Ƹ��ַ���str1
��Ϊ�ַ�����\0��β������\0Ҳ�Ḵ�ƹ�ȥ
�ַ���������־\0�����Կ�����\0��������ݲ�����ʾ
int main()
{
	char str1[] = "hello";
	char str2[20];
	char str3[40];
	strcpy(str2,str1);
	strcpy(str3,"hi,baby");
	printf("%s\n%s\n%s\n", str1, str2, str3);
	return 0;
}

//��memset(str,value,num)
//��num��value�滻str��num��ֵ