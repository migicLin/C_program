#include<stdio.h>
int main(void)
{
	char a[80];
	char b[80];
	int i;
	fgets(a, 80, stdin);
	for (i = 0;; i++)
	{
		if (a[i] != '*')
		{
			break;
		}
		b[i] = a[i];
	}
	int j = i;
	for (j = i; j < 80; j++)
	{
		if (a[j] != '*')
		{
			b[i] = a[j];
			i++;
		}
	}
	puts(b);
	return 0;
}
