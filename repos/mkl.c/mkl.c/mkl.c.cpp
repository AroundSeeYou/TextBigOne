// mkl.c.cpp: 定义控制台应用程序的入口点。

#include "stdafx.h"



struct name {
	char first_name[32];
	char last_name[32];
};
struct student {
	struct name student_name;
	double grade[3];
	double average;
};
#define CSIZE 4
void p14_5(void)
{
	struct student students[CSIZE];

	// d
	for (int i = 0; i < CSIZE; i++)
	{
		printf("Enter the student's first name: ");
		//(students[i].student_name.first_name, 32);

		printf("Enter the student's last name: ");
		//s_gets(students[i].student_name.last_name, 32);

		printf("Enter three grades of this student: ");
		for (int j = 0; j < 3; j++)
		{
			scanf_s("%lf", &students[i].grade[j]);
		}
		getchar(); // 换行符还在缓冲区里
	}

	// e
	for (int i = 0; i < CSIZE; i++)
	{
		double total_grade = 0.0;
		for (int j = 0; j < 3; j++)
		{
			total_grade += students[i].grade[j];
		}
		students[i].average = total_grade / 3;
	}

	// f
	for (int i = 0; i < CSIZE; i++)
	{
		printf("Student: %s, %s, grade: %.2lf, %.2lf, %.2lf, average: %.2lf\n", students[i].student_name.first_name, students[i].student_name.last_name,
			students[i].grade[0], students[i].grade[1], students[i].grade[2], students[i].average);
	}

	// g
	double total_grades = 0.0;
	for (int i = 0; i < CSIZE; i++)
	{
		total_grades += students[i].average;
	}
	printf("All students' average grade is %.2lf\n", total_grades / CSIZE);

	return;
}
