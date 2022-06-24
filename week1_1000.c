#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0;
	printf("첫 번째 정수를 입력하세요(1~9): ");
	scanf("%d", &num1);
	printf("두 번째 정수를 입력하세요(1~9): ");
	scanf("%d", &num2);
	printf("두 정수의 합은 %d입니다.", num1 + num2);
	
	return 0;
}
