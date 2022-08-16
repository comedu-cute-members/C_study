#include <stdio.h>
#include <string.h>



int main() {
	
	int N;
	char arr_bool[51] = { 0, };
    char temp[51];
    scanf("%d", &N);
    char word[N][51];
    
    for (int i = 0; i < N; i++) scanf("%s", &word[i]);
    
    
    for (int i = 0; i < N - 1; i++) {
    	int j = i;
    	while (j >= 0 && strcmp(word[j], word[j + 1]) > 0){
    		strcpy(temp, word[j]);
            strcpy(word[j], word[j + 1]);
            strcpy(word[j + 1], temp);
            j--;
		}
	}
	
    for (int i = 0; i < N - 1; i++) {
        int j = i;
        while (j >= 0 && strlen(word[j]) > strlen(word[j + 1])){
            strcpy(temp, word[j]);
            strcpy(word[j], word[j + 1]);
            strcpy(word[j + 1], temp);
            j--;
        }
    }
    
    
    for (int i = 0; i < N; i++) {
		if (!strcmp(word[i], word[i - 1])) continue;
			printf("%s\n", word[i]);
	}
}
