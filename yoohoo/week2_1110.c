#include <stdio.h>
int main(){
    int a, b=0, i=0;
    
    scanf("%d",&a);
    
    b = a;
    
    while(1){
        if (b < 10){
            b = b*11;
            i = i+1;
            if(a == b)
                break;
        }
        
        else if (b >= 10){
            b = (b/10 + b%10)%10 + (b%10)*10;
            i = i+1;
            if(a == b)
                break;
        }
        
    }
    printf("%d",i);
    return 0;
}
