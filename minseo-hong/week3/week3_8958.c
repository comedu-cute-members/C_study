#include <stdio.h>

int main() {
    int testcase, scores[100];
    
    scanf("%d", &testcase);
    
    for (int i = 0; i < testcase; i++) {
        int score = 0, tmp = 0, n = 0;
        char input[80];
        
        scanf("%s", input);
        
        while(1) {
            if (input[n] == 'O') {
                tmp++;
            } else if (input[n] == 'X') {
                tmp = 0;
            } else {
                break;
            }
            
            score += tmp;
            
            n++;
        }
        
        scores[i] = score;
    }
    
    for (int i = 0; i < testcase; i++) {
        printf("%d\n", scores[i]);
    }
    
    return 0;
}
