// 22.c.cpp: 定义控制台应用程序的入口点。

#include "stdafx.h"
void swap(int *x, int *y);//定义swap函数

int main()
{
	int a[10], i, max, min;//定义数组a[10],最大值和最小值
	int m, n;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);//输入啊【10】

	}
	max = min = a[0];
	for (i = 0; i<10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			m = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			n = i;
		}	
	}
	
	printf("交换后的数是："); swap(&a[m], &a[0]);
	swap(&a[n], &a[9]);
	for (i = 0; i < 10; i++)//输出交换后的数
	{
		
		printf("%d\n", a[i]);
	}
	printf("%d,%d",min,max);
    return 0;
}
void swap(int *x, int *y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	
}

