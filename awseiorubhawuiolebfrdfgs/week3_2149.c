#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	char key[11], skey[11], table[10][101], stable[10][101], cyp[101];
	int plen=0, klen = 0, loc[10], temp, tempi, len;

	scanf("%s", skey);
	scanf("%s", cyp);

	while (cyp[plen] != 0)
	{
		plen++;
	}
	while (skey[klen] != 0)
	{
		klen++;
	}
	for (int i = 0; i < klen; i++)
	{
		loc[i] = i;
	}
	strncpy(key, skey, klen + 1);

	for (int i = 0; i < klen - 1; i++)
	{
		for (int j = 0; j < klen - 1 - i; j++)
		{
			if (skey[j] > skey[j + 1])
			{
				temp = skey[j];
				skey[j] = skey[j + 1];
				skey[j + 1] = temp;

				tempi = loc[j];
				loc[j] = loc[j + 1];
				loc[j + 1] = tempi;
			}
		}
	}

	len = plen / klen;
	
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < klen; j++)
			table[i][j] = cyp[len * j + i];
	}
	

	for (int i = 0; i < klen; i++)
	{
		for (int j = 0; j < len; j++)
		{
			for (int k = 0; k < klen; k++)
			{
				if (loc[k] == i)
					stable[j][i] = table[j][k];
			}
		}
	}
	
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < klen; j++)
			printf("%c", stable[i][j]);

	}
}