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
const int N = 1e5+9;
vector<int>g[N];
vector<int>pr(N);
int n;
int dp[N];
int sol(int i){
    if(i == n){
        return 1;
    }
    if(dp[i] != -1){
        return dp[i];
    }
    int ans = 0;
    int x,mx;
    mx = 0;
    x = 0;
    for(auto v : g[i]){
        if(sol(v) > 0){
            ans = max(ans,sol(v)+1);
            if(ans > mx){
                mx = ans;
                x = v;
            }
        }
        pr[i] = x;
    }
    return dp[i] =  ans;
}
void testCases (int tt)
{
    int m;
    cin>>n>>m;
    memset(dp,-1,sizeof dp);
    for(int i = 0;i < m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
    }
    int ans = sol(1);
    if(ans == 0){
        cout<<"IMPOSSIBLE\n";
    }
    else{
        cout<<ans<<endl;
        int k = 1;
        cout<<1<<" ";
        while(k != n){
            k = pr[k];
            cout<<k<<" "; 
        }
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