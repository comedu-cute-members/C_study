#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int d(int i)
{
	int num = 0;
	num = i + i / 10000 + i / 1000 % 10 + i / 100 % 10 + i % 100 / 10 + i % 10;
	if (num < 10001)
		return num;
	else
		return 0;
}

int main(void)
{
	int i = 0;
	bool a[10001] = { 0 }; //�ڷ� ũ�� Ŀ�� bool�� ó��
	for (i = 1; i < 100001; i++) //�����ѹ� �ƴ� �ֵ� true ó��
		a[d(i)] = true;
	for (i = 1; i < 10001; i++)//�����ѹ� ���
		if (a[i] != true)
			printf("%d\n", i);
	return 0;
}