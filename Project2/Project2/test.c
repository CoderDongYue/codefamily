#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�����������α�����ֵ��������ֵ�����ݽ��н���
int main()
{
	int n = 10;
	int m = 20;
	int temp;
	printf("n=%d m=%d\n", n, m);
	temp = n;
	n = m;
	m = temp;
	printf("n=%d m=%d\n", n, m);
	return 0;
}