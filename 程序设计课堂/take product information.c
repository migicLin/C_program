#include<stdio.h>
int main(void)
{
	int number, year, month, day;
	float price;
	printf("Enter item number:\n");
	scanf("%d", &number);
	printf("Enter unit price:\n");
	scanf("%f", &price);
	printf("Enter purchase date(mm/dd/yy):\n");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("Item      Unit     Purchase\n");
	printf("%-9d$%-9.2f%02d%02d%02d\n", number, price, month, day, year);
	return 0;
}
