#include <iostream>
#include <stdio.h>
#include"malloc.h"


typedef struct sq {
	int data[100];
	int length;
}sqList;


typedef char ElemType;
#define Maxsize 100

void CreatList(sqList *&L, ElemType a[], int n) {
	int i;
	L = (sqList *)malloc(sizeof(sqList));
	for (i = 0; i < n; i++)
		L->data[i] = a[i];
	L->length = n;
}
//4
int listEmpty(sqList *L)
{
	return(L->length);
}
//6
int listLength(sqList *L)
{
	return(L->length);
}

bool GetElem(sqList *L, int i, ElemType &e)
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
bool ListDelete(sqList *&L, int i, ElemType &e)
{
	int j;
	if (i<1 || i>L->length)
		return false;
	i--;
	e = L->data[i];
	for (j = i; j < L->length - 1; j++)
		L->data[j] = L->data[j + 1];
	L->length--;
	return true;
}

void DestroyList(sqList *L)
{
	if (L->data)
		free(L->data);
}
int main()
{
	sqList *seq;
	int n;
	ElemType arr[Maxsize];
	printf("请输入元素个数：");
	scanf("%d", &n);
	printf("2.请输入%d个数：", n);
	int i;
	fflush(stdin);
	for (i = 0; i < n; i++) {
		scanf("%c", &arr[i]);
	}

	CreatList(seq, arr, n);//依次输出L中各元素值
	printf("3.");
	for (i = 0; i < seq->length; i++) {
		printf("%c", seq->data[i]);
	}
	printf("\n");
	printf("4.长度为：%d\n", listLength(seq));//输出顺序表的长度；
	if (listEmpty(seq))
		printf("5.该数组不为空！\n");
	else
		printf("5.该数组为空！\n");
	if (GetElem(seq, 3, arr[3]))
		printf("6.第%d个元素是%c！", 3, arr[3]);
	printf("\n");

	if (locateElem(seq, 'a'))
	{
		printf("7.该元素存在是%d个！\n", locateElem(seq, 'a'));
	}
	else
		printf("7.该元素不存在！\n");

	if (listInert(seq, 4, 'f')) {
		printf("9.");
		for (i = 0; i < seq->length; i++) {
			printf("%c,", seq->data[i]);
		}
	}
	printf("\n"); printf("10.");
	if (ListDelete(seq, 3, arr[3]))
	{
		for (i = 0; i < seq->length; i++)
			printf("%c,", seq->data[i]);
	}

	DestroyList(seq);

}
