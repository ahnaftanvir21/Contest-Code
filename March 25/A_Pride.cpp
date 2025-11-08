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
    ll ara[n+1];
    ll c = 0;
    for(ll i = 0;i < n;i++){
        cin>>ara[i];
        if(ara[i] > 1){
            c++;
        }
    }
    ll f = 0;
    ll l = n+5;
    for(ll i = 0;i < n;i++){
        ll g = ara[i];
        ll s = 0;
        for(ll j= i;j < n;j++){
            g = __gcd(g,ara[j]);
            if(g==1){
                f = 1;
                l = min(s,l);
                break;
            }
            s++;
        }
    }
    if(f == 0){
        cout<<"-1\n";
    }
    else if(c!=n || c < n){
        cout<<c<<endl;
    }
    else{
        cout<<c+l-1<<endl;
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