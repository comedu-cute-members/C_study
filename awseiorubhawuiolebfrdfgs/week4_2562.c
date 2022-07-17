#include <stdio.h>

int main(void)
{
    int a[9];
    int max_number;
    int max_index = 0;
    
    for(int i= 0; i<9;i++)
    {
        scanf("%d",&a[i]);
    }
    max_number = a[0];
    
    for(int i=0;i<9;i++)
    {
        if(max_number<a[i])
        {   max_number = a[i];
         max_index = i;
        }
    
      
    }
    printf("%d %d",max_number,max_index+1);
    
    
    return 0;
}