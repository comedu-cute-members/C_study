#include <stdio.h>
#include <stdlib.h>
int main() {
	char s[101];
	scanf_s("%s", s);

	for (int i = 'a'; i <= 'z'; i++)
	{
		int j = 0;
		while (s[j] != 0)
		{
			if (s[j] == (char)i)
				break;
			else
				j++;
		}
		if (s[j] == (char)i)
			printf("%d ", j);
		else
			printf("-1 ");
	}
	return 0;
}