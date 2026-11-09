#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0, b = 0;
	int i = 0;
	scanf("%d %d", &a, &b);

	for (int c = 1;c <= a;c++)
	{
		int d = c;
		while (d > 0)
		{
			if (d % 10 == b)
			{
				i++;
			}
			d = d / 10;
		}
	}
	printf("%d\n", i);

	return 0;
}