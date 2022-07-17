#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	int alen = strlen(a);
	int blen = strlen(b);

	if (alen == blen)
		return strcmp((char*)a, (char*)b);
	else if (alen > blen)
		return 1;
	else
		return -1;
	return 0;
}

int main() {
	int n;
	scanf_s("%d", &n);

	char word[n][51];
	
	for (int i = 0; i < n; i++)
	{
		scanf_s("%s", word+i);
	}

	qsort(word, n, sizeof(word[0]), compare);

	for (int j = 0; j < n; j++)
	{
		if (strcmp(word + j, word + j + 1))
			printf("%s\n", word + j);
		else
			continue;
	}
	return 0;
}