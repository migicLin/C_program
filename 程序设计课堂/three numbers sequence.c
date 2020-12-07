#include<stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c)
	{
		int temp;
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	printf("从小到大排列为:%d,%d,%d", a, b, c);
	return 0;
}
