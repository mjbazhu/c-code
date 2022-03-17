#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0x11223344;
	//字节为单位
	//此数据低位是44，存入的话44第一位，因为是小端存储
	//小端：低存到低，高存到高
	//大端：相反
	return 0;
}

//char a=128；127+1//-128
//char a=-128
//结果相同