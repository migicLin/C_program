#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
struct time
{
	int hour;
	int minute;
	int second;
}ti;
void update()
{
	ti.second++;
	if (ti.second == 60)
	{
		ti.minute++;
		ti.second = 0;
	}
	if (ti.minute == 60)
	{
		ti.hour++;
		ti.minute = 0;
	}
	if (ti.hour == 24)
	{
		ti.hour = 0;
	}
}
void display()
{
	printf("%2d %2d %2d", ti.hour, ti.minute, ti.second);
}
void delay()
{
	Sleep(1000);
}
int main(void)
{
	ti.hour = 0; ti.minute = 0; ti.second = 0;
	for (long i = 0; i < 10000000; i++)
	{
		update();
		display();
		delay();
		system("cls");
	}
	return 0;
}
