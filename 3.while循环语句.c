#inclue <stdio.h>

//continue本次循环后面语句不执行
int main()
{
	int i = 0;
	while (i<6)
	{
		i++;
		if (i == 4)
			continue;
		printf("%d\n", i);
		
	}
	return 0;
}
//EOF输入ctrl+z，end of file文件结束标志
//输入函数会向函数缓存区存储数据，以\n结尾
//可以通过while ((ch = getchar())!= ‘\n’)消除缓存区的内容
//空语句可以输入;结束
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
//输入函数会将输入的值缓存到输入缓存区，以\n结束
//可以通过while((ch=getchar())!='\n')清空输入缓存区
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;//通过此方式清空输入缓存区
	}
	printf("请确认y/n");
	ret = getchar();
	if (ret == 'y')
		printf("点击确认");
	else
		printf("未点击确认");
	return 0;
}
