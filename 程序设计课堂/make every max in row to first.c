#include<stdio.h>
int main(void)
{
	int m, n;
	int a[3][4];
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("原矩阵:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	int max, t;
	for (int i = 0; i < m; i++)
	{
		max = a[i][0];
		t = 0;
		for (int j = 0; j < n; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
				t = j;
			}
		}
		a[i][0] = max;
		a[i][t] = a[i][0];
	}
	printf("处理后:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
