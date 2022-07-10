#include <stdio.h>

int sum(int n)          
{
    int sum = n;
    
    while(n>0)
    {
        sum += n%10;
        n/=10;
    }
    return sum;
}


int main()
{
    int arr[10001], i, A;
    
    for(i=1; i<10001; i++)
    {
        A = sum(i);
        if(A <10001)       
            arr[A]=1;
    }
    
    for(i=1; i<10001; i++)
    {
        if(arr[i]!=1)          
            printf("%d\n", i);
    }
    return 0;
}
