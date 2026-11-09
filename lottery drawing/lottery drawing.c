#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int arr1[7];
	for (int a = 0;a < 7;a++)
	{
		scanf("%d", &arr1[a]);
	}

	int arr2[7] = { 0 };
	for (int b = 0;b < n;b++)
	{
		int arr3[7];
		for (int c = 0;c < 7;c++)
		{
			scanf("%d", &arr3[c]);
		}

		int same = 0;
		for (int d = 0;d < 7;d++)
		{
			for (int e = 0;e < 7;e++)
			{
				if (arr1[d] == arr3[e])
				{
					same++;
					break;
				}
			}
		}
		if (same > 0)
		{
			arr2[7 - same]++;
		}
	}

	for (int f = 0;f < 7;f++)
	{
		printf("%d ", arr2[f]);
	}

	return 0;
}