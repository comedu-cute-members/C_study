#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    
    if (num1 > num2) {
        return 1;
    } else if (num1 < num2) {
        return -1;
    } else {
        return 0;
    }
}

int main(void) {
    const int SIZE = 9;
    
    int arr[SIZE], rawArr[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &rawArr[i]);
    }
    
    memcpy(arr, rawArr, sizeof(int) * SIZE);
    
    qsort(arr, SIZE, sizeof(int), compare);
    
    for (int i = 0; i < SIZE; i++) {
        if (rawArr[i] == arr[SIZE - 1]) {
            printf("%d\n", rawArr[i]);
            printf("%d\n", i + 1);
        }
    }
}



