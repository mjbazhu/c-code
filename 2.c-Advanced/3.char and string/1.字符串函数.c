#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//¢Ùstrlen

//¢ÚstrcpyÊµÏÖ
void my_strcpy(char* str1, char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	int len1 = (int)strlen(str1);
	int len2 = (int)strlen(str2);
	assert(len2 <= len1);
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = *str2;
}
char* my_strcpy(char* str1,const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	int len1 = (int)strlen(str1);
	int len2 = (int)strlen(str2);
	assert(len2 <= len1);
	char* ret = str1;
	while (*str1++ = *str2++)
	{
		;
	}
	return ret;
}
int main()
{
	char str[] = "abcdefghiopq";
	char str2[] = "hello world";
	char* s = my_strcpy(str, str2);
	printf("%s\n", s);
	return 0;
}

//¢Ûstrcat
char* my_strcat(char*str,const char*str2)
{
	char* ret = str;
	assert(str);
	assert(str2);
	while (*str)
		str++;
	while (*str++ = *str2++)
	{
		;
	}
	return ret;
}
int main()
{
	char str[20] = "abcdef\0xxxxxxxxxxxx";
	char str2[] = "he";
	char*s=my_strcat(str,str2);
	printf("%s\n", s);
	return 0;
}
