#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct std
{
	int* data;
	int len;
	int num;
}mystd;
int is_full(mystd*);
int is_empty(mystd*);
void show(mystd*);
int add(mystd*);
int delete(mystd*,int);
//int find(mystd*, int val);