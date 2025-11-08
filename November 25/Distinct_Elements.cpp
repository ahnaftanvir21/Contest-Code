#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;
void test(int tt){
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i = 0;i < n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int ans = 1;
    for(auto x: mp){
        //cout<<x.second<<endl;
        ans *= (x.second+1);
        ans%=mod;
    }
    cout<<ans-1<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}