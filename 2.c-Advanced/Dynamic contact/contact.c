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
			printf("���ݳɹ�\n");
		}
		else
			printf("���ݳɹ�\n");
	}
}

void AddContact(struct Contact* ps)
{
	//�������
	CheckCapcity(ps);
	//��������
	printf("���������֣�");
	scanf("%s", ps->data[ps->size].name);
	printf("���������䣺");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�");
	scanf("%s", ps->data[ps->size].sex );
	printf("������绰��");
	scanf("%s", ps->data[ps->size].sele);
	printf("�������ַ��");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;//ʹ��һ������浽����
	printf("��ӳɹ�\n");
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ�������֣�");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
		printf("Ҫɾ������ϵ�˲�����\n");
	else
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ����֣�");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
		printf("Ҫ���ҵ���ϵ�˲�����\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸ĵ��˵����֣�");
	scanf("%s", name);
	int pos=FindByName(ps, name);
	if (-1 == pos)
		printf("����ϵ�˲�����\n");
	else
	{
		printf("���������֣�");
		scanf("%s", ps->data[pos].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�");
		scanf("%s", ps->data[pos].sex);
		printf("������绰��");
		scanf("%s", ps->data[pos].sele);
		printf("�������ַ��");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}
//ð������
void SortContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
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
	printf("����ɹ�\n");
	ShowContact(ps);
}
//qsortʵ������
int cmp_con_by_age(const void* e1,const void* e2)
{
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}
void SortContact2(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	qsort(ps->data,ps->size,sizeof(ps->data[0]), cmp_con_by_age);
	printf("����ɹ�\n");
	ShowContact(ps);
}