#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+9;
vector<int>g[N];
bool vis[N];
int sol(int u,int p){
    if(g[u].size() == 0){
        return 1;
    }
    int ans = 0;
    for(auto v: g[u]){
        if(p == 1){
            ans = ans+(sol(v,0));
        }
        else{
            ans = ans+(sol(v,1)) + sol(v,0);
        }
    }
    return ans;
}
void test(int tt){
    int n;
    cin>>n;
    int indi[n+5] = {0};
    for(int i = 0;i < n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        //g[v].push_back(u);
        indi[v]++;
    }
    int ans = 0;
    for(int i = 1;i <= n;i++){
        if(indi[i] == 0){
            ans+= sol(i,0)+sol(i,1);
        }
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