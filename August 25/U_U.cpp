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
int pr[MX];
struct edge
{
    int u,v,w;
    bool operator<(const edge& p)const
    {
        return w < p.w;
    }
};
vector<edge>e;
int find(int r){
    if(pr[r] == r){
        return r;
    }
    return pr[r] = find(pr[r]);
}
int mst(int n){
    for(int i = 0;i <= n;i++){
        pr[i] = i;
    }
    int ans = 0;
    sort(all(e));
    int cnt = 0;
    for(int i = 0;i < e.size();i++){
        int u = find(e[i].u);
        int v = find(e[i].v);
        if(u != v){
            ans+=e[i].w;
            pr[u] = v;
            cnt++;
            if(cnt == n-1){
                break;
            }
        }
    }
    return ans;
}
 
void testCases (int tt)
{
    int n,m;
    while(true){
        cin>>n>>m;
        if(n == 0 && m == 0){
            break;
        }
        e.clear();
        int sum = 0;
        for(int i = 0;i < m;i++){
            int u,v,w;
            cin>>u>>v>>w;
            edge g;
            g.u = u;
            g.v = v;
            g.w = w;
            e.push_back(g);
            sum+=w;
        }
        cout<<sum - mst(n)<<endl;
    }
}
 
 
int32_t main()
{
    //fastio();
    // srand(time(NULL));
 
    int testcases = 1;
    int n,m;
    for (int tt = 1; tt <= testcases; tt++)
    {
        testCases (tt);
    }
 
    return 0;
}