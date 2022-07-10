#include <stdio.h>

int main(void) {
	int num, student, count = 0;
	int score[100];
	double average = 0;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &student);
		for (int j = 0; j < student; j++) {
			scanf("%d", score[j]);
			average += (double)score[j];

		}
		average = average / (double)student;

		for (int j = 0; j < student; j++) {
			if (average < (double)score[j])
				count++;
		}
		printf("%.2lf%%\n", ((double)(count / student)) * 100.0);
		return 0;
	}
}