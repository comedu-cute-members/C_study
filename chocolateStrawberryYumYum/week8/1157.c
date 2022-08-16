#include <stdio.h>
#include <string.h>

char a[1000005];
int arr[26];

int main(){
    
    int max = 0, n;
    char ans;

    scanf("%s", a);
    n = strlen(a);

    for(int i = 0; i < n; i++){
        if(a[i] >= 'a') arr[a[i] - 'a']++;
        else arr[a[i] - 'A']++;
    }
    
    for(int i = 0; i < 26; i++){
        if(arr[i] == max){
            ans = '?';
        }
        else if(arr[i] > max){
            max = arr[i];
            ans = 'A' + i;
        }
    }
    
    printf("%c", ans);

    
    return 0;
}
