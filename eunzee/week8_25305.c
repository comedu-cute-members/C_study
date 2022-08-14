#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    if (*(int *)a > *(int *)b)
        return -1;
    if (*(int *)a < *(int *)b)
        return 1;
    return 0;
}

int main(){
    int N, k;
    scanf("%d %d", &N, &k);
    
    int score[N];
    for(int i=0;i<N;i++){
        scanf("%d", &score[i]);
    }
    
    qsort(score, sizeof(score)/sizeof(int), sizeof(int), compare);
    
    printf("%d", score[k-1]);
    
    return 0;
}