#include <stdio.h>

int main(){
    int num, cycle = 0;
    scanf("%d", &num);
    
    int new_num = num;
    
    while(1){
        int temp_num = new_num/10 + new_num%10;
        new_num = (new_num % 10) * 10 + (temp_num % 10);
        cycle++;
        
        if(num == new_num){
            printf("%d", cycle);
            break;
        }
    }
    
    return 0;
}