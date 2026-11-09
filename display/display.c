#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	char N[101];
	scanf("%s", N);

	char pattern[10][5][4] =
	{
		{ "XXX","X.X","X.X","X.X","XXX"},
		{ "..X","..X","..X","..X","..X"},
		{ "XXX","..X","XXX","X..","XXX"},
		{"XXX","..X","XXX","..X","XXX"},
		{"X.X","X.X","XXX","..X","..X"},
		{"XXX","X..","XXX","..X","XXX"},
		{"XXX","X..","XXX","X.X","XXX"},
		{"XXX","..X","..X","..X","..X"},
		{"XXX","X.X","XXX","X.X","XXX"},
		{"XXX","X.X","XXX","...X","XXX"},
	};

	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < n;j++)
		{
			int b = N[j] - '0';
			printf("%s", pattern[b][i]);
			if (j != n - 1)
			{
				printf(".");
			}
		}
		printf("\n");
	}

	return 0;
}