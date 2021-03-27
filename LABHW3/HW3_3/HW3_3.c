/*************************************************************************
HW3_3 이희선 20191006 컴퓨터학과 3학년
**************************************************************************/

#include <stdio.h>
int main(void)
{
	int totalSeconds, h, m, s;

	printf("Enter h m s: ");
	scanf_s("%d %d %d", &h, &m, &s);

	printf("---Calculation Result---\n");

	totalSeconds = h * 3600 + m * 60 + s;

	printf("Total %d seconds\n", totalSeconds);
}