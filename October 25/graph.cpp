#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+9;
vector<int>g[N];
bool vis[N];
bool f = false;
//int pr[N];
void dfs(int u,int pr){
    for(auto v:g[u]){
        if(v == pr)continue;
        if(!vis[v]){
            vis[v] = true;
            dfs(v,u);
        }
        else{
            f = true;
            return;
        }
    }
}
void test(int tt){
    int n,m;
    cin>>n>>m;
    for(int i = 0;i < m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    // for(int i = 1;i <= n;i++){
    //     pr[i] = i;
    // }
    vis[1] = true;
    dfs(1,0);
    if(f){
        cout<<"Cyclic\n";
    }
    else{
        cout<<"Not Cyclic\n";
    }
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