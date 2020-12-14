#include<stdio.h>
int main(void)
{
	int s[10][20];
	int j;
	int i;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 2 * i; j++)
		{
			if (j % 2 == 0)
			{
				if (j == 0 || j == 2 * i)
				{
					s[i][j] = 1;
				}
				else
				{
					s[i][j] = s[i - 1][j - 2] + s[i - 1][j];
				}
			}
		}
		s[i][j] = '\0';
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 2 * i; j++)
		{
			if (j % 2 == 0)
			{
				printf("%d ", s[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
