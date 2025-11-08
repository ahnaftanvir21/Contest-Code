#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    map<ll,ll>mp;
    ll ara[n+2];
    for(ll i = 1;i <= n;i++){
        cin>>ara[i];
        mp[ara[i]-i]+=ara[i];
    }
    ll ans = 0;
    for(auto& m: mp){
        if(m.second > ans){
            ans = m.second;
        }
    }
    cout<<ans<<endl;
    return 0;
}