#include<stdio.h>
void figureTrasform(int n)
{
	if (n < 0)
	{
		n = -n;
		printf("- ");
		if (10 * n / 10 != 0)
		{
			int i;
			i = n % 10;
			n = n / 10;
			figureTrasform(n);
			printf("%d ", i);
		}
	}
	else
	{
		if (10 * n / 10 != 0)
		{
			int i;
			i = n % 10;
			n = n / 10;
			figureTrasform(n);
			printf("%d ", i);
		}
	}
}
int main(void)
{
	int n;
	scanf("%d", &n);
	figureTrasform(n);
	return 0;
}
