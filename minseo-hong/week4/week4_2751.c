#include <stdio.h>
#include <stdlib.h>

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
    int size;
    
    scanf("%d", &size);
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, size, sizeof(int), compare);
    
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

