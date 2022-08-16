#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count, people, sum, over;
	char score[1000] = {0, };
	scanf("%d", &count);
	for (; count; count--) {
		sum = 0;
		over = 0;
		scanf("%d", &people);
		for (int i = 0; i < people; i++) {
			scanf("%d", &score[i]);
			sum += score[i];
		}
		
		for (int i = 0; i < people; i++) {
			if (((float)sum / people) < score[i]) over++;
		}
		
		printf("%.3f%%\n", (float) over / people * 100);
	}
}
