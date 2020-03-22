// student.c.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"stdio.h"
#define ID 11

typedef struct_stu
{
	charvid[ID];
	int sco1, sco2, sco3;
}stu;
int main()
{
	int i;
	stu s[5];
	FILE *fp;
	float ave;
	printf("请输入5个学生的学号和3门课成绩：\n");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%s%d%d%d%d", s[i].id, &s[i].sco1, &s[i].sco2, &s[i].sco3);
	}
	if ((fp = fopen("stud", "w")) == NULL)
	{
		printf("文件打开失败\n");
		return;
	}
	for (i = 0; i < 5; i++)
	{
		ave = (s[i].sco1 + s[i].sco2 + s[i].sco3) / 3.0;
		fprintf(fp, "%s%d%d%d%.2f\n", s[i].id, s[i].sco21, s[i].sco2, s[i].sco3, ave);

	}
	fclose(fp);
    return 0;
}

