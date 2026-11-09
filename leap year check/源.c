#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);

	int i = 0;
	int c = 0, d = 0;
	c = a % 4 == 0 && a % 100 != 0;
	d = a % 400 == 0;
	if (c || d)
	{
		i = 1;
	}
	printf("%d", i);

	return 0;
}