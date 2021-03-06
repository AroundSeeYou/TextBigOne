// 二叉树.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>


typedef char ElemType;
#define Maxsize 100
typedef struct node
{
	ElemType data;
	struct node *lchild;
	struct node *rchild;
}BTnode;

void CreateBTree(BTnode *&b, char *str)
{
	BTnode *St[Maxsize], *p;
	int top = -1, k, j = 0;
	char ch;
	b = NULL;
	ch = str[j];
	while (ch != '\0') {
		switch (ch)
		{
			case'(':top++; St[top] = p; k = 1;break;
			case')':top--; break;
			case',':k = 2; break;
			default:p = (BTnode *)malloc(sizeof(BTnode));
				p->data = ch;
				p->lchild = p->rchild = NULL;
				if (b = NULL)
					b = p;
				else
				{
					switch (k)
					{
					case 1:St[top]->lchild = p; break;
					case 2:St[top]->rchild = p;
						break;
					}
				}
		}
		j++;
		ch = str[j];
	}
}
//输出二叉树
void DispBTree(BTnode *b)
{
	if (b != NULL)
	{
		printf("%c", b->data);
		if (b->lchild != NULL || b->rchild != NULL)
		{
			printf("(");
			DispBTree(b->lchild);
			if (b->rchild != NULL)
				printf(",");
			DispBTree(b->rchild);
			printf(")");
		}
	}
}
int main()
{
	BTnode *arr,*p;
	printf("请输入二叉树：");
    std::cout << "Hello World!\n"; 
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
