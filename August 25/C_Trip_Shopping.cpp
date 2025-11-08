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
struct edge
{
    int u,v,w;
    bool operator<(const edge& p)const
    {
        return w < p.w;
    }
};
 
void testCases (int tt)
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    int b[n+1];
    vector<pair<int,int>>v;
    int mx = 0;
    vector<edge>e;
    for(int i = 0;i < n;i++){
        cin>>a[i];
    }
    for(int i = 0;i < n;i++){
        //cin>>a[i];
        cin>>b[i];
        mx+=abs(a[i]-b[i]);
        v.push_back({a[i],b[i]});
        //cout<<a[i]+b[i]<<" ";
    }
    sort(all(v));
    int mn = infLL;
    for(int i = 1;i < n;i++){
        vector<int>ans;
        ans.push_back(v[i].first);
        ans.push_back(v[i].second);
        ans.push_back(v[i-1].first);
        ans.push_back(v[i-1].second);
        int s = abs(v[i].first-v[i].second) + abs(v[i-1].second-v[i-1].first);
        sort(all(ans));
        int m = ans[3]-ans[0]+ans[2]-ans[1];
        mn = min(mn,m-s);
    }
    
    //cout<<endl;
    //cout<<s<<endl;
    cout<<mx+mn<<endl;
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