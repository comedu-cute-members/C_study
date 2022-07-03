#include <stdio.h>
int main() {

    int N, X, A[10000];
    scanf_s("%d %d", &N, &X);

    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &A[i]);
    }

    for (int j = 0; j < N; j++)
    {
        if (A[j] < X)
            printf("%d ", A[j]);
    }
    return 0;
}