#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 101

int main()
{
	int arr[N];
	int size = 0;

	int x = 0;
	while (scanf("%d",&x)&&x != 0)
	{
		arr[size] = x;
		size++;
	};

	for (int i=size-1;i >= 0;i--)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}