#include <stdio.h>

int a[1001], b[1001];

int main(){
    int n, ans=0;
    scanf("%d",&n);

    for(int i=1; i<=n; i++) scanf("%d",&a[i]);
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            if(a[i]>a[j] && b[i]<=b[j]){
                b[i]=b[j]+1;
                if(b[i]>ans) ans=b[i];
            }
        }
    }
    printf("%d",ans);

    return 0;
}
