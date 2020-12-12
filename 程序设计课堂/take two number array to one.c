#include<stdio.h>
#include<string.h>
int main(void)
{
	char s1[80];
	char s2[80];
	gets(s1);
	gets(s2);
	int i = 0, j = 0;
	for (i = strlen(s1); s2[j] != '\0'; j++)
	{
		s1[i++] = s2[j];
	}
	s1[i] = '\0';
	puts(s1);
	return 0;
}
