#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int arr[10000] = {0};
	int i = 0;
	for (;n!=1;)
	{
		arr[i] = n;
		if (n % 2 == 1 )
		{
			n = n * 3 + 1;
		}
		else
		{
			n = n / 2;
		}
		i++;
	}
	arr[i] = 1;

	for (int num = i;num >= 0;num--)
	{
		printf("%d ", arr[num]);
	}

	return 0;
}