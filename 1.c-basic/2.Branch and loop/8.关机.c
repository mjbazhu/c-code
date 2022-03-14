#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int reg[20] = { 0 };
	while (1)
	{
		system("shutdown");
		printf("电脑即将关机，请输入：hi，结束关机->");
		scanf("%s",&reg);
		if (strcmp(reg, "hi") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
