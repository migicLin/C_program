#include<stdio.h>
void shunxu(int* a, int* b)
{
	int temp;
	if (*a < *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	shunxu(&a, &b);
	printf("%d %d", a, b);
	return 0;
}# C_program
