#define _CRT_SECURE_NO_WARNINGS 1

#define DEFAULT_SZ 3//通讯录初始化人数
#define MAX_NAME 20
#define MAX_SEX 4
#define MAX_SELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum
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
typedef struct Contact
{
	PeoInfo* data;
	int size;
	int capcity;
}Contact;

void InitContact(Contact* ps);
void AddContact(Contact* ps);
void ShowContact(Contact* ps);
void DelContact(Contact* ps);
void SearchContact(Contact* ps);
void ModifyContact(Contact* ps);
void SortContact(Contact* ps);