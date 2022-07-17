#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main()
{
	int i, N, tmp, cnt;
	int* list;

	scanf("%d", &N);

	list = (int*)calloc(N, sizeof(int));

	for (i = 0, cnt = 0; i < N; i++)
	{
		scanf(" %d", &tmp);
		list[cnt++] = tmp;
	}

	qsort(list, cnt, sizeof(list[0]), compare);

	for (i = 0; i < cnt; i++)
	{
		if (i != 0 && list[i] == list[i - 1])
		{
			i += 1;
			continue;
		}
		printf("%d ", list[i]);
	}

	free(list);

	return 0;
}
