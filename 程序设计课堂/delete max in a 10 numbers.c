#include<stdio.h>
int main(void)
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int max = a[0];
	int t = 0;
	for (int i = 0; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			t = i;
		}
	}
	int b[9];
	for (int i = 0; i < t; i++)
	{
		b[i] = a[i];
	}
	for (int i = t + 1; i < 10; i++)
	{
		b[i - 1] = a[i];
	}
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}
