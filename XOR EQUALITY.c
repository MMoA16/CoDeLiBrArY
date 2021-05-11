#include<stdio.h>
#include<math.h>
#define MODVAL 1000000007
long long int res(long long int x,long long int n,long long int mod){
    n = n % mod;
  long long int p=1;
  while(n>0){
    if(n&1)
      p=(p*x)%mod;
    n>>=1;
    x=(x*x)%mod;
  }
  return p;
}
int main(){
  long long int n;
  scanf("%d",&n);
  long long int p;
  p=res(2,n-1,MODVAL);
  printf("%d",p);
  return 0;
}
