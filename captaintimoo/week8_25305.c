#include <stdio.h>

int main()
{
	int a,b;
	int score[1000] = { 0 };
	int temp = 0;
	int cut_off = 0;

	scanf("%d %d", &a, &b);
	
    for (int i = 1; i < a+1; i++)
		scanf("%d", &score[i]);

	for (int i = 1; i < a+1; i++) 
		for (int j = i + 1; j < a+1; j++)
			if (score[i] < score[j])
			
            {
				temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}

	
    cut_off = score[b];
	printf("%d", cut_off);

	return 0;
}
