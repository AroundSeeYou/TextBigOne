#include <iostream>
#include <stdio.h>
#include"malloc.h"
#include"pch.h"
#include <algorithm>

typedef int ElemType;
#define Maxsize 100
typedef struct sq {
	int data[100];
	int length;
}sqList;

void movel(sqList *&L) {
	int i = 0, j = L->length - 1;
	
		while (i < j&&L->data[i] % 2 == 0)
			j--;
		while (i < j&&L->data[j] % 2 == 1)
			i++;
		if (i < j)
				swap(L->data[i],L->data[j]);
}

int main()
{
	sqList *seq;
	int n;
	ElemType arr[Maxsize];
	printf("请输入元素个数：");
	scanf_s("%d", &n);
	printf("2.请输入%d个数：", n);
	int i;
	fflush(stdin);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	movel(seq);
	for (i = 0; i < n; i++) {
		printf("%d", seq->data[i]);
	}
}
