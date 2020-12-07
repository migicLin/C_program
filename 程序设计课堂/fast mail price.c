#include<stdio.h>
#include<math.h>
int main(void)
{
	int place;
	float weight;
	float price;
	scanf("%d,%f", &place, &weight);
	weight = ceil(weight) - 1;
	switch (place)
	{
	case 0:price = (10 + (3 * weight)); break;
	case 1:price = (10 + (4 * weight)); break;
	case 2:price = (15 + (5 * weight)); break;
	case 3:price = (15 + (6.5 * weight)); break;
	case 4:price = (15 + (10 * weight)); break;
	default:printf("Error in Area\n");
	}
	printf("Price: %.2f", price);
	return 0;
}
