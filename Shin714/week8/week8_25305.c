#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Qsort(int* data, int start, int end) {
	if (start >= end) {
		return;
	}
	int key = start;
	int i = start + 1;
	int j = end;
	int temp;
	while (i <= j) {
		while (data[i] <= data[key] && i <= end) i++;
		while (data[j] >= data[key] && j > start) j--;
		if (i > j) {
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	Qsort(data, start, j - 1);
	Qsort(data, j + 1, end);
	
}

int main() {
	int N, k;
	scanf("%d %d", &N, &k);
	int a[1000] = { 0, };
	for (int i = 0; i < N; i++) scanf("%d", &a[i]);
	
	
	Qsort(a, 0, N - 1);

	printf("%d ", a[N - k]);
	

}
