#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, multiply1=1, multiply2=1, multiply3=1;
	printf("첫 번째 세자리 자연수를 입력하세요(100~999): ");
	scanf("%d", &num1);
	printf("두 번째 세자리 자연수를 입력하세요(100~999): ");
	scanf("%d", &num2);
	multiply1 = num1 * (num2 % 10);
	multiply2 = num1* (num2 % 100 / 10);
	multiply3 = num1* (num2 / 100);
	printf("   %d\n  X%d\n------\n", num1, num2);
	printf("%6d\n%5d\n%4d\n------\n", multiply1, multiply2, multiply3);
	printf("%6d", multiply1 + multiply2 * 10 + multiply3 * 100);
	
	return 0;
}
