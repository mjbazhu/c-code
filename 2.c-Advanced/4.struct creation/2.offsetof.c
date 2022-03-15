#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>
struct C {
	char c;
	int i;
	double x;
};
int main()
{
	printf("%d\n", (int)offsetof(struct C, c));
	printf("%d\n", (int)offsetof(struct C, i));
	printf("%d\n", (int)offsetof(struct C, x));
	return 0;
}