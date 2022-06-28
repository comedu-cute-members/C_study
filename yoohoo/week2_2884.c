#include <stdio.h>
int main(){
    int H,M;
    scanf("%d %d",&H,&M);
    if (M >= 45){
        printf("%d %d",H,M-45);
    }
    else if (M <45){
        if(H>=1){
            printf("%d %d",H-1,M+15);
        }
        else if(H==0){
            printf("%d %d",23,M+15);
        }
    }
    return 0;
}
