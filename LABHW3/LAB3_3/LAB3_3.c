/*************************************************************************
LAB3_3 이희선 20191006 컴퓨터학과 3학년
**************************************************************************/

#include <stdio.h>
int main(void)
{
	int totalMinutes, h, m;

	printf("Enter hour: ");
	scanf_s("%d", &h);
	printf("Enter minute: ");
	scanf_s("%d", &m);

	totalMinutes = h * 60 + m;

	printf("Total %d minutes\n", totalMinutes);
}