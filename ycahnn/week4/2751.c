#include <stdlib.h>
int arr[1000000];
int main()
{
	int num;
	scanf("%d", &num);

	
	
	for (int i = 0; i < num; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < num; i++)
		printf("%d\n", arr[i]);
	
	return 0;
}
