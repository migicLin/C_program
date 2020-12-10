#include<stdio.h>
int main(void)
{
	char a[100];
	int i, num = 0;
	fgets(a, 100, stdin);
	for (i = 0; i < 100; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i + 1] == ' ')
			{
				num++;
			}
		}
	}
	printf("%d", num);
	return 0;
}
