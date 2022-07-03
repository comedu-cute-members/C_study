#include <stdio.h>

int main() {
    int inputNum, startNum, endNum;
    endNum = -1;
    
    int cycle = 0;
    
    scanf("%d", &inputNum);
    
    startNum = inputNum;
    
    while (inputNum != endNum) {
        if (endNum != -1) {
            startNum = endNum;
        }
        
        if (startNum < 10) {
            endNum = startNum * 10 + startNum;
        } else {
            endNum = (startNum % 10) * 10 + (startNum / 10 + startNum % 10) % 10;
        }
        
        cycle++;
    }
    
    printf("%d\n", cycle);
    
    return 0;
}
