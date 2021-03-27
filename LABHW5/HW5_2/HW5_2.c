#include <stdio.h>
int main(void) {

	int radius;
	double area;
	double circumference;
	const double PI = 3.141592;

	printf("Enter a radius: ");
	scanf_s("%d", &radius);

	area = radius * radius * PI;
	circumference = radius * PI * 2;

	printf("The area of a circle with %d:\t\t%.6f\n", radius, area);
	printf("The circumference of a circle with %d:\t%.6f\n", radius, circumference);

}