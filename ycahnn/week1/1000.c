#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int numA, numB;
	int result;
  
	printf("정수 A와 B를 입력하세요(단, A>0, B<10):");
	scanf("%d %d", &numA, &numB);
  
	result = numA + numB;
  
	printf("A+B의 값은 %d입니다", result);
  
	return 0;
}
