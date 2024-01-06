#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
	int* pdata;
	int front;
	int rear;
}QUEUE, * pQUEUE;
void menu()
{
	printf("****************************************\n");
	printf("*****1.进队 2.出队  3.遍历  0.退出******\n");
	printf("****************************************\n");
}
void init_queue(pQUEUE dest, int num)
{
	dest->pdata = (int*)malloc(sizeof(int) * num);
	dest->front = 0;
	dest->rear = 0;
}
int is_empty(pQUEUE pS)
{
	if (pS->front == pS->rear)
	{
		return 1;
	}
	return 0;
}
int is_full(pQUEUE S)
{
	if ((S->rear + 1) % 6 == (S->front))
	{
		return 1;
	}
	else return 0;
}
void in_queue(pQUEUE S, int val)
{
	if (is_full(S))
	{
		printf("full!\n");
		return;
	}
	S->pdata[S->rear] = val;
	S->rear = (S->rear + 1) % 6;
}
void out_queue(pQUEUE pS)
{
	if (is_empty(pS))
	{
		printf("空队列！\n");
		return;
	}
	pS->front++;
}
void travel(pQUEUE pS)
{
	if (is_empty(pS))
	{
		printf("empty!\n");
		return;
	}
	int i = pS->front;
	while (i!= pS->rear)
	{
		printf("%d ", pS->pdata[i]);
		i= (i + 1) % 6;
	}
	printf("\n");
	return;
}
int main()
{
	int input = 0;
	int val = 6;
	QUEUE S = { 0 };
	init_queue(&S, val);
	do
	{
		menu();
		printf("输入操作：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("输入要加入的值:");
			scanf("%d", &val);
			in_queue(&S, val);
			break;
		case 2:
			out_queue(&S);
			break;
		case 3:
			travel(&S);
			break;
		case 0:
			break;
		}

	} while (input);
}