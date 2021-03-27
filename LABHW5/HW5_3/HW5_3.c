#include <stdio.h>
int main(void) {

	double celsius, fahrenheit;
	const int BASE = 32;
	const double CONVERSION_FACTOR = 9.0 / 5.0;

	print("Enter a celsius temperature: ");
	scanf_s("%lf", &celsius);

	fahrenheit = celsius * CONVERSION_FACTOR + BASE;

	printf("Fahrenheit Equivalent : %.6f\n", fahrenheit);
}