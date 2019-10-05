#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//给定两个整形变量的值，将两个值的内容进行交换
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