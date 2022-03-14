#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//栈溢出
//栈区空间用光
//递归所有控件路径，函数将导致运行时堆栈溢出
//Stack overflow
int main()
{
	printf("hello\n");
	main();
	return 0;
}

//递归要有条件，并且要越来越接近该条件
void print(int x)
{
	if (x > 9)
	{
		print(x/10);//重复执行，直到不满足，上一次函数执行完，接着执行上上次的函数...
	}
	printf("%d ",x%10);
}
int main()
{
	unsigned int x = 0;
	scanf("%d", &x);
	print(x);
	return 0;
}


//①递归返回字符串长度
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1+my_strlen(str+1);
	}
	return 0;
}
int main()
{
	char arr[] = "hello world";
	int len=my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

//②阶乘
int Fac(int x)
{
	if (x >= 1)
	{
		return x * Fac(x - 1);
	}
}
int main()
{
	int x = 10;
	int l=Fac(x);
	printf("%d\n",l);
	return 0;
}

//③斐波那契数列
//1 1 2 3 5 8 13 21 34 55...
int Fib(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	for(int i=1;i<x-1;i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int x = Fib(5);
	printf("%d\n", x);
	return 0;
}

//④汉诺塔
void hanoi(int num, char sou, char tar, char aux) {
    //统计移动次数
    static int i = 1;
    //如果圆盘数量仅有 1 个，则直接从起始柱移动到目标柱
    if (num == 1) {
        printf("第%d次:从 %c 移动至 %c\n", i, sou, tar);
        i++;
    }
    else {
        //递归调用 hanoi() 函数，将 num-1 个圆盘从起始柱移动到辅助柱上
        hanoi(num - 1, sou, aux, tar);
        //将起始柱上剩余的最后一个大圆盘移动到目标柱上
        printf("第%d次:从 %c 移动至 %c\n", i, sou, tar);
        i++;
        //递归调用 hanoi() 函数，将辅助柱上的 num-1 圆盘移动到目标柱上
        hanoi(num - 1, aux, tar, sou);
    }
}
int main()
{
    //以移动 3 个圆盘为例，起始柱、目标柱、辅助柱分别用 A、B、C 表示
    hanoi(3, 'A', 'B', 'C');
    return 0;
}


//⑤青蛙跳台阶