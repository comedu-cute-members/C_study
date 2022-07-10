#include <stdio.h>

int main() {
    int a , b;
    int isEnded = 0;
    
    while (!isEnded) {
        scanf("%d %d", &a, &b);
        
        if (a == 0 && b == 0) {
            isEnded = 1;
        } else {
            printf("%d\n", a + b);
        }
    }
    
    return 0;
}
