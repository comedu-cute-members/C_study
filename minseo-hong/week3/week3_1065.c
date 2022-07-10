#include <stdio.h>

int getUnit(int num, int dec) {
    int unit = (num % (dec * 10)) / dec;
    
    return unit;
}

int main() {
    int max, amount = 0;
    
    scanf("%d", &max);
    
    for (int i = 0; i < max; i++) {
        int num = i + 1;
        
        if ((num < 100) || (num % 111 == 0)) {
            amount++;
        } else if (num == 1000) {
            continue;
        } else {
            int units[3] = {
                getUnit(num, 100),
                getUnit(num, 10),
                getUnit(num, 1)
            };
            
            if (2 * units[1] == units[0] + units[2]) {
                amount++;
            }
        }
    }
    
    printf("%d\n", amount);
    
    return 0;
}
