#include "myfun.h"
//��������
pNode creat_list()
{
	int len = 0;
	printf("�����봴����������:");
	scanf("%d", &len);
	if (len < 0)
	{
		printf("�Ƿ�����\n");
		exit(-1);
	}
	pNode pHead = (pNode)malloc(sizeof(Node));
	pNode pNew,po=pHead;
	pHead->pNext = NULL;
	int i = 0,val=0;
	for (i = 0; i < len; i++)
	{
		pNew = (pNode)malloc(sizeof(Node));//����ж�
		printf("�������%d���ڵ��ֵ��", i + 1);
		scanf("%d", &val);
		pNew->data = val;
		pNew->pNext = NULL;
		po->pNext = pNew;
		po = pNew;
	}
	return pHead;
}
//�󳤶�
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
		printf("����Ϊ��\n");
		return 0;
	}
	pNode pTail = pHead->pNext;
	while (pTail != NULL)
	{
		printf("%d ", pTail->data);
		pTail = pTail->pNext;
	}
	printf("\n��ӡ���\n");
	return 0;
}
void insert(pNode pHead)
{
	assert(pHead);
	printf("���������λ��:");
	int pos = 0;
	scanf("%d", &pos);
	if (pos > lenth(pHead) || pos < 0)
	{
		printf("����λ�ô���,����������\n");
		return;
	}
	printf("����������ֵ:");
	int val = 0;
	scanf("%d", &val);
	pNode pf = (pNode)malloc(sizeof(Node));
	pNode r;
	if (pf == NULL)
	{
		printf("����ʧ��\n");
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
	printf("����ɹ�\n");
	return;
}
void delet(pNode pHead)
{
	assert(pHead);
	printf("ɾ���ڼ����ڵ㣺");
	int pos = 0;
	scanf("%d", &pos);
	if (pos > lenth(pHead) || pos < 1)
	{
		printf("�������\n");
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