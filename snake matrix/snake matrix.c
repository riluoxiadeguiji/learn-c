#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10][10] = { 0 } ;

	int top = 0 ,bottom = n - 1 ;
	int left = 0, right = n - 1;

	for (int num=1;num<=n*n;)
	{
		for (int a = left;a <= right;a++)
		{
			arr[top][a] = num;
			num++;
		}
		top++;

		for (int b = top;b <= bottom;b++)
		{
			arr[b][right] = num;
			num++;
		}
		right--;

		for (int c = right;c >= left;c--)
		{
			arr[bottom][c] = num;
			num++;
		}
		bottom--;

		for (int d = bottom;d >=top;d--)
		{
			arr[d][left] = num;
			num++;
		}
		left++;
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}