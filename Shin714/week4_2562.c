#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char num[9] = { 0, };
	char* pnum = num;
	char i = 0, max = 0, maxth;
  
	for (; i < 9; i++) {
		scanf("%d", &pnum[i]);
    
		if (max < pnum[i]) {
			max = pnum[i];
			maxth = i + 1;
		}
	}
  
	printf("%d\n%d", max, maxth);

}
