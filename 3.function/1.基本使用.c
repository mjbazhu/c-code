#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//①strcpy
//strcpy(str1,str2)
//会将字符串str2复制给字符串str1
//字符串结束标志\0，所以拷贝后\0后面的内容不会显示
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

//②memset(str,value,num)
//用num个value替换str的num个值
