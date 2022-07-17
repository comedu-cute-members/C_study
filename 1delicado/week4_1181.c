#define _CRT_SECURE_NO_WARNINGS
#define MAX 20000

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct //'one word' in 'one structure'
{
	char str[51];
	int length;
}vocabulary;

vocabulary word[MAX];

int compare(const void* word1, const void* word2)
{
	vocabulary voc1 = *(vocabulary*)word1, voc2 = *(vocabulary*)word2;
	if (voc1.length < voc2.length)
		return -1;
	else if (voc1.length > voc2.length)
		return 1;
	else
		return strcmp(voc1.str, voc2.str);
}

int main(void)
{
	int N=0; //Input
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", word[i].str);
		word[i].length = strlen(word[i].str);
	}

	qsort(word, N, sizeof(vocabulary), compare); //<stdlib.h> qsort: quick sort function

	puts(word[0].str); //Output
	for (int i = 1; i < N; i++)
		if (strcmp(word[i - 1].str, word[i].str))
			puts(word[i].str);

	return 0;
}