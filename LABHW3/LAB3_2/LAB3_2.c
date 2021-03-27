/*************************************************************************
LAB3_2 이희선 20191006 컴퓨터학과 3학년
**************************************************************************/

#include <stdio.h>
int main(void)
{
	int totalMinutes, h, m;

	printf("Enter the total minutes: ");
	scanf_s("%d", &totalMinutes);

	h = totalMinutes / 60;
	m = totalMinutes % 60;

	printf("%d minutes\n", totalMinutes);
	printf("%dh %dm\n", h, m);
}