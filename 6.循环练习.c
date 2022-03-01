#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdilb.h>

typedef unsigned int u_int;
typedef unsigned char u_char;

//①n的阶乘
int main()
{
	u_int x = 0;
	u_int z = 1;
	printf("请输入一个整数");
	scanf("%d",&x);//4个字节，100超出
	for (int i = 1; i < x+1; i++)
	{
		z =  z * i;
	}
	printf("%d\n", z);
	return 0;
}

//②1-10的阶乘的和
int main()
{
	int i, j;
	int z=1,sum=0;
	for (i=1;i<=3;i++)
	{
		z = 1;
		for (j = 1; j <= i; j++)
		{
			z = z * j;
		}
		sum = sum + z;
	}
	printf("%d\n",sum);
	return 0;
}

//简化
int main()
{
	int i, j;
	int z = 1, sum = 0;
	for (i = 1; i <= 4; i++)
	{
		z = z * i;
		sum = sum + z;
	}
	printf("%d\n", sum);
	return 0;
}

③在数组找一个数，折半查找算法,顺序查找
int main()
{
	int k = 4;//找数字
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了下标或索引:%d\n",mid);
			break;
		}
	}
	if(left>right)
		printf("未找到");
	return 0;
}

//④显示字符
int main()
{
	char arr1[] = "welcome here !!!!!";
	char arr2[] = "##################";
	int left = 0;
	int right = strlen(arr1)-1;
	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		Sleep(200);
		system（"cls"）;//清屏
		printf("%s\n", arr2);
	}
	
	return 0;
}

//⑤输密码
int main()
{
	int x[20] = {0};
	int i = 0;
	
	while (i < 3)
	{
		printf("请输入密码");
		scanf("%s", &x);
		if (strcmp(x,"123456")==0)//库函数，判断字符串是否相等
		{
			printf("登陆成功\n");
			break;
		}
		else
			printf("登陆失败\n");
		i++;
	}
	if (i == 3)
		printf("错误三次，密码锁住");
	return 0;
}
