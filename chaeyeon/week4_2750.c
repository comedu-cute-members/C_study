#include<stdio.h>

int main() {
	int num, arr[1000] = { 0 };
	int tmp;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num-1; j++) {
			if (arr[j + 1] < arr[j]) {
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < num; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}