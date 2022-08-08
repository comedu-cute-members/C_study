#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char str[101];
	scanf("%s", str);

	for (int i = 97; i <= 122; i++) {
		int count = 0;
		for (int j = 0; j < strlen(str); j++) {
			if (i == str[j]) {
				printf("%d ", j);
				count++;
				break;
			}
		}
		if (count == 0) printf("%d ", -1);
	}
}