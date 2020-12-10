#include<stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int* p1, * p2, * p3;
	p1 = &a; p2 = &b; p3 = &c;
	if (*p1 < *p2)
	{
		int temp;
		temp = *p1; *p1 = *p2; *p2 = temp;
	}
	if (*p1 < *p3)
	{
		int temp;
		temp = *p1; *p1 = *p3; *p3 = temp;
	}
	if (*p2 < *p3)
	{
		int temp;
		temp = *p2; *p2 = *p3; *p3 = temp;
	}
	printf("%d %d %d", *p1, *p2, *p3);
	return 0;
}
