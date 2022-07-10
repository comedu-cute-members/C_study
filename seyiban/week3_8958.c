#include <stdio.h>
#include <string.h>
int main() {

	int num;
	scanf_s("%d", &num);

	char ox[80];

	for (int i = 0; i < num; i++) {
		scanf_s("%s", ox);
		int count = 1, hap = 0;

		for (int j = 0; j < strlen(ox); j++) {
			if (ox[j] == 'O') {
				hap += count;
				count++;
			}
			else if (ox[j] == 'X') {
				count = 1;
			}
		}
		printf("%d\n", hap);
	}
		
	return 0;
}