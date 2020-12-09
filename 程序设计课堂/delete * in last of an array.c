#include <stdio.h>
#include <string.h>
/**********Begin**********/
char* fun(char *a)
{
	int num = strlen(a);
	char* p = &a[num-1];
	while (*p == '*')
	{
		a[num-1] = ' \0';
		p--;
		num--;
	}
	return a;
}
/**********End**********/
int main()
{	char s[81];
	fgets(s,81,stdin);
	fun( s );
	printf("The string after deleted:\n");
	puts(s);
	strcpy(s, "****A*BC*DE*F*G*********");
	fun(s);
	printf("%s", s);
	return 0;
}
 
