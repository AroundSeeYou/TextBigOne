// 12.c.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a[10], i,j, *p, max, min;//定义数组a，a中含有10个元素，同时定义指针变量p

	for (i = 0; i < 10; i++) {//输入a中的10个整形数
		printf("请输入第%d个数", i+1);//提示让用户输入
		scanf_s("%d",&a[i]);
	}
	p = a;//把数组a的首地址存放在指针p中
	max = min = a[0];
	for (i = 1; i < 10; i++)//找出这10个数中的最大值和最小值
	{
		if (max < *(p + i))
			max = *(p + i);
	}
	printf("最大值是%d\n", i);
	for(j=0;j<10;j++)
	{
		if (min >*(p + j))
			min = *(p + j);
	}
	printf("最小值是%d\n", j);
	/*printf("%d,%d", max, min);*/
	a[0] = max;//最大值与第一个输入的数交换
	a[9] = min;//最小值与最后一个输入的数交换
	for (i = 0; i < 10; i++) {
		printf("%d\n", *(p + i));//输出交换后的这组数
	}
    return 0;
}

