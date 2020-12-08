#include <stdio.h>
#include <stdlib.h>
/********found********/
#define FU(m,n) ((m)/(n))
float fun(float  a, float  b, float  c)
{
	float  value;
	value = (float)FU(a + b, a - b) + (float)FU(c + b, c - b);
	/********found********/
	return value;
}
int main()
{
	float  x, y, z, sum;
	scanf("%f %f %f", &x, &y, &z);
	printf("x=%f,y=%f,z=%f\n", x, y, z);
	if (x == y || y == z)
	{
		printf("Data error!\n");
		exit(0);
	}
	else
	{
		sum = fun(x, y, z);
		printf("The result is :%5.2f", sum);
	}
	return 0;
}
