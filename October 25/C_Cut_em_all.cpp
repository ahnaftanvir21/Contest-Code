#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+9;
vector<int>g[N];
bool vis[N];
int cnt[N];
int ans = 0;
void dfs(int u){
    vis[u] = true;
    for(auto v: g[u]){
        if(!vis[v]){
            vis[v] = true;
            dfs(v);
            if(cnt[v] % 2 != 0){
                cnt[u]+=cnt[v];
            }
            else{
                //cout<<u<<" "<<v<<endl;
                ans++;
            }
        }
    }
}
void test(int tt){
    int n;
    cin>>n;
    for(int i = 1;i <= n;i++){
        cnt[i] = 1;
    }
    for(int i = 1;i < n;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    if(n%2 == 1){
        cout<<"-1";
        return;
    }
    dfs(1);
    // for(int i = 1;i <= n;i++){
    //     cout<<cnt[i]<<endl;
    // }
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