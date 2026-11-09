#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[10];
	for (int a = 0;a < 10;a++)
	{
		scanf("%d", &arr[a]);
	}

	int b = 0;
	int c = 0;
	scanf("%d", &b);
	c = b + 30;

	int i = 0;
	for (int d = 0;d < 10;d++)
	{
		if (c >= arr[d])
		{
			i++;
		}
	}
	printf("%d", i);

	return 0;
}