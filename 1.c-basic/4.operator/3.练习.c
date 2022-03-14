#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//跟sizeof比较会转换为无符号类型,-1转化为unsigned int 大于sizeof(i)
int i;
int main()
{
	i--;
	if (i > sizeof(i))
	{
		printf(">");
	}
	else
		printf("<");
	return 0;
}
//表达式是通过优先级进行运算