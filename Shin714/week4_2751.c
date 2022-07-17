#include<stdio.h>
int N, t;
int a[2000001] = { 0, };
int main(){
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%d",&t);
        a[t+1000000]=1;
    }
    for (int i = 0; i <= 2000000; i++) if (a[i]) printf("%d\n", i-1000000);
}
