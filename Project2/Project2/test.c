#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////�����������α�����ֵ��������ֵ�����ݽ��н���
//int main()
//{
//	int n = 10;
//	int m = 20;
//	int temp;
//	printf("n=%d m=%d\n", n, m);
//	temp = n;
//	n = m;
//	m = temp;
//	printf("n=%d m=%d\n", n, m);
//	return 0;
//}
////����������ʱ����������������������
////˼�룺�ı�һ��������ֵ�����پֲ�������
//int main()
//{
//	int n = 10;
//	int m = 20;
//	printf("n=%d m=%d\n", n,m);
//	//n= 01010
//	//m=10100
//	//q=n^m=11110
//	//m^q=01010 
//	n = n^ m;
//	m =n^m;
//	n = n^m;
//	printf("n=%d m=%d\n", n, m);
//	return 0;
//}

////��10 �����������ֵ
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int max;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < 10; i++)
//	{   
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


////�����������Ӵ�С���
////����һ��
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b,&c);
//	if (a < c&&b < c)
//	{
//		printf("%d ", c);
//		if (a < b)
//			printf("%d %d", b,a);
//		else printf("%d %d", a,b);
//	}
//	if (a < b&&c < b)
//	{
//		printf("%d ", b);
//		if (a < c)
//			printf("%d %d", c,a);
//		else printf("%d %d", a,c);
//	}
//	else if (b < a&&c < a)
//	{
//		printf("%d ", a);
//		if (b < c)
//			printf("%d %d", c,b);
//		else printf("%d %d", b,c);
//	}
//	return 0;
//}
////��������
//int main()
//{
//	int a, b, c,tmp;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//�������������Լ��
int main()
{
	//��ʮ���д����Ǵ��
	/*int a, b;
	int gcd=0;
	scanf("%d%d", &a, &b);
	if (a%b == 0)
		gcd = b;
	while (a%b)
	{
		gcd = a%b;
		a = b;
		b = gcd;
	}
	printf("%d", gcd);*/
	int a = 1024; int b = 22;
	while (a%b)
	{
		int c = a%b;
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}