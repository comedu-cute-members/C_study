#include <stdio.h>

int main(){
    int n,x,q;
    scanf("%d %d", &n, &x);
    for(int i=0; i < n; i++){
        scanf("%d", &q);
        if(q < x){
            printf("%d ", q);
        }
    }
}