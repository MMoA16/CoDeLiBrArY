#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  if((n&n-1)==0)
    printf("YES");
  else
    printf("NO");
}
