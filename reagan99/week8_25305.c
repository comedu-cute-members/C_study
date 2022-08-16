#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int compare(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;    // 내림차순
}
int main(int argc, char** argv) {
	int a,b;
	scanf("%d %d",&a ,&b);
	int score[1000] ={0};
	
	for(int i=0;i<a;i++) scanf("%d",&score[i]);
	
	qsort(score, sizeof(score) / sizeof(int), sizeof(int), compare);
	printf("%d",score[b-1]);
	return 0;
}
