/*************************************************************************
LAB3_3 ���� 20191006 ��ǻ���а� 3�г�
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