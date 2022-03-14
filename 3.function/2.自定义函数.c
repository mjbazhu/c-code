#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>

//①判断大小
int get_max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int a, b;
	printf("请输入两个数->");
	scanf("%d%d",&a,&b);
	int ret = get_max(a,b);
	printf("%d\n",ret);
	return 0;
}

//②切换a，b的内容
//将a,b地址传入
void Swep(int* a,int* b)
{
	int m = 0;
	m = *a;
	*a = *b;
	*b = m;
}
int main()
{
	int a = 10;
	int b = 20;
	Swep(&a,&b);
	printf("%d  %d", a, b);
	return 0;
}

//③素数
int is_prime(int n)
{
	int x;
	for (x = 2; x < sqrt(n); x++)
	{
		if (n % x == 0)
			return 0;
	}
	if (x>sqrt(n))
		return 1;
}
int main()
{
	int m =101;
	int x=is_prime(m);
	if (x)
		printf("%d是素数\n",m);
	else 
		printf("%d不是素数\n",m);
	return 0;
}

//④二分法
                      //本身arr是一个指针
int binary_search(int arr[], int x,int sz)
{
	int left = 0;
	int right = sz-1;
	do
	{
		int mid = (left + right) / 2;
		if (arr[mid] < x)
		{
			left = mid + 1;
		}else if (arr[mid] > x)
		{
			right = mid - 1;
		} 
		else
		{
			return mid;
		}
	} while (left<=right);
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int x = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);//将下标传入函数中
	                   //首个元素的地址
	int m=binary_search(arr, x,sz);
	if (m == -1)
		printf("没有该数");
	else
		printf("下标是%d\n", m);
	return 0;
}