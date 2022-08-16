#include <stdio.h>

int a[1001];

int main(){
	int n,k,c;
	scanf("%d %d",&n,&k);
	
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
	}
	printf("%d",a[k]);
	
  return 0;
}
