#include<iostream>
#include"stdafx.h"
#include"stdlib.h"
#include"stdio.h"
#include"string.h"
using namespace std;

void create();
void print();
int length();
void build(int n);

	typedef struct STU
	{
		int sid;
		char name[10];
		int marks;
		struct STU*next;
    };

	STU st1[3];
	STU*ptr,*head;

	int _tmain(int argc, char*argv[])
	{
		printf("Hello,My first list\n");
		create();
		print();
		int len = length();
		printf("the length is %d\n",len);

		getchar();

		return 0;
	}
	
void create()
{
	ptr=(STU*)
	malloc(sizeof(STU));
	st1[0].sid = 1;
	strcpy_s(st1[0].name, "john");
	st1[0].next = &st1[1];
	
	head = &st1[0];
	
	st1[1].sid = 2;
	st1[1].marks = 80;
	strcpy_s(st1[1].name, "Peter");
	st1[1].next = &st1[2];

	st1[2].sid = 3;
	st1[2].marks = 37;
	strcpy_s(st1[1].name, "Jack");
	st1[1].next = NULL;

}

void print()
{
	printf("The students are\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d %s %d\n", st1[i].sid, st1[i].name, st1[i].marks);
	}
}

int length()
{
	STU *p = head;
	int n = 0;
	while(p!= NULL);
	{
		p = p->next;
		n++;
	}
	return(n);
}
void build(int n)
{
	STU list,p,r;
	head = NULL;
	int a;
	for (int i = 1; i <= n; i++)
	{
		P =(STU) malloc(sizeof(STU));
		P->sid = scanf("%d");
		p->LINK = NULL;
		if (list== NULL)
			list = p;
		else
			r ->link = p;
		r = p;
	}
	return (list);
}


