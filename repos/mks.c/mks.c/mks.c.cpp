// mks.c.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int main()
{
	int a[10], i, max, min, p_max = 0, p_min = 0;
	for (i = 0; i; scanf_s("%d", &a[i]));
		max = a[0];
		min = a[0];
		for (i = 1; i;{
			if (a[i]>max)
			{
				max = a[i];
					p_max = i + 1;
			}
	if (a[i]<min)
	{
		min = a[i];
			p_min = i + 1;
	}
			}printf("No.%d is the max number %d\n", p_max, max);
			printf("No.%d is the min number %d\n", p_min, min);
}
