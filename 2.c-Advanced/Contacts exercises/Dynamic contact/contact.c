#include "contact.h"
//��ʼ��
void InitContact(Contact* ps)
{
	ps->data = malloc(DEFAULT_SZ * sizeof(PeoInfo));
	ps->capcity = DEFAULT_SZ;
	ps->size = 0;
}
//����Ƿ���Ҫ����
void CheckCapcity(Contact* ps)
{
	if (ps->size == ps->capcity)
	{
		struct PeoInfo* pstr =(PeoInfo*) realloc(ps->data,(ps->capcity+2)*sizeof(PeoInfo));
		if (pstr != NULL)
		{
			ps ->data = pstr;
			ps->capcity += 2;
			printf("���ݳɹ�\n");
		}
		else
			printf("����ʧ��\n");
	}
}
//�����ϵ��
void AddContact(Contact* ps)
{
	CheckCapcity(ps);
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].sele);
	printf("������סַ:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
}
//��ʾ��ϵ��
void ShowContact(Contact* ps)
{
	int i = 0;
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("%-20s\t%-4s\t%-4s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "סַ");
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
//�����Ƿ��и���ϵ��
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
//ɾ����ϵ��
void DelContact(Contact* ps)
{
	char name[MAX_NAME];
	int j = 0;
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByContact(ps, name);
	if (-1 == pos)
		printf("����ϵ�˲�����\n");
	else
	{
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
//������ϵ��
void SearchContact(Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ��˵�����:>");
	scanf("%s", name);
	int pos = FindByContact(ps, name);
	if (-1 == pos)
		printf("����ϵ�˲�����\n");
	else
	{
		printf("%-20s\t%-4s\t%-4s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%-20s\t%-4d\t%-4s\t%-12s\t%-30s\t\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].sele,
			ps->data[pos].addr);
	}
}
//�޸���ϵ��
void ModifyContact(Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ��˵�����:>");
	scanf("%s", name);
	int pos = FindByContact(ps, name);
	if (-1 == pos)
		printf("����ϵ�˲�����\n");
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].sele);
		printf("������סַ:>");
		scanf("%s", ps->data[pos].addr);
	}
}
//����������
int cmp_by_age(const void* e1,const void* e2)
{
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;
}
//������ϵ��
void SortContact(Contact* ps)
{
	qsort(ps->data, ps->size, sizeof(PeoInfo), cmp_by_age);
	printf("����ɹ�\n");
	ShowContact(ps);
}