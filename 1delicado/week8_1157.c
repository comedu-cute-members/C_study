#define _CRT_SECURE_NO_WARNINGS

#define MAX 1000000
#define ASCII_A 65
#define ASCII_Z 90
#define ASCII_a 97

#include <stdio.h>

char word[MAX] = { 0 };

int main(void)
{
	int count_alphabet[26] = { 0 };
	int alphabet_order = 0;
	int max_alphabet_order = 0;
	int output = 0;
	
	scanf("%s", word);

	for (int i = 0; i < MAX; i++) // Count how many each alphabets are used
	{
		if (word[i] >= ASCII_A && word[i] <= ASCII_Z)
			alphabet_order = word[i] - ASCII_A;
		else
			alphabet_order = word[i] - ASCII_a;

		count_alphabet[alphabet_order] += 1;
	}

	for (int i = 0; i < 26; i++) // Find the most used alphabet
		if (count_alphabet[max_alphabet_order] <= count_alphabet[i])
			max_alphabet_order = i;

	output = max_alphabet_order + ASCII_A;
	for (int i = (max_alphabet_order - 1); i > -1; i--)
	{
		if (count_alphabet[max_alphabet_order] == count_alphabet[i])
		{
			output = 63; // Print "?"
			break;
		}
	}
	printf("%c", output);

	return 0;
}