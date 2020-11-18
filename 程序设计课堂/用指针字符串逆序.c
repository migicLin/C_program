#include<stdio.h>
#include<string.h>
void inverse(char* s)
{
	char* a, * b;
	a = s;
	b = s+(strlen(s) - 1);
	char temp;
	while (a < b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		a++; b--;
	}
}
int main(void)
{
	char s[100];
	scanf("%s", s);
	inverse(s);
	printf("%s", s);
	return 0;
}
