#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

typedef struct {
	char name[20];
	int age;

}Stu;
typedef struct {
	Stu* s;
	char arr[20];

}T;

int main()
{
	Stu s1 = { "hello",20 };
	T t1 = { &s1,"hehe" };
	printf("%s %s %d %s", s1.name, t1.arr, s1.age, t1.s->name);
	return 0;
}
//´«²ÎÑ¹Õ»²Ù×÷