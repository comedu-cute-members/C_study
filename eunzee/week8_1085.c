#include <stdio.h>

#define min(x, y) (x) < (y) ? (x) : (y)

int main(){
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    int x_direction = min(x, w-x);
    int y_direction = min(y, h-y);
    
    printf("%d", min(x_direction, y_direction));
    
    return 0;
}