#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int cpr(char a[], char b[]) {
    if(strlen(a) > strlen(b)) return 1;
    else if(strlen(a) < strlen(b)) return -1;

    return strcmp(a, b);
}


int main() {
    int n;
    scanf("%d", &n);
    char arr[20000][51];

    for(int i=0; i<n; i++) scanf("%s", &arr[i]);

    qsort(arr, n, sizeof(arr[0]), cpr);

    for(int j=0; j<n; j++) {
        if(strcmp(arr[j], arr[j-1])==0) continue;
        printf("%s\n", arr[j]);
    }


    return 0;
}
