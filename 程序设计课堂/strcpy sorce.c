#include<stdio.h>
char strcpy(char* xiang, char* a)
{
	char* cp = xiang;
	while (*cp++ = *a++);
	return(*xiang);
}
int main(void)
{
	char a[12];
	gets_s(a);
	char b[13];
	strcpy(b, a);
	puts(b);
	return 0;
}
