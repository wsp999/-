#define _CRT_SECURE_NO_WARNINGS
#include "func.h"
//�˵�ʵ��
void menu()
{
	printf("********************************************************\n");
	printf("*************1.ѹջ  2.��ջ  3�����  4.չʾ************\n");
	printf("*************************0.�˳�*************************\n");
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
//��ʼ��
void initstack(pSTACK ps)
{
	pNode s = (pNode)malloc(sizeof(Node));
	if (s == NULL)
	{
		printf("�����ڴ�ռ�ʧ��\n");
		exit(-1);
	}
	ps->pTop = s;
	ps->pBottom = s;
	ps->pTop->pNext = NULL;
}
//ѹջ
void push(pSTACK ps)
{
	pNode pNew = (pNode)malloc(sizeof(Node));
	printf("������Ҫ���ӵ�ֵ��");
	int val = 0;
	scanf("%d", &val);
	pNew->data = val;
	pNew->pNext =ps->pTop;
	ps->pTop = pNew;
	printf("ѹջ�ɹ�!\n");
}
//չʾ
void show(pSTACK ps)
{
	if (is_empty(ps))
	{
		printf("��ǰջΪ��\n");
		return;
	}
	pNode pMiddle=ps->pTop;//���ı�ps�е�pTopֵ
	while (pMiddle != ps->pBottom)
	{
		//pMiddle = ps->pTop->pNext;
		printf("%d ", pMiddle->data);
		pMiddle = pMiddle->pNext;
	}
	printf("\n");
	return;
}
//��ջ
int out(pSTACK ps,int* val)
{
	if (is_empty(ps))
	{
		printf("ջΪ��.\n");
		return 0;
	}
	pNode pMiddle =ps->pTop->pNext;
	*val= ps->pTop->data;
	free(ps->pTop);
	ps->pTop = pMiddle;
	return 1;
}
//���
void clc(pSTACK ps)
{
	if (is_empty(ps))
	{
		printf("ջΪ�գ�����Ҫ��ջ\n");
		return;
	}
	pNode pMiddle =NULL;
	while (ps->pTop != ps->pBottom)
	{
		pMiddle = ps->pTop->pNext;
		free(ps->pTop);
		ps->pTop = pMiddle;
	}
	printf("������\n");
	return;
}