#define _CRT_SECURE_NO_WARNINGS 1
#define COUNT 10

#include <stdio.h>
void init(int arr[COUNT], int count)
{
	int i=0, j=0;
	for (i = 0; i < count; i++)
	{
		arr[i] =i;
	}
}
void print(int arr[COUNT], int count)
{
	int i = 0;
	for (i = 0; i < count; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[COUNT], int count)
{
	int left = 0;
	int right = count - 1;
	while (right > left)
	{
		int tem = arr[right];
		arr[right] = arr[left];
		arr[left] = tem;
		right--;
		left++;
	}
}
int main()
{
	int arr[COUNT] = { 0 };

	init(arr,COUNT);
	print(arr, COUNT);
	reverse(arr, COUNT);
	print(arr, COUNT);
	return 0;
}