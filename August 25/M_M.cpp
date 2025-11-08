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
 
 
void testCases (int tt)
{
    int n,m;
    while(1){
        cin>>n>>m;
        if(n == 0 && m == 0){
            break;
        }
        int indi[n+5] = {0};
        vector<int>g[n+5];
        for(int i = 0;i < m;i++){
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            indi[v]++;
        }
        queue<int>q;
        for(int i = 1;i <= n;i++){
            if(indi[i] == 0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int p = q.front();
            cout<<p<<" ";
            q.pop();
            for(auto v: g[p]){
                indi[v]--;
                if(indi[v] == 0){
                    q.push(v);
                }
            }
        }
        cout<<endl;
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