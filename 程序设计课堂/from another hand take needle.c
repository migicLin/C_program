#include<stdio.h>
#include<string.h>
char *nixu(char *a)
{
	int num = strlen(a);
	for (int i = 0; i < num; i++)
	{
		if (i < num - i - 1)
		{
			int temp;
			temp = a[i];
			a[i] = a[num - i - 1];
			a[num - i - 1] = temp;
		}
	}
	return(a);
}
int main(void)
{
	char a[100];
	scanf("%s", a);
	nixu(a);
	printf("%s", a);
	return 0;
}
