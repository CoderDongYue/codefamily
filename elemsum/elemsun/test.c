#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<math.h>
void elemsum(int *p,int x)
{
	int i = 0;
	int totalsum = 0;
	int extrasum = 0;
	const int temp = x;
	int sum = p[i];
	for (i = 0; i <= x; i++)
	{
		sum += p[x + 1];
		x += temp + 1;
		assert();
		totalsum += p[i];
	}
	extrasum = totalsum - sum;
	printf("%d\n", sum);
	printf("%d\n", totalsum);
	printf("%d\n", extrasum);
}
int main()
{
	int arr[] = { 1, 2, 3, 4,
		               5, 6, 7, 8,
		               9, 10, 11, 12,
					 13,14,15,16};
	int n = sqrt(sizeof(arr) / sizeof(arr[0]));
	elemsum(arr,n);
	return 0;
}