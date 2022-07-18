#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int len;
    char str[51];
} Word;

int compare(const void *a, const void *b) {
    Word word1 = *(Word *)a;
    Word word2 = *(Word *)b;
    
    if (word1.len == word2.len) {
        return strcmp(word1.str, word2.str);
    } else if (word1.len > word2.len) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    int size;
    
    scanf("%d", &size);
    
    Word dict[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%s", dict[i].str);
        dict[i].len = (int)strlen(dict[i].str);
    }
    
    qsort(dict, size, sizeof(Word), compare);
    
    for (int i = 0; i < size; i++) {
        if (strcmp(dict[i].str, dict[i + 1].str)) {
            printf("%s\n", dict[i].str);
        }
    }
}
