#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 > num2) {
        return -1;
    } else if (num1 < num2) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int allPeople, prizedPeople;
    
    scanf("%d", &allPeople);
    scanf("%d", &prizedPeople);
    
    int scoreList[allPeople];
    
    for (int peopleIndex = 0; peopleIndex < allPeople; peopleIndex++) {
        scanf("%d", &scoreList[peopleIndex]);
    }
    
    qsort(scoreList, allPeople, sizeof(int), compare);
    
    printf("%d\n", scoreList[prizedPeople - 1]);
    
    return 0;
}
