#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char answer[80] = {0, };
	int count, score;
	scanf("%d", &count);

	
	for (; count > 0; count--) {
		score = 0;
		scanf("%s", answer);
		for (int i = 0; i<80; i++){
			if (answer[i] == 'O') answer[i] = 1;
			else answer[i] = 0;
		}
		for (int i = 1; i < 80; i++) {
			answer[i] = answer[i] + answer[i] * answer[i - 1];
		}
		for (int i = 0; i < 80; i++) score += answer[i];
		printf("%d\n", score);
	}
}
