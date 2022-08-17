#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	char word[1000000];
	char a='A';
	int k=0;
	int m=0;
	int cnt2[26]={0};
	int cnt3[27]={0};
	char cnt[26]={0};
	int temp;
	
	scanf("%s",word);
	int len = strlen(word);
	for(int i=0;i<26;i++){ //  
		cnt[i]=a;
		a++;
	} 
	for(int i=0; i<len;i++){
		if(int(word[i])>=97) word[i]= int(word[i])-32;//전부대문자로
	}
	
	for(int i=0; i<26;i++){
		for(int j=0;j<len;j++){
			if(cnt[i]==word[j]){
				cnt2[i]=++k;
				cnt3[i]=++m;
			} 
		}
		k=0;
		m=0;
	}
    for (int i = 0; i < 26; i++){
        for (int j = 0; j < 25; j++){   
            if (cnt2[j] < cnt2[j + 1]){          
                temp = cnt2[j];
                cnt2[j] = cnt2[j + 1];
                cnt2[j + 1] = temp;           
            }
        }
    }
    
	if(cnt2[0]==cnt2[1]){
		printf("?");
	}
	else{
		for(int i=0;i<26;i++){
			if(cnt3[i]==cnt2[0]){
				printf("%c",i+65);
			}
		}
	}
	
	return 0;
}
