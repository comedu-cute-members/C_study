#include <stdio.h>

int main(void)
{
    int grade;
    scanf("%d", &grade);
    if (grade >= 90)
		printf("A\n");
	else if (90> grade >= 80)
		printf("B\n");
	else if (80 >grade >= 70)
		printf("C\n");
	else if (70 >grade >= 60)
		printf("D\n");
	else
		printf("F\n");

	return 0;
}