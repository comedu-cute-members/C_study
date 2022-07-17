#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include < string.h>

char arr[20000][51]={0,};

int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", arr[i]);
	}
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (strcmp(arr[j], arr[j + 1]) > 0)
			{
				char temp[51] = { 0, };
				strcpy(temp, arr[j]);
				strcpy(arr[j], arr[j + 1]);
				strcpy(arr[j + 1], temp);
			}
		}
	}
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (strlen(arr[j]) > strlen(arr[j + 1]))
			{
				char temp[51] = { 0, };
				strcpy(temp, arr[j]);
				strcpy(arr[j], arr[j + 1]);
				strcpy(arr[j + 1], temp);
			}
		}
	}
			for (int i = 0; i < N; i++)
			{
				if (!strcmp(arr[i], arr[i - 1])) 
					continue;
				printf("%s\n", arr[i]);
			}
			return 0;
}
