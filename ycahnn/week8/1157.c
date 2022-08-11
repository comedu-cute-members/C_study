#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char string[1000001];

void max(int* ptr)
{
	int max= 0, x=0;
	for (int i = 0; i < 26; i++)
	{
		if (ptr[i] > ptr[max])
			max = i;
	}
	for (int i = 0; i < 26; i++)
	{
		if (ptr[i] ==ptr[max])
			x++;
	}
	if (x > 1)
		printf("?");
	else
		printf("%c",max+65);
}

int main()
{
	int al[26] = { 0, };

	scanf("%s", string);
	for (int i = 0; i < strlen(string);i++)
	{
		for (int j = 65; j < 91; j++)
		{
			if (string[i] == j || string[i] == j + 32)
				al[j - 65]++;
		}
	}
	max(al);
}
