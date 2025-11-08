#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+8;
vector<int>g[N];
int dp[N];
int sol(int u){
    if(dp[u] != -1){
        return dp[u];
    }
    int ans = 0;
    for(auto v: g[u]){
        ans = max(ans,sol(v)+1);
    }
    return dp[u] = ans;
}
void test(int tt){
    int n,m;
    cin>>n>>m;
    for(int i = 0;i < m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
    }
    memset(dp,-1,sizeof dp);
    int ans  = 0;
    for(int i = 1;i <= n;i++){
        ans = max(ans,sol(i));
    }
    cout<<ans<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    //cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}