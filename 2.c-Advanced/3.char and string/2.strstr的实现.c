#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

//KMP 算法
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1=NULL;
	char* s2=NULL;
	char* cur = (char*)p1;
	if (*p2 == '\0')
		return (char*)p1;
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1 && *s2 && (*s1 == *s2))
			s1++,s2++;
		if (*s2 == '\0')
			return cur;
		cur++;
	}
	return NULL;
}

//追加
int main()
{
	char arr1[] = "ashjsdhjcdefghi";
	char arr2[] = "jcf";
	char* s=my_strstr(arr1, arr2);
	printf("%s\n", s);
	return 0;
}

//error
int main()
{
	FILE* pFILE = fopen("text.js", "r");
	if (pFILE == NULL)
		printf("Error:%s\n", strerror(errno));
	else
		printf("成功");
}
