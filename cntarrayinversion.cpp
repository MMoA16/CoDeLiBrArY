#include <iostream>
#include<math.h>
using namespace std;

int bit[10]={0};
void update(int i,int val,int n){
    while(i<=n){
        bit[i]=bit[i]+val;
        i+=i&-i;
    }
}
int sum(int q){
    int sum1=0;
    for(;q>0;q-=q&-q)
        sum1=sum1+bit[q];
    return sum1;
}
int max(int a[],int n){
    int t=a[1];
    int i;
    for(i=1;i<=n;i++){
        if(t<a[i])
            t=a[i];
    }
    return t;
}
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int a[n];
    int i;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    maxim=max(a,n)
    int b[maxim]={0};
    for(i=1;i<=n;i++){
    
    if(sum(maxim)>sum(a[i])){
        cnt=cnt+(sum(maxim)-sum(a[i]));
    }
    b[a[i]]=1;
    update(a[i],b[a[i]],max(a,n));
    }
    cout<<cnt<<endl;

}
