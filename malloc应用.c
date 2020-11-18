#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int* a;
	int n;
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	int* a;
	int i = 0;
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	while ((i < n) && (scanf("%d", (a + i)) == 1))//如果输入是整数，==1；能运行，否则等于0；跳出
	{
		i++;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
//暂且可用当作一个变量，下面的更安全
