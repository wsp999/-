#define _CRT_SECURE_NO_WARNINGS
//1.����һ����ѭ������������������׵�ַ����ȥ
//2.����������β��㷨��
//3.�ж������Ƿ�Ϊ��
//4.������
//5.���루�ȽϾ��䣩  ɾ������ʾɾ������ֵ��
//6.����
#include "myfun.h"
void menu()
{
	printf("***********1.����  2.����***********\n");
	printf("***********3.����  4.����***********\n");
	printf("***********5.ɾ��  6.����***********\n");
	printf("***********     0.����   ***********\n");
}
int main()
{
	pNode pHead=NULL;
	int input = 1;
	do
	{
		menu();
		printf("��ѡ�������");
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
			printf("������Ϊ:%d\n",lenth(pHead));
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
			printf("���������\n");
			break;
		}
	} while (input);
}