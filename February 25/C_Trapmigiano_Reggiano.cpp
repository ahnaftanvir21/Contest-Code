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
vector<ll>a;
vector<ll>G[200005];
ll level[200005];
void bfs(ll s){
    queue<ll>q;
    q.push(s);
    level[s] = 1;
    a.push_back(s);
    while(q.size()){
        ll p = q.front();
        q.pop();
        for(ll i = 0;i < G[p].size();i++){
            if(level[G[p][i]] == 0){
                level[G[p][i]] = level[p]+1;
                a.push_back(G[p][i]);
                q.push(G[p][i]);
            }
        }
    }
}
 
void testCases (int tt)
{
    ll n,st,en;
    cin>>n>>st>>en;
    a.clear();
    for(ll i = 0;i <= n;i++){
        G[i].clear();
        level[i] = 0;
    }
    for(ll i = 0;i < n-1;i++){
        ll x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    bfs(en);
    for(ll i = n-1;i >= 0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
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