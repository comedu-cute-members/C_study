#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;
	int result3, result4, result5, result6;
	int a, b, c;

	printf("(1)위치의 세 자리 자연수를 입력하세요:");
	scanf("%d", &num1);
	printf("(2)위치의 세 자리 자연수를 입력하세요:");
	scanf("%d", &num2);
	
	a = num2 % 10;
	b = (num2 - a) % 100/10;
	c = num2 / 100;
	
	result3 = num1 * a;
	result4 = num1 * b;
	result5 = num1 * c;
	result6 = num1 * num2;

	printf("\n(1): %d, (2): %d (3): %d (4): %d (5): %d (6): %d\n\n", num1, num2,result3,result4, result5, result6 );

	return 0;
