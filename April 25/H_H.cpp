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
vector <int>G[11];
long long level[1000000]={0};
map<pair<ll,ll>,ll>mp;
vector<pair<ll,ll>>p;
void bfs(int s){
    queue <int>q;
    level[s] = 1;
    q.push(s);
    while(q.size()){
        int p = q.front();
        q.pop();
        //cout<<p<<" ";
        for(int i = 0;i < G[p].size();i++){
            if(!level[G[p][i]]){
                q.push(G[p][i]);
                level[G[p][i]] = 1;
            }
            else{
                mp[{p,G[p][i]}] = 1;
            }
        }
    }
}

void testCases (int tt)
{
    ll n,m;
    cin>>n>>m;
    for(ll i = 0;i < m;i++){
        ll u,v;
        cin>>u>>v;
        p.push_back({u,v});
        G[u].push_back(v);
    //     G[v].push_back(u);
    }
    for(ll i = 1;i <= n;i++){
        if(!level[i]){
            bfs(i);
        }
    }
    //bfs(1);
    for(ll i = 0;i < p.size();i++){
        cout<<mp[{p[i].first,p[i].second}];
    }
    cout<<endl;

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