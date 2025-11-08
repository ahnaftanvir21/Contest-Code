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
vector<ll>G[200005];
ll level[200005] = {0};
ll ans = 0;
ll degree[200005] = {0};
map<pair<ll,ll>,ll>mp;
ll p,first;
void dfs(int s){
    ll cnt = 0;
    if(degree[s] != 2){
        p = 1;
    }
    level[s] = 1;
    for(ll i = 0;i < G[s].size();i++){
        ll u,v;
        u = s;
        v = G[s][i];
        if(!level[G[s][i]]){
            dfs(G[s][i]);
        }
        //cout<<u<<" "<<v<<endl;
    }
    //cout<<u<<v<<endl;
}
 
void testCases (int tt)
{
    ll n,m;
    cin>>n>>m;
    for(ll i = 0;i < m;i++){
        ll u,v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }
    for(ll i = 1;i <= n;i++){
        if(!level[i]){
            p = 0;
            first = i;
            dfs(i);
            if(p == 0){
                ans++;
            }
        }
        //dfs(i);
    }
    cout<<ans<<endl;
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