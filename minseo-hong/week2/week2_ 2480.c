#include <stdio.h>

int main() {
    int num[3] = {0, 0, 0};
    
    int n = 0;
    int x = 0;
    
    int result;
    
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    
    if (num[0] == num[1]) {
        n++;
        x = num[0];
    }
    
    if (num[1] == num[2]) {
        n++;
        x = num[1];
    }
    
    if (num[0] == num[2]) {
        n++;
        x = num[2];
    }
    
    if (n == 0) {
        for (int i = 0; i < 3; i++) {
            if (x < num[i]) {
                x = num[i];
            }
        }
    }
    
    if (n == 3) {
        result = 10000 + x * 1000;
    } else if (n == 1){
        result = 1000 + x * 100;
    } else {
        result = x * 100;
    }
    
    printf("%d\n", result);
    
    return 0;
}
