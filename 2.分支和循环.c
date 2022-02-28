#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int m = 1;
	int n = 2;
	if (1==m)//常数写到左边
	{
		if (1 == n)
			printf("%d\n", n);
	}
	else
		printf("失败");
	return 0;
}
