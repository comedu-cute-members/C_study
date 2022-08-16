#include <stdio.h>
#include <string.h>

#define NUMBER_OF_ALPHABETS 26
#define LETTER_MAX_LENGTH 1000000

#define ASCII_A 65
#define ASCII_Z 90
#define ASCII_a 97
#define ASCII_z 122

int main(void) {
    int alphabetCountList[NUMBER_OF_ALPHABETS] = {0};
    
    char letter[LETTER_MAX_LENGTH];
    
    scanf("%s", letter);
    
    int length = (int)strlen(letter);
    
    for (int index = 0; index < length; index++) {
        int ascii = letter[index];
        
        if (ascii >= ASCII_a && ascii <= ASCII_z) {
            alphabetCountList[ascii - ASCII_a] += 1;
        } else if (ascii >= ASCII_A && ascii <= ASCII_Z) {
            alphabetCountList[ascii - ASCII_A] += 1;
        }
    }
    
    int maxAlphabetCount = alphabetCountList[0];
    int maxAlphabetIndex = 0;
    
    for (int index = 1; index < NUMBER_OF_ALPHABETS; index++) {
        if (alphabetCountList[index] > maxAlphabetCount) {
            maxAlphabetCount = alphabetCountList[index];
            maxAlphabetIndex = index;
        } else if (alphabetCountList[index] == maxAlphabetCount) {
            maxAlphabetIndex = -1;
        }
    }
    
    if (maxAlphabetIndex == -1) {
        printf("?\n");
    } else {
        printf("%c\n", ASCII_A + maxAlphabetIndex);
    }
    
    return 0;
}
