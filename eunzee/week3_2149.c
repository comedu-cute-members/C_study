#include <stdio.h>
#include <string.h>

int main(){
    char key[11];
    char code[101];
    scanf("%s", key);
    scanf("%s", code);
    
    int column = strlen(code)/strlen(key);
    int keyArray[strlen(key)];
    char codeArray[strlen(key)][column];
    int index[strlen(key)];  //{0, 1, 2, ...}
    for(int i=0;i<strlen(key);i++){
        keyArray[i] = (int)key[i]; //key to ascii
        for(int j=0;j<column;j++) codeArray[i][j] = code[i*column+j];
        index[i] = i;
    }
    
    //bubble
    int temp1, temp2;
    for(int i=0;i<strlen(key);i++){
        for(int j=0;j<strlen(key)-1;j++){
            if(keyArray[j] > keyArray[j+1]){
                temp1 = keyArray[j+1];
                temp2 = index[j+1];
                keyArray[j+1] = keyArray[j];
                index[j+1] = index[j];
                keyArray[j] = temp1;
                index[j] = temp2;
            }
        }
    }
    
    for(int k=0;k<column;k++){
        for(int i=0;i<strlen(key);i++){
            for(int j=0;j<strlen(key);j++){
                if(index[j] == i){
                    printf("%c", codeArray[j][k]);
                }
            }
        }
    }
    
    return 0;
}
