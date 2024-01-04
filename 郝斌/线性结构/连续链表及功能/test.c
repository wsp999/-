#define _CRT_SECURE_NO_WARNINGS
//1.创建一个非循环单链表，并将链表的首地址传回去
//2.遍历（跟踪尾结点法）
//3.判断链表是否为空
//4.链表长度
//5.插入（比较经典）  删除（显示删除数据值）
//6.排序
#include "myfun.h"
void menu()
{
	printf("***********1.创建  2.遍历***********\n");
	printf("***********3.长度  4.插入***********\n");
	printf("***********5.删除  6.排序***********\n");
	printf("***********     0.结束   ***********\n");
}
int main()
{
	pNode pHead=NULL;
	int input = 1;
	do
	{
		menu();
		printf("请选择操作：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			pHead=creat_list();
			break;
		case 2:
			show(pHead);
			break;
		case 3:
			printf("链表长度为:%d\n",lenth(pHead));
			break;
		case 4:
			insert(pHead);
			break;
		case 5:
			delet(pHead);
			break;
		case 6:
			sort(pHead);
			break;
		case 0:
			printf("程序结束。\n");
			break;
		}
	} while (input);
}