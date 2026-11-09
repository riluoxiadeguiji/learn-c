#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int M = 0;
	int N = 0;
	scanf("%d %d", &M, &N);

	if (M > N)
	{
		int temp = 0;
		temp = M;
		M = N;
		N = temp;
	}

	int arr[10] = {0};
	for (int c = M;c <= N;c++)
	{
		int d = c;
		while (d != 0)
		{
			int cnt = d%10;
			arr[cnt]++;
			d = d / 10;
		}
	}

	for (int i = 0;i < 10;i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}