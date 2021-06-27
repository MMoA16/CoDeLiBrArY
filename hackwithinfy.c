#include<stdio.h>
int divi(int p){
    int i;
    int sum=0;
    for(i=1;i<=p/2;i++)
        if(p%i==0)
            sum=sum+i;
    return sum+p;
}
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l;
    int r;
    int tmax=0;
    scanf("%d",&l);
    scanf("%d",&r);
    int cnt=l;
    int max=-100000;
    for(i=0;i<n;i++){
        if(cnt>=l && cnt<=r){
            tmax=tmax+arr[i];
                if(cnt==r)
                    tmax=tmax+divi(arr[i]);
        if(tmax<0)
            tmax=0;
        if(max<tmax){
            max=tmax;
        }
        }else
            cnt=0;
    cnt++;
    }
    printf("%d",max);
}
