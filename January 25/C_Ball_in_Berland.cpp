#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a,b,k;
        cin>>a>>b>>k;
        ll ara1[k+1],ara2[k+1];
        map<ll,ll>ma,mb;
        for(ll i = 0;i < k;i++){
            cin>>ara1[i];
            ma[ara1[i]]++;
        }
        ll total = k-1;
        for(ll i = 0;i < k;i++){
            cin>>ara2[i];
            mb[ara2[i]]++;
        }
        ll ans = 0;
        for(ll i = 0;i < k;i++){
            ll x = (ma[ara1[i]]-1) + (mb[ara2[i]]-1);
            ans += (total-x);
            //cout<<(total-x)<<" ";
            total--;
            ma[ara1[i]]--;
            mb[ara2[i]]--;
        }
        //cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}