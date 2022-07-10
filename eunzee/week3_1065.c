#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    
    if(N<100){
        printf("%d", N);
    }else{
        int count = 99;
        for(int i=100;i<=N;i++){
            if((i/100-(i/10)%10)==((i/10)%10-i%10)){
                count++;
            }
        }
        printf("%d", count);
    }
    return 0;
}