#include <stdio.h>

#include<math.h>

#define ll long long int

#define MODVAL 1000000007

ll pow1(ll n, ll a, ll mod){
    ll pow = 1;
    n = n % mod;
    while (a > 0){
        if(a&1)
            pow = (pow*n)%mod;
        a >>= 1;
        n = (n*n)%mod;
    }
    return pow;
}

int main() {

    int t;

    scanf("%d",&t);

    while(t--){

        ll n;

        scanf("%d",&n);

        ll res = pow1(2,n-1, MODVAL);

        printf("%d\n",res);

    }

    return 0;

}

