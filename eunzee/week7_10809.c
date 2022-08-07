#include <stdio.h>
#include <string.h>

int main(){
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char S[101];
    
    scanf("%s", &S);
    
    int exists = 0;
    for(int i=0;i<26;i++){
        exists = 0;
        for(int j=0;j<strlen(S);j++){
            if(alphabet[i]==S[j]){
                printf("%d ", j);
                exists = 1;
                break;
            }
        }
        if(exists == 0){
            printf("%d ", -1);
        }
    }
}