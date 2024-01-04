#include "myfun.h"
//创建链表
pNode creat_list()
{
	int len = 0;
	printf("请输入创建的链表长度:");
	scanf("%d", &len);
	if (len < 0)
	{
		printf("非法输入\n");
		exit(-1);
	}
	pNode pHead = (pNode)malloc(sizeof(Node));
	pNode pNew,po=pHead;
	pHead->pNext = NULL;
	int i = 0,val=0;
	for (i = 0; i < len; i++)
	{
		pNew = (pNode)malloc(sizeof(Node));//最好判断
		printf("请输入第%d个节点的值：", i + 1);
		scanf("%d", &val);
		pNew->data = val;
		pNew->pNext = NULL;
		po->pNext = pNew;
		po = pNew;
	}
	return pHead;
}
//求长度
int lenth(pNode pHead)
{
	int len = 0;
	pNode p = pHead->pNext;
	while (p != NULL)
	{
		len++;
		p = p->pNext;
	}
	return len;
}
void show(pNode pHead)
{
	int i = 0;
	if (pHead->pNext == NULL)
	{
		printf("链表为空\n");
		return 0;
	}
	pNode pTail = pHead->pNext;
	while (pTail != NULL)
	{
		printf("%d ", pTail->data);
		pTail = pTail->pNext;
	}
	printf("\n打印完毕\n");
	return 0;
}
void insert(pNode pHead)
{
	assert(pHead);
	printf("请输入插入位置:");
	int pos = 0;
	scanf("%d", &pos);
	if (pos > lenth(pHead) || pos < 0)
	{
		printf("插入位置错误,请重新输入\n");
		return;
	}
	printf("请输入插入的值:");
	int val = 0;
	scanf("%d", &val);
	pNode pf = (pNode)malloc(sizeof(Node));
	pNode r;
	if (pf == NULL)
	{
		printf("开辟失败\n");
		perror("insert");
		return;
	}
	for (int i = 0; i < pos-1; i++)
	{
		pHead = pHead->pNext;
	}
	r = pHead->pNext;
	pHead->pNext = pf;
	pf->data = val;
	pf->pNext = r;
	printf("插入成功\n");
	return;
}
void delet(pNode pHead)
{
	assert(pHead);
	printf("删除第几个节点：");
	int pos = 0;
	scanf("%d", &pos);
	if (pos > lenth(pHead) || pos < 1)
	{
		printf("输入错误！\n");
		return;
	}
	int i = 0;
	for (; i < pos-1; i++)
	{
		pHead = pHead->pNext;
	}
	pNode pf = pHead->pNext;
	pHead->pNext = pHead->pNext->pNext;
	free(pf);
	pf = NULL;
	return;
}
void sort(pNode pHead)
{
	int i = 0, j = 0;
	pNode pcmp = NULL;
	int len = lenth(pHead);
	for (i = 0, pHead = pHead->pNext; i < len; i++, pHead = pHead->pNext)
	{
		for (j = i + 1, pcmp = pHead->pNext; j < len; j++, pcmp = pcmp->pNext)
		{
			if (pcmp->data < pHead->data)
			{
				int k = pHead->data;
				pHead->data = pcmp->data;
				pcmp->data = k;
			}
		}
	}
	return;
}