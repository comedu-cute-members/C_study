#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 1; i < N; i++)
	{
		int num = i; // ������ �ĺ�
		int plus = i; // �� �ڸ����� ���� ���ϱ� ���� ����

		while (plus > 0)
		{
			num += plus % 10;
			plus /= 10;
		}
		
		if (num == N)
		{
			printf("%d", i);
			N = -1;
			break;
		}
	}

	if (N != -1)
		printf("0");
}