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
vector<ll>G[100];
ll ans = 0;
map<pair<ll,ll>,ll>mp;
ll mn = MX;
ll source;
void dfs(ll u){
    bool f = false;
    ll v;
    if(u == source){
        ans+=mn;
    }
    for(ll i = 0;i < G[u].size();i++){
        ll p = G[u][i];
        if(mp[{u,p}] > 0){
            f = true;
            v = p;
            mn = min(mn,mp[{u,p}]);
            dfs(p);
            break;
        }
    }
    if(f){
        mp[{v,u}] +=mn;
        mp[{u,v}] -=mn;
    }

}

void testCases (int tt)
{
    ll n;
    cin>>n;
    while(n--){
        ll u,v,w;
        cin>>u>>v>>w;
        G[u].push_back(v);
        G[v].push_back(u);
        mp[{u,v}] = w;
        mp[{v,u}] = w;
     }
}
 
 
int32_t main()
{
    fastio();
    // srand(time(NULL));
 
    int testcases = 1;
    cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        testCases (tt);
    }
 
    return 0;
}