#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>


//����������һ�������۰�����㷨,˳�����
int main()
{
	int k = 4;//������
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ����±������:%d\n",mid);
			break;
		}
	}
	if(left>right)
		printf("δ�ҵ�");
	return 0;
}

//����ʾ�ַ�
int main()
{
	char arr1[] = "welcome here !!!!!";
	char arr2[] = "##################";
	int left = 0;
	int right = strlen(arr1)-1;
	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		Sleep(200);
		system("cls");//����
		printf("%s\n", arr2);
	}
	
	return 0;
}

//��������
int main()
{
	int x[20] = {0};
	int i = 0;
	
	while (i < 3)
	{
		printf("����������");
		scanf("%s", &x);
		if (strcmp(x,"123456")==0)//�⺯�����ж��ַ����Ƿ����
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
			printf("��½ʧ��\n");
		i++;
	}
	if (i == 3)
		printf("�������Σ�������ס");
	return 0;
}