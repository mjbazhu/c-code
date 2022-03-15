#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//①普通实现
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}

//②联合体实现
int check_sys()
{
	union 
	{
		char c;
		int i;
	}u;//使用一次可以使用匿名
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = check_sys();
	if (1 == ret)
		printf("小端");
	else
		printf("大端");
	return 0;
}