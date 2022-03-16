#include "contact.h"
//��ʼ��
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
//����Ƿ���Ҫ����
void CheckCapcity(Contact* ps)
{
	if (ps->size == ps->capcity)
	{
		PeoInfo* ptr = realloc(ps->data ,(ps->capcity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capcity += 2;
			printf("���ݳɹ�\n");
		}
		else
			printf("����ʧ��\n");
	}
}
//������ϵ��
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
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
}
//��ʾ��ϵ��
void ShowContact(Contact* ps)
{
	int i = 0;
	if (ps->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ�����˵�����\n");
	scanf("%s", name);
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			break;
		}
	}
	if (i == ps->size)
		printf("����ϵ�˲�����\n");
	else
	{
		for (j = i; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
			ps->size--;
		}
	}
}