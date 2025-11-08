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
const int mod = 1e9+9;
inline void normal(ll &a, ll MOD) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a, MOD), normal(b, MOD); return (a * b) % MOD; }
inline ll modAdd(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a, MOD), normal(b, MOD); return (a + b) % MOD; }
inline ll modSub(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a, MOD), normal(b, MOD); a -= b; normal(a, MOD); return a; }
inline ll modPow(ll b, ll p, ll MOD) { ll r = 1; while (p) { if (p & 1) r = modMul(r, b, MOD); b = modMul(b, b, MOD); p >>= 1; } return r; }
inline ll modInverse(ll a, ll MOD) { return modPow(a, MOD - 2, MOD); }
inline ll modDiv(ll a, ll b, ll MOD) { return modMul(a, modInverse(b, MOD), MOD); }
map<int,int>mp;
int pow(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 2;
    }
    int x = pow(n/2)%mod;
    if(n%2 == 0){
        return modMul(x,x,mod);
    }
    else{
        return (modMul(x,x,mod)*2)%mod;
    }
}
 
void testCases (int tt)
{
    int n;
    cin>>n;
    //int p = log2(n+1)+1;
    //cout<<p<<endl;
    cout<<modSub(pow(n+1),(n+2),mod)<<endl;
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