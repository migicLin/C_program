#include<stdio.h>
#include<string.h>
int main(void)
{
	for (int k = 0;; k++)
	{
		char a[100];
		gets_s(a);
		int num;
		num = strlen(a);
		if (num == 4)
		{
			break;
		}
		else
		{
			int space = 0;
			int b[100];
			b[0] = 0;
			int j = 1;
			for (int i = 0; i < num; i++)
			{
				if (a[i] == ' ')
				{
					space++;
					b[j] = i;
					j++;
				}
			}
			int sum[100] = {};
			for (int i = 0; i <= space; i++)
			{
				for (int l = b[i]; l < b[i + 1]; l++)
				{
					if (a[l] >= 'a' && a[l] <= 'z')
					{
						sum[i]++;
					}
					if (a[l] >= 'A' && a[l] <= 'Z')
					{
						sum[i]++;
					}
					if (a[l] >= '0' && a[l] <= '9')
					{
						sum[i]++;
					}
				}
			}
			int max = sum[0];
			int q;
			for (int i = 0; i <= space; i++)
			{
				if (max < sum[i])
				{
					max = sum[i];
					q = i;
				}
			}
			printf("%d ", max);
			char c[100];
			int k = 0;
			for (int i = 0; i <= max; i++)
			{
				if (i < q)
				{
					k = k + sum[i];
				}
			}
			k = k + q;
			for (int i = 0; i <= max; i++)
			{
				printf("%c", a[k + i]);
			}
			printf("\n");
		}
	}
	return 0;
}
