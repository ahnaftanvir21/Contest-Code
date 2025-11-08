#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>G[100005];
ll pr[100005];
map<ll,ll>mp;
vector<ll>ans;
ll p;
ll dfs(ll r){
    ll f  = 1;
    for(ll i = 0;i < G[r].size();i++){
        ll s = dfs(G[r][i]);
        if(s == 0){
            f = 0;
        }
    }
    if(mp[r] == 0){
        return 0;
    }
    else{
        if(f == 1){
            if(r != p)
            ans.push_back(r);
            return 1;
        }
        else{
            return 1;
        }
    }
}
int main(){
    ll n;
    cin>>n;
    //ll p;
    for(ll i = 1;i <= n;i++){
        ll a,c;
        cin>>a>>c;
        pr[i] = a;
        mp[i] = c;
        if(a == -1){
            p = i;
            continue;
        }
        G[a].push_back(i);
    }
    dfs(p);
    sort(ans.begin(),ans.end());
    for(ll i = 0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
    if(ans.size() == 0){
        cout<<"-1";
    }
    cout<<endl;
    return 0;
}