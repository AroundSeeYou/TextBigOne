
#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;
#define MaxSize 100
typedef char ElemType;
typedef struct {
	ElemType data[MaxSize];
	int top;
}Sqstack;
//初始栈
void InitStack(Sqstack *&S)
{
	S = (Sqstack *)malloc(sizeof(Sqstack));
	S->top = -1;
}
//销毁栈

void DestorStack(Sqstack *&S) {
	free(S);
}

//入栈
bool Push(Sqstack *&S, ElemType e)
{
	if (S->top == MaxSize - 1) {
		return false;
	}
	S->top++;
	S->data[S->top] = e;
	return true;
}
//出栈
bool Pop(Sqstack *&S, ElemType &e)
{
	if (S->top == -1)
		return false;
	e = S->data[S->top];
	S->top--;
	return true;
}
bool StackEmpty(Sqstack *s)
{
	return(s->top == -1);
}
//取栈顶元素
bool GetTop(Sqstack *s, ElemType &e)
{
	if (s->top == -1)

		return false;

	e = s->data[s->top];
	return true;
}
int main()
{
	Sqstack *S;
	ElemType arr[MaxSize];
	int i, n;
	fflush(stdin);
	printf("请输入元素个数n：");
	scanf("%d", &n);
	fflush(stdin);
	for (i = 0; i < n; i++)
	{
		scanf("%c", &arr[i]);
	}
	InitStack(S);
	if (StackEmpty(S))
		printf("空！\n");
	else
		printf("不空！\n");
	// DestorStack(S);
	for (i = 0; i < n; i++) {
		Push(S, arr[i]);

	}

	if (StackEmpty(S))
		printf("空！\n");
	else
		printf("不空！\n");
	ElemType x, e;
	for (i = 0; i < n; i++)
	{
		if (Pop(S, e))
			printf("%c ", e);
	}
	if (StackEmpty(S))
		printf("空！\n");
	else
		printf("不空！\n");
	/*if(GetTop(S,x))
		printf("%c",x);*/

	DestorStack(S);

	return 0;
}

