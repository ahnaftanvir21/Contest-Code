#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll ara[n+1];
    ll ans = 0;
    for(ll i = 1;i <= n;i++){
        cin>>ara[i];
        ans+=ara[i];
        //cout<<ara[i]<<" ";
    }
    if(n == 1){
        cout<<ara[1]<<endl;
        continue;
    }
    for(ll i = 1;i <= n;i++){
        ll sum = 0;
        //cout<<sum<<endl;
        for(ll j = 1;j <= n-(i);j++){
            //cout<<ara[j]<<" ";
            ara[j] = (ara[j+1] - ara[j]);
            sum += ara[j];
        }
        ans = max(ans,abs(sum));
    }
    cout<<ans<<endl;
    }
    return 0;
}