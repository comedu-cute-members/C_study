#include <stdio.h>
#include <stdlib.h>

int num[1000000] = {0,};

int compare(const void *a, const void *b)
{
    if (*(int *)a > *(int *)b)
        return 1;
    else if (*(int *)a < *(int *)b)
        return -1;
    else
        return 0;
}


int main()
{
    int A;

    scanf("%d", &A);
    for (int i = 0; i < A; i++)
        scanf("%d", &num[i]);
    qsort(num, A, sizeof(int), compare);

    for (int i = 0; i < A; i++)
        printf("%d\n", num[i]);
    return 0;
}
