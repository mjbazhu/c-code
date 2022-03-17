#include "contact.h"
//初始化
void InitContact(Contact* ps)
{
	ps->data = malloc(DEFAULT_SZ * sizeof(PeoInfo));
	ps->capcity = DEFAULT_SZ;
	ps->size = 0;
}
//检查是否需要扩容
void CheckCapcity(Contact* ps)
{
	if (ps->size == ps->capcity)
	{
		struct PeoInfo* pstr =(PeoInfo*) realloc(ps->data,(ps->capcity+2)*sizeof(PeoInfo));
		if (pstr != NULL)
		{
			ps ->data = pstr;
			ps->capcity += 2;
			printf("扩容成功\n");
		}
		else
			printf("扩容失败\n");
	}
}
//添加联系人
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
	printf("请输入住址:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
}
//显示联系人
void ShowContact(Contact* ps)
{
	int i = 0;
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("%-20s\t%-4s\t%-4s\t%-12s\t%-30s\t\n", "姓名", "年龄", "性别", "电话", "住址");
	for (i = 0; i < ps->size; i++)
	{
		printf("%-20s\t%-4d\t%-4s\t%-12s\t%-30s\t\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].sele,
			ps->data[i].addr);
	}
}
//查找是否有该联系人
int FindByContact(Contact* ps,char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
			return i;
	}
	return -1;
}
//删除联系人
void DelContact(Contact* ps)
{
	char name[MAX_NAME];
	int j = 0;
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("请输入要删除的人的姓名:>");
	scanf("%s", name);
	int pos = FindByContact(ps, name);
	if (-1 == pos)
		printf("该联系人不存在\n");
	else
	{
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
//查找联系人
void SearchContact(Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的人的姓名:>");
	scanf("%s", name);
	int pos = FindByContact(ps, name);
	if (-1 == pos)
		printf("该联系人不存在\n");
	else
	{
		printf("%-20s\t%-4s\t%-4s\t%-12s\t%-30s\t\n", "姓名", "年龄", "性别", "电话", "住址");
		printf("%-20s\t%-4d\t%-4s\t%-12s\t%-30s\t\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].sele,
			ps->data[pos].addr);
	}
}
//修改联系人
void ModifyContact(Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改的人的姓名:>");
	scanf("%s", name);
	int pos = FindByContact(ps, name);
	if (-1 == pos)
		printf("该联系人不存在\n");
	else
	{
		printf("请输入姓名:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[pos].sele);
		printf("请输入住址:>");
		scanf("%s", ps->data[pos].addr);
	}
}
//按姓名排序
int cmp_by_age(const void* e1,const void* e2)
{
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;
}
//排序联系人
void SortContact(Contact* ps)
{
	qsort(ps->data, ps->size, sizeof(PeoInfo), cmp_by_age);
	printf("排序成功\n");
	ShowContact(ps);
}