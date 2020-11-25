#include<stdio.h>

void Max(int* a, int* b, int* c)
{
	
	int max = *a;
	if (max < *b)
		max = *b;
	if (max < *c)
		max = *c;
	int min = *a;
	if (min > * b)
		min = *b;
	if (min > * c)
		min = *c;
	*b = *a + *b + *c - max - min;
	*a = min;
	*c = max;
	
}
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	Max(&a, &b, &c);
	printf("%d %d %d", a, b, c);
	return 0;
}

#include<stdio.h>
void change(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max = a;
	if (max < b)
	{
		change(&max, &b);
	}
	if (max < c)
	{
		change(&max, &c);
	}
	int min = a;
	if (min > b)
	{
		change(&min, &b);
	}
	if (min > c)
	{
		change(&min, &c);
	}
	b = a + b + c - max - min;
	a = min;
	c = max;
	printf("%d %d %d", a, b, c);
	return 0;
}
