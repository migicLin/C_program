#include<stdio.h>
void fun(char* a)
{
	char* p;
	p = a;
	int i = 0, n = 0;
	while (*p == '*')
	{
		n++; p++;
	}
	while (*p)
	{
		a[i] = *p;
		i++;
		p++;
	}
	while (n != 0)
	{
		a[i] = '*';
		i++;
		n--;
	}
}
int main(void)
{
	char a[100];
	scanf("%s", a);
	fun(a);
	printf("%s", a);
	return 0;
}
