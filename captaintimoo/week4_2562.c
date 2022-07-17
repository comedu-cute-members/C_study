#include  <stdio.h>

int main() 
{
	int arr[9];
	int *p = arr;
	int max = 0;
	int num = 0;
	
	for (int i = 0; i < 9; i++) 
  {
		scanf("%d", &p[i]);
		if (max < p[i]) {
			max = p[i];
			num = i + 1;
		}
	}
	
  printf("%d\n", max);
	printf("%d\n", num);
	
  return 0;
}
