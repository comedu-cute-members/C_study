# include <stdio.h>

int* insert_sort(int arr[], int len){
   for (int i=1; i<len; i++){
        int number = arr[i];
        for (int j=i-1; j>=0; j--){
            int tmp = arr[j];
            if (tmp > number){
                arr[j+1] = tmp;
                arr[j] = number;
            }
            else{
                arr[j+1] = number;
                break;
            }
        }
   }
   return arr;
}

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i=0; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    int* sorted =  insert_sort(arr, n);

    for (int j=0; j<n; j++){
        printf("%d\n", arr[j]);
    }

    return 0;
}