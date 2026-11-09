#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);
	int arr1[101];
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &arr1[i]);
	}
	int arr2[101] = { 0 };
	for (int n=0;n<N;n++)
	{
		for (int m=0;m<n;m++)
		{
			if (arr1[m] < arr1[n])
			{
				arr2[n]++;
			}
		}
	}
	for (int n = 0;n < N;n++)
	{
		printf("%d ", arr2[n]);
	}

	return 0;
}