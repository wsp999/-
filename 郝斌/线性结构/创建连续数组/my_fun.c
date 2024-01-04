#include "my_fun.h"
int is_full(const mystd* src)
{
	if (src->num ==src->len) return 1;
	else return 0;
}
int is_empty(const mystd* src)
{
	if (src->num == 0) return 1;
	else return 0;
}
void show(const mystd* src)
{
	assert(src);
	if (is_empty(src))
	{
		printf("����Ϊ�ա�\n");
		exit(0);
	}
	int i = 0;
	for (i = 0; i < src->num; i++)
	{
		printf("%d ", src->data[i]);
	}
	printf("\n");
	return;
}
int add(mystd* src)
{
	assert(src);
	if (is_full(src))
	{
		printf("�Ѿ�����\n");
		return 0;
	}
	int i = 0;
	printf("��������ֵ:");
	scanf("%d",(src->data + src->num));
	src->num++;
	printf("���ӳɹ�\n");
	return 1;
}
int delete(mystd* src, int val)
{
	assert(src);
	int i = 0;
	if (is_empty(src))
	{
		printf("��,�޷�ɾ��\n");
		return 0;
	}
	for (i = 0; i < src->num; i++)
	{
		if (src->data[i] == val)
		{
			for (; i < src->num-1; i++)
			{
				src->data[i] = src->data[i + 1];
			}
			src->num--;
			return 1;
		}
	}
	printf("δ���ҵ�\n");
	return 0;
}