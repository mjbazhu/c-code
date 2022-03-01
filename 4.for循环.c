#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//1.for循环内不建议改变循环变量
//2.建议前闭后开
//3.可以省略for中的语句，但是不能随便省略
//一个等号，赋值语句，赋值0，为假，循环不执行
int main()
{
	for (int i=0;i<11;i++)
	{
		printf("%d\n",i);
	}
	return 0;
}
