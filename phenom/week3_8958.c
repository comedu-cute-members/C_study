#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int plus_score = 0, score = 0, t_num, len = 0;

	scanf("%d", &t_num); // 테스트 케이스 개수
	char correct[80];

	while (t_num != 0) {
		
		for (int i = 0; i < t_num; i++) {
			score = 0;
			scanf("%s", correct);


			for (int j = 0; j < 80; j++) {
				
				if (correct[j] == 'O') {
					plus_score++;
					score += plus_score;
					
				}
				else plus_score = 0;

				
			}
			printf("%d\n", score);
		}

		break;
	}
}