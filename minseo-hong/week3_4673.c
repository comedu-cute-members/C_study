#include <stdio.h>

int getUnit(int num, int dec) {
    int unit = (num % (dec * 10)) / dec;
    
    return unit;
}

int main() {
    int selfNums[10000], len = 10000;

    for (int i = 0; i < len; i++) {
        selfNums[i] = i + 1;
    }

    for (int i = 0; i < len; i++) {
        int sum = 0, num = i + 1;
        
        sum += num;
        
        for (int dec = 1; dec <= len; dec *= 10) {
            if (num < dec) {
                break;
            } else {
                int unit = getUnit(num, dec);
                
                sum += unit;
            }
        }
        
        if ((sum <= len) && (selfNums[sum - 1] != 0)) {
            selfNums[sum - 1] = 0;
        }
    }
    
    for (int i = 0; i < 10000; i++) {
        if (selfNums[i] != 0) {
            printf("%d\n", selfNums[i]);
        }
    }
    
    return 0;
}
