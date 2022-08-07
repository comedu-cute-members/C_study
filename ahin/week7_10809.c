#include <stdio.h>

int main(void)
{
	int alpha[26];
	char S[100];
	scanf("%s", S);
	int i, j;
	
	for (int i = 0; i < 26; i++)
		alpha[i] = -1;
	for (i = 97; i <= 122; i++)
	{
		for (j = 0; j < strlen(S); j++)
		{
			if (S[j] == i)
			{
				alpha[S[j] - 'a'] = j;
				break;
			}
		}
	}
	for (i = 0; i < 26; i++) {

		printf("%d ", alpha[i]);

	}
}
