#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

typedef struct {
	char name[20];
	char sex[20];
	int age;
}Num;

void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base,int sz,int width,int (*cmp)(void* e1,void* e2))
{
	int i = 0;
	for (i = 0; i < sz;i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (1 + j)*width) > 0)
			{
				Swap((char*)base+j*width, (char*)base + (1 + j) * width,width);
			}
		}
	}
}

int cmp_int(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_num_by_age(void* e1,void* e2)
{
	return ((Num*)e1)->age-((Num*)e2)->age;
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()
{
	Num n[3] = { {"张三","男",10},{"李四","女",50},{"王麻子","男",20}};
	int sz = sizeof(n) / sizeof(n[3]);
	bubble_sort(n,sz,sizeof(n[0]),cmp_num_by_age);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s:%d\n", n[i].name,n[i].age);
	}
}

int main()
{
	test2();
	return 0;
}