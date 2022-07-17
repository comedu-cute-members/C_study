#include <stdio.h>

int main(){
    int n;
    int temp;
    scanf("%d\n", &n);
    int arr[1000]={0,};
    for(int i=0;i<n;i++){
        scanf("%d\n", &arr[i]);
    }
    
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
  
    for(int i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
}
