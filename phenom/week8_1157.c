#include<stdio.h> 
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>

int main() {
	char str[1000001];
	int max = 0, ans = 0, num[26] = {0,};

	scanf("%s", str);

	int len = strlen(str);

	for (int i = 0; i < len; i++) {
		if (str[i] >= 97) { // 소문자
			num[str[i] - 97]++;
		}
		
		if (str[i] <= 90) { // 대문자
			num[str[i] - 65]++;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (num[i] > max) {
			max = num[i];
			ans = i + 65;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (num[i] == max && i != ans - 65) {
			ans = 63;
			break;
		}
	}

	printf("%c", ans);
}