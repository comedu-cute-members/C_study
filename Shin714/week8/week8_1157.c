#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a[1000000];
	int count[26] = { 0, };
	int max = 0;
	char ans;
	char tf = 1;
	scanf("%s", a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] > 96) a[i] -= 32;
		count[a[i] - 'A']++;
	}

	

	for (int i = 0; i < 26; i++) {
		if (max < count[i]) {
			max = count[i];
			
			tf = 1;
			ans = 'A' + i;
		
		}
		else if (max == count[i]) {
			tf = 0;
		}
	}
	
	if (tf) printf("%c", ans);
	else printf("?");

}
