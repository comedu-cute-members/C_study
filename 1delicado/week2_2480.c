#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0, money=0, big_num=0;
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	if (num1 == num2 && num2 == num3)
		money = 10000 + num1 * 1000;
	else if (((num1 == num2) && (num2!=num3)) || ((num1 == num3)&& (num1!=num2)))
		money = 1000 + num1 * 100;
	else if (num2 == num3 && num2!=num1)
		money = 1000 + num2 * 100;
	else
	{
		if (num1 > num2)
			big_num = num1;
		else
			big_num = num2;
		if (big_num > num3)
			;
		else
			big_num = num3;
		money = big_num * 100;
	}
	printf("%d", money);

	return 0;
}