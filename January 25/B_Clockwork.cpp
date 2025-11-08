#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ara[n+2];
        ll mn = 50000000000;
        ll in;
        for(ll i = 1;i <= n;i++){
            cin>>ara[i];
        }
        ll f = 1;
        for(ll i = 1;i <= n;i++){
            ll left  = i*2 - 2;
            ll right = (n-i)*2;
            ll ans = max(left,right);
            if(ans >= ara[i]){
                f = 0;
            }
        }
        
        if(f == 1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}