#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char key[11] = { 0, };
	char key_order[11] = { 0, };
	char key_arr[11] = { 0, };
	char passcode[101];
	scanf("%s", key);
	scanf("%s", passcode);
	
	char column_len = strlen(key);
	char row_len = strlen(passcode) / column_len;

	char code[10][10];

	for (char i = 0; column_len - i; i++) {
		for (char j = 0; i - j; j++) {
			if (key[i] >= key[j]) key_order[i]++;
			else key_order[j]++;
		}
	}

	for (char i = 0; column_len - i; i++) key_arr[key_order[i]] = key[i];

	char c = 0;
	for (char j = 0;column_len-j; j++) {
		for (char k = 0;row_len-k; k++) {
				
			code[k][j] = passcode[c];
			c++;
		}		
	}

	for (char i = 0; row_len - i; i++) {
		for (char j = 0; column_len - j; j++) {
			printf("%c", code[i][key_order[j]]);

		}	
	}	
}
