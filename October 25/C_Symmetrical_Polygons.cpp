#include <bits/stdc++.h>
using namespace std;
#define int long long
void test(int tt){
    int n;
    cin>>n;
    int ara[n+2];
    map<int,int>mp;
    set<int>se;
    int cnt = 0;
    for(int i = 0;i < n;i++){
        cin>>ara[i];
        mp[ara[i]]++;
        se.insert(ara[i]);
    }
    int ans=0;
    vector<int>v;
    for(auto x: se){
        if(mp[x] % 2!= 0){
            v.push_back(x);
            mp[x]--;
        }
        ans+=mp[x]*x;
        cnt+=mp[x];
    }
    //for one odd length
    int extra = 0;
    for(int i = 0;i < v.size();i++){
        if(v[i] < ans){
            extra = v[i];
        }
    }
    //cout<<ans<<" "<<extra<<endl;
    // if(n == 3 && extra == 0){
    //     cout<<"0\n";
    //     return;
    //     //ans = 0;
    // }
    //cout<<ans<<" "<<extra<<endl;

    //for two odd lenght
    int len = 0;
    for(int i = 1;i < v.size();i++){
        if(v[i]-v[i-1] < ans){
            len = max(v[i]+v[i-1],len);
        }
    }
    //cout<<cnt<<" ";
    //cout<<max(len,extra)<<endl;
    if(max(len,extra) == 0 && cnt <= 2){
        ans = 0;
    }
    ans+=max(len,extra);
    cout<<ans<<endl;
    
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