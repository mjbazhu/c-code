#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


//&取地址
//*解引
//.结构体变量
//->结构体指针

//复杂对象 -> 结构体
//创建结构体类型
struct Person
{
	char name[20];
	int age;
};
//.结构体变量
int main()
{
	//创建结构体变量
	struct Person x = {"我是你爹",10};
	x.age = 100;//修改值
	printf("%d\n", x.age);
	return 0;
}
//-> 结构体指针
int main()
{
	//创建结构体变量
	struct Person x = { "name",10 };
	//x.name[100] = "hello";//不能改变数组
	strcpy(x.name,"hello");//通过调用
	struct Person* px = &x;
	printf("%s\n", x.name);
	//printf("%s\n", px->name);
	return 0;
}