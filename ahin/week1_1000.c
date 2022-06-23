#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, sum;
	printf("1.첫번째 정수 입력:");
	scanf_s("%d", &num1);

	printf("2.두 번째 정수 입력:");
	scanf_s("%d", &num2);

	sum = num1 + num2;
	printf("3.덧셈 결과 : %d + %d = %d", num1, num2, sum);
}
