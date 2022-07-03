#include <stdio.h>
int main() {

	int N;
	int cycle=1;

	scanf_s("%d", &N);
	int num;
	num = ((N % 10) * 10) + (((N % 10) + (N / 10)) % 10);

	while (num != N)
	{
		num = ((num % 10) * 10) + (((num % 10) + (num / 10)) % 10);
		cycle++;
	}

	printf("%d", cycle);

	return 0;
}