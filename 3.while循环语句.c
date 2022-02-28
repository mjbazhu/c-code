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
