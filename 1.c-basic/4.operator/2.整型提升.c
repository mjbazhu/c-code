#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//整型提升
//unsigned 直接补0
//signed 补符号位

//①
int main()
{
	char a = 3;
	//0000 0000 0000 0000 0000 0000 0000 0011 整数类型存储的bit位
	//0000 0011 char类型截断从右向左截取8位二进制位，实际上a的二进制位

	char b = 127;
	//0000 0000 0000 0000 0000 0000 0111 1111
	//0111 1111 实际上b的二进制位

	char c = a + b;
	//a+b
	//整型提升，通过判断符号位的符号补齐32位二进制
	//0000 0000 0000 0000 0000 0000 0000 0011 a
	//0000 0000 0000 0000 0000 0000 0111 1111 b
	//0000 0000 0000 0000 0000 0000 1000 0010 a+b

	//c
	//1000 0010
	//整型提升
	//1111 1111 1111 1111 1111 1111 1000 0010 补码
	//1111 1111 1111 1111 1111 1111 1000 0001 反码
	//1000 0000 0000 0000 0000 0000 0111 1110 原码
	printf("%d\n", c);
	return 0;
}

//②
int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("%d\n", a);
	if (b == 0xb600)
		printf("%d\n", b);
	if (c == 0xb6000000)
		printf("%d\n", c);
	return 0;
}

//③
int main()
{
	char a = 1;
	printf("%u\n", sizeof(a));
	printf("%u\n", sizeof(+a));
	printf("%u\n", sizeof(!a));
	return 0;
}

//算术转换

//操作符优先级

int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	return 0;
}