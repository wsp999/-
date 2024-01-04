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
		printf("数组为空。\n");
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
		printf("已经满额\n");
		return 0;
	}
	int i = 0;
	printf("输入增加值:");
	scanf("%d",(src->data + src->num));
	src->num++;
	printf("增加成功\n");
	return 1;
}
int delete(mystd* src, int val)
{
	assert(src);
	int i = 0;
	if (is_empty(src))
	{
		printf("空,无法删除\n");
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
	printf("未查找到\n");
	return 0;
}