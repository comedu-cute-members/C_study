#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int C = 0; //케이스 개수 C 입력
	scanf("%d", &C);

	for (int i = 0; i < C; i++) //케이스 개수 C만큼 반복
	{
		int std_num = 1, std[1000] = { 0 }; //학생 수와 각 학생의 점수 입력받기
		scanf("%d", &std_num);
		for (int j = 0; j < std_num; j++)
			scanf("%d", &std[j]);
		float total = 0, average = 0; //평균 구하기
		for (int j = 0; j < std_num; j++)
			total += std[j];
		average = total / std_num;
		float count = 0; //평균 넘는 인원 구하기
		for (int j = 0; j < std_num; j++)
			if (std[j] > average)
				count += 1;
		printf("%.3f%%\n", (count / std_num)*100); //비율 출력하기
	}
	return 0;
}