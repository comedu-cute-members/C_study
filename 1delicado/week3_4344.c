#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int C = 0; //���̽� ���� C �Է�
	scanf("%d", &C);

	for (int i = 0; i < C; i++) //���̽� ���� C��ŭ �ݺ�
	{
		int std_num = 1, std[1000] = { 0 }; //�л� ���� �� �л��� ���� �Է¹ޱ�
		scanf("%d", &std_num);
		for (int j = 0; j < std_num; j++)
			scanf("%d", &std[j]);
		float total = 0, average = 0; //��� ���ϱ�
		for (int j = 0; j < std_num; j++)
			total += std[j];
		average = total / std_num;
		float count = 0; //��� �Ѵ� �ο� ���ϱ�
		for (int j = 0; j < std_num; j++)
			if (std[j] > average)
				count += 1;
		printf("%.3f%%\n", (count / std_num)*100); //���� ����ϱ�
	}
	return 0;
}