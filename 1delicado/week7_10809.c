#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char word[100] = { 0 }; // Declare each word as 0, each location as -1
	int location[26] = { 0 };
	for (int i = 0; i < 26; i++)
		location[i] = -1;

	scanf("%s", word); // Scan word
	
	for (int i = 0; i < 100; i++) // Change each location ONLY 1 time
		if(location[word[i]-97] == -1)
			location[word[i] - 97] = i;

	for (int i = 0; i < 26; i++) // Print location
		printf("%d ", location[i]);

	return 0;
}