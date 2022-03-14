#include <stdio.h>

1.typedef
typedef unsigned char u_char;
typedef unsigned int u_int;//重新定义
int main()
{
	u_int m;
	m = 1455;
	printf("%d\n", m);
	return 0;
}

//2.static
//①静态关键字,修饰局部变量，生命周期延长
//②修饰全局变量，让静态全局变量在自己源文件使用
void test()
{
	static int a = 0;
	a++;
	printf("%d\n",a);
}
static fm = 123;

int main()
{
	int m = 0;
	while (m < 5)
	{
		test();
		m++;
	}
	extern int g_fm;//声明外部的符号
	printf("%d\n", g_fm);
}
//③修饰函数
//改变函数的连接属性，没有外部连接属性
//外 -> 内