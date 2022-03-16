#define _CRT_SECURE_NO_WARNINGS 1
//#define MAX 1000
#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_SELE 12
#define MAX_ADDR 20

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//ö��ѡ��
enum Opints
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char sele[MAX_SELE];
	char addr[MAX_ADDR];
}PeoInfo;
//ͨѶ¼����
typedef struct Contact
{
	 PeoInfo* data;//�����Ϣ
	int size;//��ŵ�ǰ����
	int capcity;//��ǰͨѶ¼���������
}Contact;

//��������
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);
void SortContact2(struct Contact* ps);