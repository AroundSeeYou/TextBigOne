// dodkjfsdifj.c.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"



#include<stdio.h>
int main(void)
{
	struct
	{


		char name[5];
		int num;
		int sco1;
		int sco2;
		int sco3;
	} student[5];
	int p,ave;
	for (p = 0; p < 5; p++)
	{
		printf("请输入第%d个学生的姓名：学号：三门课的成绩：\n", p + 1);
		scanf_s("%s %d %d %d %d", student[p].name, &student[p].num, &student[p].sco1, &student[p].sco2, &student[p].sco3);
	}
	printf("五名同学的信息如下：\n");
	for (p = 0; p < 5; p++)
	{
		ave = (student[p].sco1 + student[p].sco2 + student[p].sco3) / 3;
		printf("姓名：%s 学号：%d 成绩：%d %d %d 平均分：%d\n", student[p].name, student[p].num, student[p].sco1, student[p].sco2, student[p].sco3, student[p]);
	}
	return 0;
}

