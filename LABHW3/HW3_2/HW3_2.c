/*************************************************************************
HW3_2 ���� 20191006 ��ǻ���а� 3�г�
**************************************************************************/

#include <stdio.h>
int main(void)
{
	int totalSeconds, h, m, s;

	printf("Enter the total seconds: ");
	scanf_s("%d", &totalSeconds);

	printf("---Calculation Result---\n");
	printf("%d seconds\n", totalSeconds);

	h = totalSeconds / 3600;
	m = totalSeconds % 3600 / 60;
	s = totalSeconds % 60;

	printf("%dh %dm %ds\n", h, m, s);
}