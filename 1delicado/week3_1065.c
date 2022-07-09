#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hansoo(int N)
{
	int num=1, count = 0;
	for (num = 1; num < (N + 1); num++)
	{
		int a = num / 100, b = num % 100 / 10, c = num % 10;
		if ((a - b) == (b - c)) //세자리인 경우
			count++;
		else if (a==0) //한자리거나 두자리인 경우
			count++;
		else
			;
	}
	printf("%d", count);
}

int main(void)
{
	int N = 0, count=0;
	scanf("%d", &N);
	hansoo(N);

	return 0;
}