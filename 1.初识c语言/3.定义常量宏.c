#include <stdio.h>

//①标志符常量
#define R1 10
//int main()
//{
//	int m = R1;
//	printf(" % d\n", m);
//	return 0;
//}
//②宏的实现
//和js中的箭头函数类似，简化函数
#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int m = R1;
//	int n = MAX(100,20);
//	printf(" % d\n", n);
//	return 0;
//}