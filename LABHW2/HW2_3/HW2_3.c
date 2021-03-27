#include <stdio.h>
int main(void)
{
	int total = 14000, hour = total / 3600, minute = total % 3600 / 60, seconds = total % 3600 % 60;
	printf("%d seconds:\n", total);
	printf("%dh %dm %ds\n", hour, minute, seconds);
} 