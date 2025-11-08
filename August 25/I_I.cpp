#include<bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
#define endl '\n'
#define ll long long
#define int long long
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define mem(a,b) memset(a, b, sizeof(a) )
#define sq(a) ((a) * (a))
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const int MX = 2e5+123;
const ll infLL = 9000000000000000000;
const int MOD = 1e9+7;
int n,m;
const int N = 1e5+9;
bool vis[N];
vector<int>g[N],rg[N],ng[N],stor[N];
stack<int>st;
vector<int>order;
int pr[N];
int val[N] = {0};
vector<pair<int,int>>vc;
int find(int r){
    if(pr[r] == r){
        return r;
    }
    return pr[r] = find(pr[r]);
}
void un(int a,int b){
    int u = find(a);
    int v = find(b);
    if(u == v){
        return;
    }
    else{
        pr[u] = v;
    }
}
void dfs(int u){
    for(auto v: g[u]){
        if(!vis[v]){
            vis[v] = true;
            dfs(v);
        }
    }
    st.push(u);
}
void dfsA(int u){
    for(auto v : rg[u]){
        if(!vis[v]){
            vis[v] = true;
            un(u,v);
            dfsA(v);
        }
    }
}
int dp[N];

int sol(int u){
    if(dp[u] != -1){
        return dp[u];
    }
    int ans = val[u];
    for(auto v : ng[u]){
        ans= max(ans, sol(v)+val[u]);
    }
    return dp[u] = ans;
}
void testCases (int tt)
{
    cin>>n>>m;
    int k[n+1];
    for(int i = 1;i <= n;i++){
        cin>>k[i];
    }

    for(int i = 0;i < m;i++){
        int u,v;
        cin>>u>>v;
        vc.push_back({u,v});
        g[u].push_back(v);
        rg[v].push_back(u);
    }
    for(int i = 1;i <= n;i++){
        if(!vis[i])
        {
            vis[i] = true;
            dfs(i);
        }
    }
    for(int i = 0;i < n;i++){
        pr[i+1] = i+1;
        order.push_back(st.top());
        st.pop();
        //cout<<order[i]<<endl;
    }
    memset(vis,false,sizeof vis);
    for(int i = 0;i < n;i++){
        if(!vis[order[i]]){
            vis[order[i]] = true;
            dfsA(order[i]);
        }
    }
    vector<int>ara;
    for(int i = 1;i <= n;i++){
        if(pr[i] == i){
            val[i] += k[i];
            ara.push_back(i);
        }
        else{
            val[find(i)] += k[i];
            //stor[find(i)].push_back(i);
        }
        //cout<<pr[i]<<" ";
    }
    memset(vis,false,sizeof vis);
    map<pair<int,int>,int>mp;
    for(int i = 0;i < m;i++){
        int u = vc[i].first;
        int v = vc[i].second;
        int a = find(u);
        int b = find(v);
        if(a != b && mp[{a,b}] != 1){
            ng[b].push_back(a);
            mp[{a,b}] = 1;
            //cout<<b<<" "<<a<<endl;
        }
    }
    memset(dp,-1,sizeof dp);
    int ans = 0;
    vector<int>a;
    for(int i = 0;i < ara.size();i++){
        ans = max(ans,sol(ara[i]));
    }
    cout<<ans;
    cout<<endl;
    // sort(all(a));
    // cout<<ans<<endl;
    // for(int i = 0;i < a.size();i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

}
 
 
int32_t main()
{
    fastio();
    // srand(time(NULL));
 
    int testcases = 1;
    //cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        testCases (tt);
    }
 
    return 0;
}