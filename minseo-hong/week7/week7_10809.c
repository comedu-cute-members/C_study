#include <stdio.h>
#include <string.h>

#define ASCII_A 97
#define ASCII_Z 122

#define TRUE 1
#define FALSE 0

int main(void) {
    char word[100] = {};
    
    scanf("%s", word);
    
    for (int ascii = ASCII_A; ascii <= ASCII_Z; ascii++) {
        int isFinded = FALSE;
        
        for (int index = 0; index < strlen(word); index++) {
            if (word[index] == ascii) {
                printf("%d ", index);
                
                isFinded = TRUE;
                
                break;
            }
        }
        
        if (isFinded == FALSE) {
            printf("%d ", -1);
        }
    }
    
    return 0;
}
