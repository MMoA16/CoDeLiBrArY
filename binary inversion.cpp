#include <iostream>

using namespace std;

int main()
{
    long long int n;
    long long int a;
    long long int x;
    cin>>n>>a>>x;
    int arr[n];
    long long int i;
    for(i=0;i<a;i++){
        arr[i]=0;
    }
    for(i=a;i<n;i++){
        arr[i]=1;
    }
    long long int p=0;
    long long int q=x;
    long long int t;
    i=a-1;
    t=n-1;
     if(q>a*(n-a))
        cout<<-1;
    else{
    while(p!=q){
        x=i+x;
        if(x>=t){
            x=x-t;
            swap(arr[t],arr[i]);
            i=i-1;
            p=q-x;
        }
        else{
            swap(arr[x],arr[i]);
            p=p+(x-i);
        }
        t=t-1;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    }

}
