#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);

	int c = 0;
	c = a * 10 + b;

	int i = 0;
	i = c / 19;

	printf("%d", i);

	return 0;
}