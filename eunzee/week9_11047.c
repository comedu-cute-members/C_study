#include <stdio.h>

int main(){
    int N, money;
    scanf("%d %d", &N, &money);
    int A[N];
    
    for(int i=0;i<N;i++){
        scanf("%d", &A[i]);
    }
    
    int count = 0;
    for(int i=N-1;i>=0;i--){
        count += money / A[i];
        money -= (money / A[i])*A[i];
    }
    
    printf("%d", count);
    
    return 0;
}