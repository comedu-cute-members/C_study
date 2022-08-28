#include <stdio.h>

int main(){
    int set[] = {1, 1, 2, 2, 2, 8};
    int found[6] = {0, };
    
    for(int i=0;i<6;i++){
        scanf("%d", &found[i]);
    }
    
    for(int i=0;i<6;i++){
        printf("%d ", set[i]-found[i]);
    }
    
    return 0;
}