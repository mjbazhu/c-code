#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	const char* p = "hello";
	//*p = 'a';
	//Segmentation fault 
	return 0;
}

int main()
{
	char str[] = "abcde";
	char str2[] = "abcde";
	const char* ps = "abcde";
	const char* pc = "abcde";

	if (pc == ps)
	{
		printf("hi");
	}
	else
	{
		printf("hello");
	}
	return 0;
}



int main()
{
	int a = 0;
	int c = 10;
	int d = 30;
	char b = 'z';
	int* arr[3]={&a,&c,&d};


	return 0;
}