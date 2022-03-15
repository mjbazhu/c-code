#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void* 类型的指针 可以接受任意类型的指针
//void* 类型的指针 不能解引用操作
//void* 类型的指针 不能加减整数的操作

typedef struct {
	char name[10];
	int age;
	char sex;
	char namber;
}Stu;

int cmp_int(const void* e1 ,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((Stu*)e1)->age - ((Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((Stu*)e1)->name, ((Stu*)e2)->name);
}

void test1()
{
	//qsort
	//quick sort 快速排序
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()
{
	Stu s[3] = {{"张三",10},{"李四",20},{"王五",50}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

void test3()
{
	Stu s[3] = { {"张三",10},{"李四",20},{"王五",50} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}
