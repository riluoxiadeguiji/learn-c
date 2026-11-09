#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int l = 0, m = 0;
	scanf("%d %d", &l, &m);

	int arr[10001] = {0};
	for (int a = 0;a <= l;a++)
	{
		arr[a] = 1;
	}

	for (int b=0;b<m;b++)
	{
		int start = 0, end = 0;
		scanf("%d %d", &start, &end);

		for (int c = start;c <= end;c++)
		{
			arr[c] = 0;
		}
	}

	int count = 0;
	for (int d = 0;d <= 10000;d++)
	{
		if (arr[d] == 1)
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}