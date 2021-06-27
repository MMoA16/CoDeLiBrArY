#include <iostream>
#define max 999999999
using namespace std;

long long int visi[100000000]={0};
void merge(long long int arr[], long long int l, long long int m,long long int r)
{
	long long int i, j, k;
	long long int n1 = m - l + 1;
	long long int n2 = r - m;

	/* create temp arrays */
	long long int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(long long int arr[], long long int l,long long int r)
{
	if (l < r) {
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		long long int m = l + (r - l) / 2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}
int main()
{
    long long int m,n,x,q;
    cin>>m>>n>>x>>q;
    long long int i,j;
    long long int arr[m+1][n+1];
    long long int a,b,c,d;
    long long int k=1;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            arr[i][j]=x+i+j;
        }
    }
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
    while(q!=0){
        visi[0]=999999999;
        long long int temp[100000000]={0};
        long long int y=1;
        cin>>a;
        if(a==1){
            cin>>b>>c>>d;
            for(i=c;i<=d;i++)
                arr[b][i]=max;
        }
        if(a==2){
            for(i=c;i<=d;i++)
                arr[i][b]=max;
        }
        if(a==3){
            cin>>b;
            for(i=1;i<=m;i++){
                for(j=1;j<=n;j++){
                    if(arr[i][j]!=max){
                        visi[k]=arr[i][j];
                        k=k+1;
                    }
                }
            }
            mergeSort(visi,1,k-1);
            for(i=1;i<=k-1;i++){
                if(visi[i]==visi[i-1])
                    continue;
                else{
                    temp[y]=visi[i];
                    y=y+1;
                }
            }
             cout<<temp[b];
        }
        q=q-1;
    }
}
