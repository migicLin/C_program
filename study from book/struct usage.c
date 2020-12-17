#include<stdio.h>
struct students
{
	float yuwen;
	float math;
	float english;
	float average;
}student;
int main(void)
{
	//struct students student = { 70,80,90 };
	scanf("%f %f %f", &student.yuwen, &student.math, &student.english);
	student.average = (student.yuwen + student.math + student.english) / 3;
	printf("%.2f", student.average);
	return 0;
}
