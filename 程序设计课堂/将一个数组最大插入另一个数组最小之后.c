#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	char b[100];
	scanf("%s", a);
	scanf("%s", b);
	int x, y;
	x = strlen(a);
	y = strlen(b);
	char min=a[0];
	char max=b[0];
	int m;
	for (int i = 0; i < x; i++)
	{
		if (min > a[i])
		{
			min = a[i];
			m = i;
		}
	}
	for (int i = 0; i < y; i++)
	{
		if (max < b[i])
		{
			max = b[i];
		}
	}
	char xin[101];
	for (int i = 0; i <= m; i++)
	{
		xin[i] = a[i];
	}
	xin[m + 1] = max;
	for (int i = m + 2; i < x + 1; i++)
	{
		xin[i] = a[i - 1];
	}
	for (int i = 0; i < x + 1; i++)
	{
		printf("%c", xin[i]);
	}
	return 0;
}
