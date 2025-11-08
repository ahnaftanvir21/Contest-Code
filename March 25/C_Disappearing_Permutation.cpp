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
map<ll,ll>pos;
map<ll,ll>fx;
ll ara[200005];
ll ans = 0;
void fix(ll ps){
    if(pos[ps] == ps){
        if(fx[ps] == 0){
            fx[ps] = 1;
            ans++;
        }
        return;
    }
    ans++;
    ll c = ara[ps];
    pos[ps] = ps;
    fx[ps] = 1;
    fix(c);
}
 
void testCases (int tt)
{
    ans = 0;
    ll n;
    cin>>n;
    for(ll i = 1;i <= n;i++){
        fx[i] = 0;
        cin>>ara[i];
        pos[ara[i]] = i;
    }
    //ll ans = 0;
    for(ll i = 0;i < n;i++){
        ll d;
        cin>>d;
        fix(d);
        cout<<ans<<" ";
        
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