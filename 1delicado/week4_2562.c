#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_max(int* numbers)
{
	int max=numbers[1], max_order = 1;

	for (int i = 1; i < 10; i++)
		if (max <  numbers[i])
		{
			max = numbers[i];
			max_order = i;
		}
	printf("%d\n%d", max, max_order);
}

int main(void)
{
	int numbers[10] = { 0 };

	for (int i = 1; i < 10; i++) //�Է�
		scanf("%d", &numbers[i]);

	print_max(numbers); //MAX ��� �� ���

	return 0;
}