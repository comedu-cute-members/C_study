#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	int a;
	char temp1[51], temp2[51];
	int len;
	scanf("%d", &a);
	int n=1;
	char word[a][51];
	char word2[a][51];
	for (int i=0;i<a;i++){
		scanf("%s",&word[i]);
	}

	
	for(int i=0;i<a-1;i++){ //알파벳 정렬  
		for(int j=i+1;j<a;j++){
			if(strcmp(word[i],word[j])>0){
				strcpy(temp1, word[i]);
				strcpy(word[i],word[j]);
				strcpy(word[j],temp1);
			}
		}
	}

	for(int i=0; i<a;i++){//길이 정렬  
		for(int j=0; j<a-i;j++){
			if(strlen(word[j])>strlen(word[j+1])){
				strcpy(temp2, word[j]);
				strcpy(word[j],word[j+1]);
				strcpy(word[j+1],temp2);
			}
		}
	}
	
	for(int i=0; i<a+1;i++){
		if(strcmp(word[i],word[i+1])==0) continue;
		printf("%s\n",word[i]);
	}
	
	return 0;
}
