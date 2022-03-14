#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//①定义
struct Stu {
	char c;
	char b;
	int a;
};

//②匿名创建
struct {
	char m;
	char n;
	int i;
}S;

//③创建时创建全局变量
struct S{
	char x;
	int j;
}s1,s2,s3;//全局变量
struct S s1;//全局变量

//④
struct T{
	int data;
	//struct T t1;//不能这样使用，递归导致内存溢出
	//子引用，一般使用指针
	struct T* t1;
};
//⑤
typedef struct Node {//Node 一般不省略，否则指针不合适
	char t;
	struct Node* n;
}Node;
int main()
{

	return 0;
}