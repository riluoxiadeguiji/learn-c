#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int arr[1001][3] = {0,0,0};
	for (int a = 0;a < n;a++)
	{
		scanf("%d %d %d", &arr[a][0], &arr[a][1], &arr[a][2]);
	}

	int num = 0;
	for (int i = 0;i < n;i++)
	{
		for (int j = i+1;j < n;j++)
		{
			int score0 = 0,score1=0,score2=0;
			score0 = arr[i][0] - arr[j][0];
			score1 = arr[i][1] - arr[j][1];
			score2 = arr[i][2] - arr[j][2];
			int sum = 0 ;
			sum = arr[i][0] + arr[i][1] + arr[i][2] - arr[j][0] - arr[j][1] - arr[j][2];
			if (score0 >= -5&& score0 <= 5 && score1 >= -5 && score1 <= 5 && score2 >= -5 && score2 <= 5 &&sum >= -10&& sum <= 10)
			{
				num++;
			}
			
		}
	}

	printf("%d", num);

	return 0;
}