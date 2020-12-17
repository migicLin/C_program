#include<stdio.h>
int main(void)
{
	enum weekday{mon,tue,wed,thu,fri,sat,sun}week;
	int n;
	scanf("%d", &n);
	week = (enum weekday)(n - 1);
	switch (week)
	{
	case mon:printf("星期一"); break;
	case tue:printf("星期二"); break;
	case wed:printf("星期三"); break;
	case thu:printf("星期四"); break;
	case fri:printf("星期五"); break;
	case sat:printf("星期六"); break;
	case sun:printf("星期天"); break;
	default:printf("Wrong input"); break;
	}
	return 0;
}
