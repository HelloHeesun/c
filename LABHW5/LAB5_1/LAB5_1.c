#include <stdio.h>
int main(void) {

	char gender;
	int age;
	double height;

	printf("Enter your gender: ");
	scanf_s("%c", &gender, 1);
	printf("Enter your age: ");
	scanf_s("%d", &age);
	printf("Enter your height: ");
	scanf_s("%lf", &height);

	printf("성별\t나이\t키\n%c\t%d\t%.6f\n", gender, age, height);
}