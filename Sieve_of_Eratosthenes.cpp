//give the nth prime number

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll m=86028121;///m is the 500000th prime number
vector<ll>v;
bool prime[86028121+1];
void sieve(ll m){
    memset(prime,true,sizeof(prime));
    for(ll i=2;i*i<=m;i++){
        if(prime[i]==true){
            for(ll j=i*2;j<=m;j=j+i)
                prime[j]=false;
        }
    }
}
int main()
{
    ll t,n,i;
    sieve(m);
    for(i=2;i<=m;i++){
        if(prime[i]==true)
            v.push_back(i);
    }
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&n);
        printf("%lld\n",v[n-1]);
    }
    return 0;
}

