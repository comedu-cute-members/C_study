#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int len;
	char str[51];
}Word;

int compare(const void* first, const void* second)
{
	Word *a = (Word*)first;
	Word *b = (Word*)second;

	if (a->len < b->len)
		return -1;
	else if (a->len > b->len)
		return 1;
	else if (a->len == b->len)
	{
		if (strcmp(a->str, b->str) < 0)
			return -1;
		else
			return 1;
	}
	return 0;
}

int main()
{
	int i, j, n;
	Word* text;

	scanf("%d", &n);

	text = (Word*)calloc(n + 1, sizeof(Word));

	for (i = 0; i < n; i++)
	{
		scanf(" %s", text[i].str);
		text[i].len = strlen(text[i].str);

		/*중복 제거*/
		for (j = 0; j < i; j++)
		{
			if (strcmp(text[i].str, text[j].str) == 0) 
			{
				i -= 1;
				n -= 1;
				break;
			}
		}
	}

	qsort(text, n, sizeof(text[0]), compare);

	for (i = 0; i < n; i++)
	{
		printf("%s\n", text[i].str);
	}

	return 0;
}
