#include <stdio.h>
int main()
{
    int arr[9]={0,};
    int *ptr;
    int max=0;
    int p=0;
    ptr = &arr;
    
    for(int i=0; i < 9; i++)
    {
        scanf("%d\n",&arr[i]);
        if(max < arr[i])
        {
            max = ptr[i];
            p = i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",p+1);
    
    return 0;
}
