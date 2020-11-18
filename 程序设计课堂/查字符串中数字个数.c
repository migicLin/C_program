#include<stdio.h>
#include<string.h>
int main(void)
{
	int n;
	char a[100];
	int num;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%s", a);
		num = strlen(a);
		for (int i = 0; i < num; i++)
		{
			if (a[i] >= '0' && a[i] <= '9')
			{
				sum++;
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
