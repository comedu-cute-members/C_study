#include <stdio.h>
int main() {

	int c, n;
	scanf_s("%d", &c);

	for (int j = 0; j < c; j++)
	{
		scanf_s("%d\n", &n);
		int score[1000], sum = 0;
		
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d ", &score[i]);
			sum += score[i];
		}
		double avr = (double) sum / n;
		int count = 0;
		for (int k = 0; k < n; k++)
		{
			if (score[k] > avr)
				count++;
		}
			printf("%.3lf%%\n", (double)count*100/n);
	}
	return 0;
}