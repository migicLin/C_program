#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	gets_s(a);
	char* p=NULL;
	p = a;
	int m = 0, n = 0, x = 0, y = 0, z = 0;
	while (*p != '\0')
	{
		if (*p > 'A' && *p < 'Z')
		{
			m++;
		}
		else if (*p > 'a' && *p < 'z')
		{
			n++;
		}
		else if (*p == ' ')
		{
			x++;
		}
		else if (*p > '0' && *p < '9')
		{
			y++;
		}
		else
		{
			z++;
		}
		p++;
	}
	printf("大写字母%d,小写字母%d,空格%d,数字%d,其他%d\n", m, n, x, y, z);
	return 0;
}
