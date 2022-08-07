#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	
	char word[101];
	scanf("%s",word);
	int num[26];
	
	for (int i=0; i<26;i++) num[i]=-1;
	
	for(int i=0; i<strlen(word);i++){
		
		int out = int(word[i])-97;
		
		if (num[out] == -1)
			num[out] = i;

	}
	for (int i=0; i<26;i++) printf("%d ",num[i]);
	
	return 0;
}
