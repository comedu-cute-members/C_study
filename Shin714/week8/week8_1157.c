#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Qsort(char* data, int start, int end) {
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

void find_most(char* data) {
	int count = 0;
	int semicount = 1;
	char same = 0;
	char alphabet;
	for (int i = 0; i < strlen(data); ) {
		i++;
		if (data[i] == data[i - 1]) semicount++;
		else {
			if (semicount >= count) {
				alphabet = data[i - 1];
				same = 0;
				if (semicount == count) same = 1;
				count = semicount;
			}
			
			semicount = 1;
		}
	}
	if (same == 1) printf("?");
	else printf("%c", alphabet);
}

int main() {
	char a[1000000];
	scanf("%s", a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] > 96) a[i] -= 32;
	}
	Qsort(a, 0, strlen(a) - 1);
	
	find_most(a);

	
}
