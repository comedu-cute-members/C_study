#include <stdio.h>
#include <string.h>

int main(){
    char word[1000001];
    int alphabet[26] = {0,};
    
    scanf("%s", &word);
    
    for(int i=0;i<strlen(word);i++){
        if(word[i] >= 97) word[i] = word[i] - 32;
        alphabet[word[i]-65]++;
    }
    
    int max1 = -1;
    int max2 = -1;
    int maxIndex1 = -1; 
    int maxIndex2 = -1;
    for(int i=0;i<26;i++){
        if(alphabet[i] > max1){
            max2 = max1;
            maxIndex2 = maxIndex1;
            max1 = alphabet[i];
            maxIndex1 = i;
        }else if(alphabet[i] > max2){
            max2 = alphabet[i];
            maxIndex2 = i;
        }
    }

    if(max1 == max2){
        printf("?");
    }else{
        printf("%c", maxIndex1 + 65);
    }
    
    return 0;
}