#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int N;
    
    scanf("%d", &N);
    
    int A[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int LTS[N];
    
    LTS[0] = 1;
    
    for (int i = 1; i < N; i++) {
        LTS[i] = 1;
        
        for (int j = 0; j < i; j++) {
            if (A[i] > A[j]) {
                LTS[i] = max(LTS[i], LTS[j] + 1);
            }
        }
    }
    
    int max = 0;
    
    for (int i = 0; i < N; i++) {
        if (LTS[i] > max) {
            max = LTS[i];
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}
