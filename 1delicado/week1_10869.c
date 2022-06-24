#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0;
	printf("첫 번째 자연수를 입력하세요(1~10,000): ");
	scanf("%d", &num1);
	printf("두 번째 자연수를 입력하세요(1~10,000): ");
	scanf("%d", &num2);
	printf("두 자연수의 합은 %d입니다.\n", num1 + num2);
	printf("두 자연수의 차는 %d입니다.\n", num1 - num2);
	printf("두 자연수의 곱은 %d입니다.\n", num1 * num2);
	printf("두 자연수의 나눗셈의 몫은 %d입니다.\n", num1 / num2);
	printf("두 자연수의 나눗셈의 나머지는 %d입니다.\n", num1 % num2);
	
	return 0;
}
