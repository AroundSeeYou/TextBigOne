// gdg.c.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


struct student
{
	int num;
	char name[30];
	float sco[3];
	float sum, ave;
}stu[5];

int main()
{
	int i, j;
	void print(struct student stu[]);
	printf("请输入学生的学号  姓名  三门课的成绩\n");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d%s", &stu[i].num, &stu[i].name);
		stu[i].sum = 0;
		for (j = 0; j < 3; j++)
		{
			scanf_s("%f", &stu[i].sco[j]);
			stu[i].sum += stu[i].sco[j];

		}
		stu[i].ave = stu[i].sum / 3.0;

	}
	print(stu);
}
void print(struct student stu[])
{
	int i, j;
	printf("平均分是：\n");
	for (i = 0; i < 5; i++) {
		printf("%3f\n", stu[i].ave);
	}
}