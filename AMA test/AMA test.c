#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int N = 0;
	int arr1[101];
	scanf("%d", &N);
	for (int a = 0;a < N;a++)
	{
		scanf("%d", &arr1[a]);
	}

	int b = 0;
	for (int i = 0;i < N;i++)
	{
		int found = 0;
		for (int m = 0;m < N;m++)
		{
			for (int n = m+1;n < N;n++)
			{
				if (arr1[i] == arr1[m] + arr1[n])
				{
					found = 1;
					goto end;
				}
			}
		}
	end:
		if (found == 1)
		{
			b++;
		}
	}
	printf("%d", b);

	return 0;
}