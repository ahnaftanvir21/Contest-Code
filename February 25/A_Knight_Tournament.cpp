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
ll seg[4*300005] = {0};
//ll ara[1000005];
ll ans[300005] = {0};
ll query(ll node, ll low, ll high, ll l, ll r,ll val){
    if(seg[node] == 1){
        return 1;
    }
    if(high < l || low > r){
        return seg[node];
    }
    if(low == high){
        if(low != val){
            ans[low] = val;
            //cout<<low<<" "<<val<<endl;
            seg[node] = 1;
        }
        return seg[node];
    }
    ll mid = (low+high)/2;
    ll left = query(node*2+1,low,mid,l,r,val);
    ll right = query(node*2+2,mid+1,high,l,r,val);
    if(seg[node*2+1] == 1 && seg[node*2+2] == 1){
        seg[node] = 1;
    }
    return seg[node];
    //ll mid = (low+high)/mid;
}

 
void testCases (int tt)
{
    
}
 
 
int32_t main()
{
    fastio();
    // srand(time(NULL));
 
    // int testcases = 1;
    // cin >> testcases;
    // for (int tt = 1; tt <= testcases; tt++)
    // {
    //     testCases (tt);
    // }
    ll n,m;
    cin>>n>>m;
    while(m--){
        ll x,y,z;
        cin>>x>>y>>z;
        //cout<<"Qurey: \n";
        query(0,1,n,x,y,z);
    }
    for(ll i = 1;i <= n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}