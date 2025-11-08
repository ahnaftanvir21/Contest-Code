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
    vector<ll>a(n+1,0);
    for(ll i = 0;i < n;i++){
        cin>>ara[i];
    }
    ll s = 1;
    ll j = 0;
    ll e;
    for(ll i = 0;i < n;i++){
        if(ara[i] / abs(ara[i]) == s){
            a[j]+=ara[i];
        }
        else{
            s = s*(-1);
            j++;
            a[j]+=ara[i];
        }
    }
    ll ans = 0;
    ll ndp[n+1];
    ndp[0] = abs(a[0]);
    ndp[1] = abs(a[1]) + a[0];
    ans = max(ndp[0],ndp[1]);
    for(ll i = 2;i <= j;i++){
        if(a[i] > 0){
            ndp[i] = a[i]+ndp[i-2];
        }
        else{
            ndp[i] = abs(a[i]) + max(ndp[i-1],ndp[i-2]);
        }
        ans = max(ans,ndp[i]);
    }
    cout<<ans<<endl;
    // for(ll i = 0;i <= j+1;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

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