#include <stdio.h>
#include <string.h>
int q;
void merge(int a[], int low, int mid, int hight)    
{
	int b[q];
	int i = low;       
	int j = mid + 1;   
	int k = 0;          
 
	while(i <= mid && j <= hight)
	{
		if(a[i] <= a[j])      
			b[k++] = a[i++];
		else
			b[k++] = a[j++];
	}
	while(i <= mid)           
		b[k++] = a[i++];
	while(j <= hight)           
		b[k++] = a[j++];
	k--;
 
	while(k >= 0)              
	{
		a[low + k] = b[k];
		k--;
	}
}
void mergeSort(int a[], int low, int hight)    
{
 
	int mid;
	if(low < hight)
	{
		mid = (low + hight) / 2;
		mergeSort(a, low, mid);            
		mergeSort(a, mid + 1, hight);      
		merge(a, low, mid, hight);         
	}
}
int main(void)
{
	
 	
	scanf("%d", &q);
	int numbers[q];
	
	for(int i=0;i<q;i++){
		scanf(" %d", &numbers[i]);
	}
	mergeSort(numbers, 0, q-1);    //배열의 요소를 분할하는 함수
 
    for(int i = 0; i < q; i++){
    	printf("%d\n", numbers[i]);
	}
	return 0;
}
