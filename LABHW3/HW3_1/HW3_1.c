/*************************************************************************
HW3_1 ���� 20191006 ��ǻ���а� 3�г�
**************************************************************************/

#include <stdio.h>
int main(void)
{
	int score1, score2, average;

	printf("Enter two scores: ");
	scanf_s("%d %d", &score1, &score2);

	average = (score1 + score2) / 2;

	printf("The average is %d.\n", average);
}