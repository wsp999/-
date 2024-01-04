#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//创建节点
typedef struct list
{
	int data;
	struct list* pNext;
}*pNode,Node;
pNode creat_list();
int lenth(pNode);
void show(pNode);
void insert(pNode);
void delet(pNode);
void sort(pNode);