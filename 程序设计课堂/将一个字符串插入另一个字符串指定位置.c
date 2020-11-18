#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	char b[100];
	int n, x, y;
	scanf("%s", a);
	scanf("%s", b);
	scanf("%d", &n);
	x = strlen(a);
	y = strlen(b);
	char xin[200];
	for (int i = 0; i < n; i++)
	{
		xin[i] = a[i];
	}
	for (int i = n; i < n + y; i++)
	{
		xin[i] = b[i - n];
	}
	for (int i = n + y; i < x + y; i++)
	{
		xin[i] = a[i - y];
	}
	for (int i = 0; i < x + y; i++)
	{
		printf("%c", xin[i]);
	}
	return 0;
}
