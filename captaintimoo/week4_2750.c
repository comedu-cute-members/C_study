#include <stdio.h>

int main()
{
    int arr[1000];
    int num;
    scanf("%d", &num);
    for (int a = 0; a < num; a++)
    {
        scanf("%d", &arr[a]);
    }
    for (int a = -1000; a <= 1000; a++)
    {
        for (int b = 0; b < num; b++) 
        {
            if (a == arr[b])
                printf("%d\n", arr[b]);
        }
    }
    return 0;
}
