#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//¢Ùmemcpy

//¢Úmemmove()
void* my_memmove(void* dest, const void* src, size_t count)
{
	void* cur = dest;
	
	if (dest < src)
	{
		while (count--)
		{
			*((char*)dest) = *((char*)src);
			++(char*)src;
			++(char*)dest;
		}
	}
	else 
	{
		while (count--) 
		{
			*((char*)dest+count) = *(char*)src+count;
		}
	}
	return cur;
}
int main()
{
	char ch[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(ch+5,ch+2,5);
	//printf("%s\n", c);
 	return 0;
}