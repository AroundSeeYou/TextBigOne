// Co.cpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>


typedef struct sq {
	int data[100];
	int length;
}sqList;


typedef int ElemType;
#define Maxsize 80

void CreatList(sqList *&L, ElemType a[], int n) {
	int i;
	L = (sqList *)malloc(sizeof(sqList));
	for (i = 0; i < n; i++)
		L->data[i] = a[i];
		L->length= n;
}
//4
int listEmpty(sqList *L)
{
	return(L->length);
}
//6
bool getEmpty(sqList *L, int i, ElemType &e)
{

	if (i<1 || i>L->length)
		return false;
	e = L->data[i - 1];
	return true;

}
//7
int locateElem(sqList *&L, ElemType e)
{
	int i = 0;
	while (i < L->length && L->data[i] != e)
		i++;
	if (i >= L->length)
		return 0;
	else
		return i + 1;

}
//8
bool listInert(sqList *&L, int i, ElemType e)
{
	int j;
	if (i<1 || i>L->length + 1)
		return false;
	i--;
	for (j = L->length; j > i; j--)
		L->data[j] = L->data[j - 1];
	L->data[i] = e;
	L->length++;
	return true;
}

int main()
{
	sqList *seq;
	int n,i;
	ElemType arr[Maxsize];
	printf("请输入元素个数：");
	scanf_s("%d", &n);
	printf("请输入%d个数：",n);
	//fflush(stdin);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	CreatList(seq, arr, n);//依次输出L中各元素值
	for (i = 0; i < seq->length; i++) {
		printf("%d,", seq->data[i]);
	}
	printf("\n");
	printf("长度为：%d\n", listEmpty(seq));//输出顺序表的长度；
	ElemType  e=5;
	/*if (getEmpty(seq,n, e))
	{
		printf("第%d个元素存在，是%d！",1,e);
		printf("\n");
	}
	else
		printf("该数组中无该元素！");*/
	if (locateElem(seq, e))
	{
		printf("该元素存在是%d个！\n", locateElem(seq, e));
	}
	else
		printf("该元素不存在！\n");
	if (listInert(seq, 2, 1654865)) {
		
		for (i = 0; i < seq->length; i++) {
			printf("%d,", seq->data[i]);
		}
	}
	else 
		printf("错误!");
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
