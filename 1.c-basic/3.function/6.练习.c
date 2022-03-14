#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��9*9�˷���
int main()
{
	int i,j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d", i, j, i * j);
		}
		printf("\n");
	}
	
	return 0;
}

//��

int my_strlen(char* str)//*ָ��
{
	int count  = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
//��һ�֣�whileѭ��
void reverse_string(char str[])
{
	int left = 0;
	int tem = 0;
	int right = my_strlen(str)-1;
	while (left < right)
	{
		tem = str[left];
		str[left] = str[right];
		str[right] = tem;
		left++;
		right--;
	}
}

//�ڶ��֣�
void reverse_string(char str[],int left,int right)
{
	if (left < right)
	{
		char tem= str[left];
		str[left] = str[right];
		str[right] = tem;
		left++;
		right--;
		reverse_string(str, left, right);
	}
}

int main()
{
	char str[] = "abcde";
	int left = 0;
	int right = my_strlen(str)-1;
	reverse_string(str,left,right);
	printf("%s", str);
	return 0;
}

//��һ���Ǹ�������ÿһ����ӵĺ�
int DigitNum(unsigned int num)
{
	if (num > 0)
	{
		return num % 10 + DigitNum(num / 10);
	}
	return 0;
}
int main()
{
	int ret = 0;
	int num = 0;
	scanf("%d", &num);
	ret=DigitNum(num);
	printf("%d\n", ret);
	return 0;
}

//��n��k�η�
double Pow(int n, int k)
{
	if (k < 0)
	{
		return (1.0 / (Pow(n, -k)));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
		return n * Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n,&k);
	double ret=Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}