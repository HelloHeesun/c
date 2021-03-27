#include <stdio.h>
int main(void) {

	int radius;
	double area;
	const double PI = 3.141592;

	printf("Enter a radius: ");
	scanf_s("%d", &radius);

	area = radius * radius * PI;

	printf("The area of a circle with %d:\t%.6f.", radius, area);
}