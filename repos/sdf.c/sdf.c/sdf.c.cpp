// sdf.c.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
struct student
{
	char num[10];
	char name[8];
	int score[3];
	float ave;
} stu[5];
int main()
{
	int i, j, sum;
	FILE *fp;
	for (i = 0; i < 5; i++)
	{
		printf("\n请输入学生的成绩：%d:\n", i + 1);
		printf("NO.:");
		scanf_s("%s", stu[i].num);
		printf("请输入学生名字：");
		sum = 0;
		for (i = 0; j < 3; j++)
		{
			printf("成绩%d：", j + 1);
			scanf_s("%d", &stu[i].score[j]);
			sum += stu[i].score[j];

		}
		stu[i].ave = sum / 3.0;
	}
	fp = fopen("stud", "w");
	for (i = 0; i < 5; i++)
		if (fwrite(&stu[i], sizeof(struct student), 1, fp) != 1)
			printf("dijafnwoei\n");
	fclose(fp);
	fp = fopen("stud", "r");
	for (i = 0; i < 5; i++)
	{
		fread(&stu[i], sizeof(struct student), 1, fp);
		printf("\n%s,%s,%d,%d,%d,%6.2f\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].ave);
	}
    return 0;
}

