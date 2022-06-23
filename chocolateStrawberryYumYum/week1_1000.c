#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int A, B;

	printf("정수 A와 B를 입력하세요 (단, A>0, B<10) : ");
	scanf("%d %d", &A, &B);
	printf("A + B 의 값은 %d입니다", A+B);


	return 0;
}
