// 学籍.c.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#define SERIALLEN 20
#define COURSENUM 3


typedef struct
{
	char course[SERIALLEN];
	float score;
}_courseInfo;

typedef struct _stuinfo
{
	char serial[SERIALLEN];
	char name[SERIALLEN];
	char sex[SERIALLEN];
	_courseInfo courseInfo[COURSENUM];
	struct _stuinfo *next;
}stuinfo;
int main(int argc, char **argv)
{
	stuinfo *head = NULL, *ptr = NULL, *s = NULL;
	char str[SERIALLEN];
	int cycle = 1;
	int i = 0;
	memset(str, 0, SERIALLEN);
	printf("建立学生信息：\n");
	head = (stuinfo *)calloc(1, sizeof(stuinfo));
	if (!head)
	{
		perror("申请空间失败，没有足够内存。");
		return -1;
	}
	ptr = head;
	while (cycle)
	{
		printf("输入学生学号(0退出):");
		scanf_s("%s", str);
		if (strcmp(str, "0")) //如果学号为0，则退出链表的创建
		{
			s = (stuinfo *)calloc(1, sizeof(stuinfo));
			if (!ptr)
			{
				perror("申请空间失败，没有足够内存。");
				return -1;
			}
			memset(s->serial, 0, SERIALLEN);
			strcpy(s->serial, str);
			memset(s->name, 0, SERIALLEN);
			puts("输入姓名:");
			scanf_s("%s", s->name);
			memset(s->sex, 0, SERIALLEN);
			puts("输入性别:");
			scanf_s("%s", s->sex);
			for (i = 0; i<COURSENUM; i++)
			{
				memset(s->courseInfo[i].course, 0, SERIALLEN);
				puts("输入课程名称:");
				scanf_s("%s", s->courseInfo[i].course);
				s->courseInfo[i].score = 0.0f;
				puts("输入课程分数:");
				scanf_s("%f", &(s->courseInfo[i].score));
			}
			ptr->next = s;
			ptr = s;
		}
		else cycle = 0;
	}

	ptr->next = NULL;
	ptr = head;
	head = head->next;
	free(ptr);
	//head=linkSort(head);
	ptr = head;
	printf("学号\t姓名\t性别");
	for (i = 0; i<COURSENUM; i++)
		printf("\t课程[%d]", i);
	printf("\n");
	while (ptr != NULL)
	{
		printf("%s\t%s\t%s", ptr->serial, ptr->name, ptr->sex);
		for (i = 0; i<COURSENUM; i++)
			printf("\t%s[%.2f]", ptr->courseInfo[i].course, ptr->courseInfo[i].score);
		printf("\n");
		ptr = ptr->next;
	}
	return 0;
}
