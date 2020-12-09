#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[5][6];
	char t[6];
	for (int i = 0; i < 5; i++)
	{
		scanf("%s", s[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int l = 0; l < 6; l++)
			{
				if (s[i][l] > s[j][l])
				{
					break;
				}
				if (s[i][l] < s[j][l])
				{
					strcpy(t, s[i]);
					strcpy(s[i], s[j]);
					strcpy(s[j], t);
					break;
				}
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", s[i]);
	}
	return 0;
}
