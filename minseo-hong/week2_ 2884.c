#include <stdio.h>

int main() {
    int h, m;
    
    scanf("%d %d", &h, &m);
    
    int dm = m - 45;
    
    if (dm < 0) {
        h -= 1;
        m = dm + 60;
        
        if (h < 0) {
            h += 24;
        }
    } else {
        m = dm;
    }
    
    printf("%d %d\n", h, m);
    
    return 0;
}
