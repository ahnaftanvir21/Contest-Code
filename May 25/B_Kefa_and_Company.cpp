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
    ll n,m;
    cin>>n>>m;
    map<ll,ll>mp;
    vector<ll>ara;
    for(ll i = 0;i < n;i++){
        ll x,w;
        cin>>x>>w;
        if(mp[x] == 0){
            ara.push_back(x);
        }
        mp[x]+=w;
    }
    sort(all(ara));
    ll ans = 0;
    ll l = ara.size();
    ll sum[l+1] = {0};
    sum [0] = mp[ara[0]];
    for(ll i = 1;i < l;i++){
        sum[i] = sum[i-1] + mp[ara[i]]; 
        //cout<<sum[i] <<endl;
    }
    for(ll i = 0;i < ara.size();i++){
        ll low,high;
        low = i+1;
        high = ara.size()-1;
        ll s = 0;
        while(low <= high){
            ll mid = (low+high)/2;
            if(ara[mid] - ara[i] < m){
                s = sum[mid] - sum[i];
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        ans = max(ans,s+mp[ara[i]]);
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