#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
// 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int i = 0;
//	int A[5] = { 1,2,3,4,5 };
//	int B[5] = { 6,7,8,9,0 };
//	for (i = 0; i < 5; i++)
//	{
//		int temp = 0;
//		temp = A[i];
//		A[i] = B[i];
//		B[i] = temp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	return 0;
//}
////计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值
//int main()
//{
//	int i;
//	double val = 0.00;
//	for (i = 1; i <= 100; i++)
//	{
//		/*double k = pow(-1, i);
//	    val += (1.0/ i)*k;*/
//		val += (1.0/ i)*pow(-1, i);
//	}
//	printf("%4.3lf", val);
//}
//编写程序数一下 1到 100 的所有整数中出现多少次数字9
int main()
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 100;i++)
	{
		if (i % 10 == 9 && ((i / 10) % 10 != 9))
			count++;
		else if (((i / 10) % 10 == 9) && (i % 10 != 9))
			count++;
		else if (i % 10 == 9 && ((i / 10) % 10 == 9))
			count+=2;
		else continue;
	}
	printf("%d ", count);
	return 0;
}