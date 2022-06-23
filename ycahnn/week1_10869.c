#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int numA, numB;
	int result1, result2, result3, result4, result5;

	printf("자연수 A를 입력하세요(단, A>=1):");
	scanf("%d", &numA);
	printf("자연수 B를 입력하세요(단, B<=10000):");
	scanf("%d", &numB);
	printf("\nA: %d, B: %d\n\n", numA, numB);

	result1 = numA + numB;
	result2 = numA - numB;
	result3 = numA * numB;
	result4 = numA / numB;
	result5 = numA % numB;

	printf("A+B의 값은 %d입니다\n", result1);
	printf("A-B의 값은 %d입니다\n", result2);
	printf("A*B의 값은 %d입니다\n", result3);
	printf("A/B의 값은 %d입니다\n", result4);
	printf("A%B의 값은 %d입니다\n", result5);

	return 0;
}
