#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int IsPrimenum(int *p)
{
	int p1 = *p;
	int n;
	int count = 0;
	for (n = 1; n <= sqrt(p1); n++){
		if ((p1)%n!=0){
			count++;
		}
		printf("%d\n", count);
		return (p1);
	}
}
int main()
{
	
	for (int i = 100; i <= 200; i++)
	{
		int *q = i;
	    IsPrimenum(q);
		printf("%4d\n", *q);
	}
	return 0;
}