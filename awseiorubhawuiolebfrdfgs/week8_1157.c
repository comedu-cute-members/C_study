#include <stdio.h>

int main(void) {
char n[1000000];
int i,k,a[26]={0,},m1=0,m2=0;
scanf("%s",n);
for(i=0;n[i]!=0;i++){
  if(96<n[i]){
    n[i]-=32;
  }
  a[n[i]-65]++;
}
for(i=0;i<26;i++){
  if(m1<=a[i]){
    m2=m1;
    m1=a[i];
    k=i;
  }
}
if(m1==m2){
  printf("?");
}
else if(m1!=m2){
  printf("%c",k+65);
}
return 0;
}