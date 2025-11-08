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
    ll n;
    cin>>n;
    map<ll,ll>mp;
    ll ara[2*n + 2] = {0};
    for(ll i = 1;i <= n;i++){
        for(ll j = 1;j <= n;j++){
            ll s;
            cin>>s;
            ara[i+j] = s;
            mp[s] = 1;
        }
    }
    ll a,b;
    ll f = 0;
    for(ll i = 1;i <= 2*n;i++){
        if(mp[i] == 0){
            a = i;
            f++;
        }
        if(ara[i] == 0){
            b = i;
            f++;
        }
    }
    if(f==2){
        ara[b] = a;
    }
    for(ll i = 1;i <= 2*n;i++){
        cout<<ara[i];
        if(i!=2*n){
            cout<<" ";
        }
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