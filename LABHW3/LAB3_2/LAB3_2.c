/*************************************************************************
LAB3_2 ���� 20191006 ��ǻ���а� 3�г�
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