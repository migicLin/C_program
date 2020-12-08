#include<stdio.h>
int main(void)
{
	int n;
	int a[20][20];
	scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int x[20] = { 0 };
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			x[i] = a[i][j] + x[i];
		}
	}
	int num1 = 0;
	for (i = 0; i < n; i++)
	{
		if (x[0] == x[i])
		{
			num1++;
		}
	}
	int y[20] = { 0 };
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			y[j] = a[j][i] + y[j];
		}
	}
	int num2 = 0;
	for (i = 0; i < n; i++)
	{
		if (y[0] == y[i])
		{
			num2++;
		}
	}
	int row;
	row = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				row = row + a[i][j];
			}
		}
	}
	int list = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i + j == n - 1)
			{
				list = list + a[i][j];
			}
		}
	}
	if (num1 == num2 && num1 == n && row == list && row == x[0])
	{
		printf("Yes");
	}
	else
	{
		printf("Wrong");
	}
	return 0;
}
