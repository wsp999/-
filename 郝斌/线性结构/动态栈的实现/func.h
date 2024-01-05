#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct MESASAGE
{
	int data;
	struct MESSAGE* pNext;
}Node,*pNode;
typedef struct Stack
{
	pNode pTop;
	pNode pBottom;
} STACK,*pSTACK;
void menu();
int is_empty(pSTACK src);
void initstack(pSTACK ps);
void push(pSTACK ps);
void show(pSTACK ps);
int out(pSTACK ps, int* val);
void clc(pSTACK ps);