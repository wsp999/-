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
		printf("请输入操作：");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				push(&S);
				break;
			case 2:
				out(&S,&val);
				printf("出栈成功，出栈值为:%d\n", val);
				break;
			case 3:
				clc(&S);
				break;
			case 4:
				show(&S);
				break;
			case 0:
				printf("程序结束\n");
			break;
		}
	} while (input);
}