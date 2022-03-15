#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>


//左移字符
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		int tem = *left;
		*left = *right;
		*right = tem;
		left++;
		right--;
	}
}
//三步法，逆序字符串
void left_move(char* arr,int k)
{
	assert(arr);
	int len = (int)strlen(arr);
	assert(k <= len);
	reverse(arr,arr+k-1);
	reverse(arr+k,arr+len-1);
	reverse(arr,arr+len-1);
}
int is_left_move(char* s1, char* s2)
{
	int len = (int)strlen(s1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_move(s1, 1);
		int ret=strcmp(s2, s1);
		if (ret==0)
			return 1;
	}
	return 0;
}
int is_left_move(char* s1, char* s2)
{
	int len = (int)strlen(s1);
	int len2 = (int)strlen(s2);
	if (len != len2)
		return 0;
	//strcat(s1,s1);//在一个字符串后追加一个字符串,导致是被修改
	strncat(s1, s1, 6);

	char* ret=strstr(s1, s2);//判断s1中是否有s2，并返回字符
	if (ret == NULL)
		return 0;
	else
		return 1;
}
//判断一个字符串是否是另一个字符串左移的结果
int main()
{
	char s1[30] = "abcdef";
	char s2[] = "cdefab";
	int tem = is_left_move(s1,s2);
	if (tem == 1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
 
int main()
{
	char arr[] = "abcdef";
	int k = 6;
	left_move(arr,k);
	printf("%s\n", arr);
	return 0;
}