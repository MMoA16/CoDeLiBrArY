#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int sparse(int p,int q,int n,int a[n]){
    int lookup[n][n];
    int i;
    int j;
    for (i = 0; i < n; i++)
        lookup[i][0] = i;
 for (j=1; (1<<j)<=n; j++) {
    for (i=0; (i+(1<<j)-1) < n; i++) {
        if (a[lookup[i][j-1]] < a[lookup[i + (1<<(j-1))][j-1]]){
            lookup[i][j] = lookup[i][j-1];
        }
        else
            lookup[i][j] = lookup[i + (1 << (j-1))][j-1];
        }
    }
 return lookup[p][(int)log(q)];
}
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n];
    int x;
    int y;
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    while(m!=0){
        scanf("%d",&x);
        scanf("%d",&y);
        printf("%d\n",sparse(x,y,n,arr));
        m=m-1;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

