#define _CRT_SECURE_NO_WARNINGS
#include "func.h"
int main()
{
	STACK S;
	initstack(&S);
	int input = 0;
	int val = 0;
	do
	{
		menu();
		printf("�����������");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				push(&S);
				break;
			case 2:
				out(&S,&val);
				printf("��ջ�ɹ�����ջֵΪ:%d\n", val);
				break;
			case 3:
				clc(&S);
				break;
			case 4:
				show(&S);
				break;
			case 0:
				printf("�������\n");
			break;
		}
	} while (input);
}