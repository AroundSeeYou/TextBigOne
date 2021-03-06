#include <iostream>
#include"pch.h"
#include <stdio.h>
#include <malloc.h>



#define MaxSize 80
typedef char ElemType;
typedef struct
{
	ElemType data[MaxSize];
	int length;
}sqList;

void CreateList(sqList * &L, ElemType a[], int n)
{
	int i;
	L = (sqList *)malloc(sizeof(sqList));
	for (i = 0; i < n; i++)
		L->data[i] = a[i];
	L->length = n;
}

using namespace std;
//(6)查找第i个元素
bool GetElem(sqList *L, int i, ElemType &e)
{
	if (i<1 || i>L->length) return false;
	e = L->data[i - 1];
	return true;
}
//（7）查找顺序表中有没有元素e
int LocateList(sqList *L, ElemType e)
{
	int i;
	for (i = 0; i < L->length; i++)
		if (L->data[i] == e)
			return i + 1;
	return -1;
}

int main()
{
	sqList *seq;
	ElemType arr[MaxSize];
	int n;
	printf("请输入元素的个数：");
	scanf_s("%d", &n);
	fflush(stdin);
	int i;
	printf("请依次输入%d个元素：",n);
	
	for (i = 0; i < n; i++) {
		scanf_s("%c", &arr[i]);
	}
	//fflush(stdin);
	CreateList(seq,arr, n);
	//fflush(stdin);
	for (i = 0; i <seq->length; i++)
	{
		printf("%c",seq->data[i]);
		printf(" ");
	}

	
}
