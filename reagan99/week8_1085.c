#include <stdio.h>

int main(int argc, char** argv) {
	int x,y,w,h;
	int ans[4]={0};
	
	int temp;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	
	ans[0]=x;
	ans[1]=y;
	ans[2]=w-x;
	ans[3]=h-y;
	
	for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3 - i; j++){
            if (ans[j] > ans[j + 1]){
                temp        = ans[j];
                ans[j]     = ans[j + 1];
                ans[j + 1] = temp;
            }
        }
    }
    printf("%d",ans[0]);
	return 0;
}
