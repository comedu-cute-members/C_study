#include <stdio.h>
#include <string.h>

int main(){
    
    int repeat;
    scanf("%d", &repeat);
    
    while(repeat>0){
        char ox[80];
        scanf("%s", ox);
        
        int score = 0;
        int combo = 1;
        for(int i=0;i<strlen(ox);i++){
            if(ox[i]=='O'){
                score += combo++;
            }else if(ox[i]=='X'){
                combo = 1;
            }
        }
        printf("%d\n", score);
  
        repeat--;
    }
    
    return 0;
}