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
    vector<ll>ara;
    for(ll i = 0;i < n;i++){
        ll p;
        cin>>p;
        ara.push_back(p);
    }
    sort(all(ara));
    map<string,ll>mp;
    for(ll i = 0;i < m;i++){
        string s;
        cin>>s;
        mp[s]++;
    }
    vector<ll>a;
    for(auto m: mp){
        a.push_back(m.second);
        //cout<<m.first<<" " <<m.second<<endl;

        
    }
    sort(rall(a));
    ll ans =0;
    for(ll i = 0;i < a.size();i++){
        ans += a[i] * ara[i];
        //cout<<a[i]<<" "<<ara[i]<<endl;
    }
    cout<<ans<<" ";
    sort(rall(ara));
    ans = 0;
    for(ll i = 0;i < a.size();i++){
        ans+= a[i]*ara[i];
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