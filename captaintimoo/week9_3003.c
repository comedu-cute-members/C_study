#include <stdio.h>


int main() 
{
    int i=0, a, b[6]={1,1,2,2,2,8};
    
    for(i=0; i<6; i++) {
        scanf("%d", &a);   //발견한 흰색 피스 개수
        printf("%d ", b[i]-a);
    }
    return 0;

}
