#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[1000] = { 0, };
	int temp, count;
	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf("%d", &arr[i]);
	}



	for (int i = 0; i < count - 1; i++) {
		int j = i;
		while (j >= 0 && arr[j] > arr[j + 1]) {
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			j--;
		}
	}
	for (int i = 0; i < count; i++) printf("%d\n", arr[i]);

}
