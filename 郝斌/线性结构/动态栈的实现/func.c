#define _CRT_SECURE_NO_WARNINGS
#include "func.h"
//菜单实现
void menu()
{
	printf("********************************************************\n");
	printf("*************1.压栈  2.出栈  3，清空  4.展示************\n");
	printf("*************************0.退出*************************\n");
	printf("********************************************************\n");
}
int is_empty(pSTACK src)
{
	if (src->pTop == src->pBottom)
	{
		return 1;
	}
	return 0;
}
//初始化
void initstack(pSTACK ps)
{
	pNode s = (pNode)malloc(sizeof(Node));
	if (s == NULL)
	{
		printf("开辟内存空间失败\n");
		exit(-1);
	}
	ps->pTop = s;
	ps->pBottom = s;
	ps->pTop->pNext = NULL;
}
//压栈
void push(pSTACK ps)
{
	pNode pNew = (pNode)malloc(sizeof(Node));
	printf("请输入要增加的值：");
	int val = 0;
	scanf("%d", &val);
	pNew->data = val;
	pNew->pNext =ps->pTop;
	ps->pTop = pNew;
	printf("压栈成功!\n");
}
//展示
void show(pSTACK ps)
{
	if (is_empty(ps))
	{
		printf("当前栈为空\n");
		return;
	}
	pNode pMiddle=ps->pTop;//不改变ps中的pTop值
	while (pMiddle != ps->pBottom)
	{
		//pMiddle = ps->pTop->pNext;
		printf("%d ", pMiddle->data);
		pMiddle = pMiddle->pNext;
	}
	printf("\n");
	return;
}
//出栈
int out(pSTACK ps,int* val)
{
	if (is_empty(ps))
	{
		printf("栈为空.\n");
		return 0;
	}
	pNode pMiddle =ps->pTop->pNext;
	*val= ps->pTop->data;
	free(ps->pTop);
	ps->pTop = pMiddle;
	return 1;
}
//清空
void clc(pSTACK ps)
{
	if (is_empty(ps))
	{
		printf("栈为空，不需要清栈\n");
		return;
	}
	pNode pMiddle =NULL;
	while (ps->pTop != ps->pBottom)
	{
		pMiddle = ps->pTop->pNext;
		free(ps->pTop);
		ps->pTop = pMiddle;
	}
	printf("清空完成\n");
	return;
}