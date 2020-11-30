#include<stdio.h>
int isPrime(int n)
{
	if (n == 1)
		return 1;
	else
	{
		if (n <= 0)
			return 1;
		else
		{
			for (int i = 2; i < n; i++)
			{
				if (n % i == 0)
				{
					return 1;
				}
			}
			return 0;
		}
	}
}
int main(void)
{
	int n, a;
	scanf("%d", &n);
	a = isPrime(n);
	if (a == 0)
	{
		printf("%d是一个素数",n);
	}
	else
	{
		printf("%d不是一个素数", n);
	}
	return 0;
}
