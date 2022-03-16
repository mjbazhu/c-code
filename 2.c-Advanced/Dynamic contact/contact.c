#include "contact.h"

void InitContact(struct Contact* ps) 
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return ;
	}
	ps->size = 0;
	ps->capcity = DEFAULT_SZ;
}

void CheckCapcity(struct Contact* ps)
{
	if (ps->size == ps->capcity)
	{
		struct PeoInfo* ptr = realloc(ps->data, (ps->capcity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capcity += 2;
			printf("扩容成功\n");
		}
		else
			printf("扩容成功\n");
	}
}

void AddContact(struct Contact* ps)
{
	//检测容量
	CheckCapcity(ps);
	//增加数据
	printf("请输入名字：");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄：");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别：");
	scanf("%s", ps->data[ps->size].sex );
	printf("请输入电话：");
	scanf("%s", ps->data[ps->size].sele);
	printf("请输入地址：");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;//使下一次输入存到后面
	printf("添加成功\n");
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
		printf("通讯录为空\n");
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\t\n",
				ps->data[i].name, 
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].sele, 
				ps->data[i].addr);
		}
	}
}

static int FindByName(const struct Contact* ps,char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact*  ps)
{
	char name[MAX_NAME];
	printf("请输入要删除的名字：");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
		printf("要删除的联系人不存在\n");
	else
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的名字：");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
		printf("要查找的联系人不存在\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\t\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].sele,
			ps->data[pos].addr);
	}
}
//
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改的人的名字：");
	scanf("%s", name);
	int pos=FindByName(ps, name);
	if (-1 == pos)
		printf("该联系人不存在\n");
	else
	{
		printf("请输入名字：");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别：");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话：");
		scanf("%s", ps->data[pos].sele);
		printf("请输入地址：");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}
//冒泡排序
void SortContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	int i = 0;
	int j = 0;
	for (i = 0; i < ps->size; i++)
	{
		for (j = 0; j < ps->size - 1 - i; j++)
		{
			if (ps->data[j].age > ps->data[j + 1].age)
			{
				struct PeoInfo tem = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = tem;
			}
		}
	}
	printf("排序成功\n");
	ShowContact(ps);
}
//qsort实现排序
int cmp_con_by_age(const void* e1,const void* e2)
{
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}
void SortContact2(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	qsort(ps->data,ps->size,sizeof(ps->data[0]), cmp_con_by_age);
	printf("排序成功\n");
	ShowContact(ps);
}