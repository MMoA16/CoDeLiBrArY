#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int min(int mini,int j,int arr[]);
int lookup(int p,int q,int n,int arr[n]);

int min(int mini,int j,int arr[]){
    if(mini>arr[j])
        return j;
    else
        return mini;
}
int lookup(int p,int q,int n,int arr[n]){
    int a[n][n];
    int i,j;
    int mini=-1000000;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            a[i][j]=0;
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(i==j){
                a[i][j]=i;
                mini=a[i][j];
            }else{
                a[i][j]=min(mini,j,arr);
                mini=a[i][j];
            }
       }
    }
    return a[p][q];
}
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n];
    int x;
    int y;
    int t=m;
    int flag[m];
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    while(m!=0){
        scanf("%d",&x);
        scanf("%d",&y);
        flag[t-m]=lookup(x,y,n,arr);
        m=m-1;
    }
    for(i=0;i<m;i++){
        printf("%d\n",flag[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
