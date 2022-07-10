#include <stdio.h>
#include <string.h>

int main() {
	char key[11];
	char scode[101];
	char chart[11][11];

	scanf_s("%s", key, sizeof(key));
	scanf_s("%s", scode, sizeof(scode));

	int key_len = strlen(key);
	int scode_len = strlen(scode);
	int count = 0;

	int key_num[11] = { 0 };

	for (int i = 0; i < key_len; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (key[i] >= key[j])
				key_num[i]++;
			else
				key_num[j]++;
		}

	}

	for (int i = 0; i < key_len; i++)
	{
		for (int j = 0; j < scode_len/key_len; j++)
		{
			chart[j][i] = scode[count];
			count++;
		}
	}

	for (int k = 0; k < scode_len / key_len; k++)
	{
		for (int t = 0; t < key_len; t++)
		{
			printf("%c", chart[k][key_num[t]]);
		}
	}
	return 0;
}