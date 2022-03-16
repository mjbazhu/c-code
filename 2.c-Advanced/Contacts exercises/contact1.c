#include "contact.h"
//初始化
void InitContact(Contact* ps)
{
	ps->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capcity = DEFAULT_SZ;
}
//检查是否需要扩容
void CheckCapcity(Contact* ps)
{
	if (ps->size == ps->capcity)
	{
		PeoInfo* ptr = realloc(ps->data ,(ps->capcity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capcity += 2;
			printf("扩容成功\n");
		}
		else
			printf("扩容失败\n");
	}
}
//增加联系人
void AddContact(Contact* ps)
{
	CheckCapcity(ps);
	printf("请输入姓名:>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->size].sele);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
}
//显示联系人
void ShowContact(Contact* ps)
{
	int i = 0;
	if (ps->size == 0)
		printf("通讯录为空\n");
	else
	{
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\t\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\t\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].sele,
				ps->data[i].addr);
		}
	}
}
//
void DelContact(Contact* ps)
{
	int i = 0;
	int j = 0;
	char name[MAX_NAME];
	printf("请输入要删除的人的名字\n");
	scanf("%s", name);
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			break;
		}
	}
	if (i == ps->size)
		printf("该联系人不存在\n");
	else
	{
		for (j = i; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
			ps->size--;
		}
	}
}