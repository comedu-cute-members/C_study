#include <stdio.h>

int main() {
    int coinTypeAmount, money;
    
    scanf("%d", &coinTypeAmount);
    scanf("%d", &money);
    
    int coinType[coinTypeAmount];
    
    for (int index = 0; index < coinTypeAmount; index++) {
        scanf("%d", &coinType[index]);
    }
    
    int coinsTotalAmount = 0;
    
    for (int index = coinTypeAmount - 1; index >= 0; index--) {
        int coinAmount = money / coinType[index];
        
        coinsTotalAmount += coinAmount;
        
        money -= coinAmount * coinType[index];
    }
    
    printf("%d\n", coinsTotalAmount);
    
    return 0;
}
