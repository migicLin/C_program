#include<stdio.h>
void reverse(int* p, int a, int b)
{
	int c;
	while (a < b)
	{
		c = p[a];
		p[a] = p[b];
		p[b] = c;
	}
}
int main(void)
{
	int p[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", p[i]);
	}
	reverse(p, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		printf("%-4d", p[i]);
	}
	return 0;
}
