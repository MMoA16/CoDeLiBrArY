#include <iostream>

using namespace std;

int bit[10]={0};
void update(int i,int val,int n){
    while(i<=n){
        bit[i]=bit[i]+val;
        i+=i&-i;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=1;i<=n;i++){
        cin>>a[i];
        update(i,a[i],n);
    }
    int q;
    int sum=0;
    cin>>q;
    for(;q>0;q-=q&-q)
        sum=sum+bit[q];
    cout<<sum<<endl;
}
