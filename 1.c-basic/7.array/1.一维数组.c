#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>

//��ð������
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	int flag;
	for (i=0;i<sz-1;i++)
	{
		flag = 1;
		int j = 0;
		for(j=0;j<sz-1-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				flag = 0;
			}
		}
		if (flag==1)
		{
			break;
		}
	}
}

int main()
{
	//clock_t start, finish;
	//double  duration;
	//start = clock();
	int x = 0;
	int arr[] = { 0,1,2,3,7,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (x = 0; x < sz; x++)
		printf("%d ", arr[x]);
	//finish = clock();
	//duration = (double)(finish - start) / CLOCKS_PER_SEC;
	//printf("%lf seconds\n", duration);
	return 0;
}

//��arr�����׵�ַ
//*arr [0]ָ���±�������ַ


//&arr���������ַ
//sizeof(arr);���鳤�ȣ���ռ�ֽڣ�

//���ഫ��arr������Ԫ�ص�ַ