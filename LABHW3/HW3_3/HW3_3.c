/*************************************************************************
HW3_3 ���� 20191006 ��ǻ���а� 3�г�
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