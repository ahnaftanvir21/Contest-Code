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
const int N = 1e3+9;
vector<int>g[N],rg[N];
bool vis[N];
int pr[N];
int indi[N] = {0};
void bfs(queue<int>q){
        while(!q.empty()){
            int p = q.front();
            vis[p] = true;
            q.pop();
            for(auto v: g[p]){
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
}
void testCases (int tt)
{
    int n,m;
    while(cin>>n && cin>>m){
        for(int i = 0;i <= n;i++){
            pr[i] = i;
            g[i].clear();
            vis[i] = false;
            indi[i] = 0;
        }
        for(int i = 0;i < m;i++){
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            rg[v].push_back(u);
            indi[v]++;
        }
        int cnt = 0;
        queue<int>q;
        q.push(0);
        for(int i = 1;i <= n;i++){
            if(indi[i] == 0){
                cnt++;
                q.push(i);
            }
        }
        bfs(q);
        for(int i = 1;i <= n;i++){
            if(!vis[i]){
                cnt++;
                q.push(i);
                bfs(q);
            }
        }
        cout<<cnt<<endl;
    }
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