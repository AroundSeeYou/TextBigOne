// chengji.c.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"



int main(void)
{
	struct
	{


		char name[5];
		int num;
		int sco1;
		int sco2;
		int sco3;
	}student[5];//定义一个结构体
	int p;
	float ave;
	for (p = 0; p < 5; p++)
	{
		printf("请输入第%d个学生的姓名：学号：三门课的成绩：\n", p + 1);
		scanf_s("%s %d %d %d %d", student[p].name, &student[p].num, &student[p].sco1, &student[p].sco2, &student[p].sco3);
	}
	printf("五名同学的信息如下：\n");
	for (p = 0; p < 5; p++)
	{
		ave = (student[p].sco1 + student[p].sco2 + student[p].sco3) / 3;//计算平均分数
		printf("姓名：%3s 学号：%3d 成绩：%3d %3d %3d 平均分：%3f\n", student[p].name, student[p].num, student[p].sco1, student[p].sco2, student[p].sco3, student[p]);
	}
	return 0;
}

