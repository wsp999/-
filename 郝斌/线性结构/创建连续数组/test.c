//ʵ�������չʾ������ɾ���顢�ġ�����������
#include "my_fun.h"
int main()
{
	int* pf = (int*)malloc(sizeof(int) * 6);
	mystd s = {0};
	s.data = pf;
	pf = NULL;
	s.len = 6;
	add(&s);
	add(&s);
	add(&s);
	show(&s);
	delete(&s,4);
	show(&s);
	free(s.data);
}