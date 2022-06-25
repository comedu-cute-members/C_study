#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, sum, minus,multiply,division;
	printf("1.첫번째 자연수 입력:");
	scanf_s("%d", &num1);

	printf("2.두 번째 자연수 입력:");
	scanf_s("%d", &num2);

	sum = num1 + num2;
	printf("3.덧셈 결과 : %d + %d = %d\n", num1, num2, sum);
	minus = num1 - num2;
	printf("4.뺄셈 결과 : %d - %d = %d\n", num1, num2, minus);
	multiply = num1 * num2;
	printf("5.곱셈 결과 : %d * %d = %d\n", num1, num2, multiply);
	division = num1 / num2;
	printf("6.나눗셈 결과 : %d / %d = %d\n", num1, num2, division);
	
	
