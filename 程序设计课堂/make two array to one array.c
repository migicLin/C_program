#include<stdio.h>
int main(void)
{
	char s[10][10];
	char a[100];
	int i = 0, j = 0;
	int m, n;
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf(" %c", &s[i][j]);
		}
	}
	int l = 0;
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < m; i++)
		{
			a[l++] = s[i][j];
		}
	}
	for (i = 0; i < m * n; i++)
	{
		printf("%c", a[i]);
	}
	return 0;
}
