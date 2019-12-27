//gives the number of integers between 1 and n inclusive, which are co-prime to n

#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

ll phi[1000005];
bool mark[1000005];
void sievephi(ll n){
    ll i,j;
    for(i=1;i<=n;i++)
        phi[i]=i;
    mark[1]=1;
    for(i=2;i<=n;i++){
        if(!mark[i]){
            for(j=i;j<=n;j+=i){
                mark[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}

int main()
{
    ll n;
    sievephi(1000000);
    cin>>n;
    cout<<phi[n]<<endl;
    return 0;
}


