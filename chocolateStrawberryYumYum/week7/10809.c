#include <stdio.h>
#include <string.h>

int main() {

	int arr[26];
	char s[100];
	scanf("%s", s);

	for (int i = 0; i < 26; i++) arr[i] = -1;

	for (int i = 97; i <= 122; i++) {
		for (int j = 0; j < strlen(s); j++) {
			if (s[j] == i) {
				arr[s[j] -'a'] = j;
				break;
			}
		}
	}
    for (int i = 0; i < 26; i++) printf("%d ", arr[i]);

	return 0;
}
