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
    for(ll i = 0;i < n;i++){
        cin>>ara[i];
    }
    ll factor[35];
    factor[0] = 1;
    for(ll i = 1;i < 35;i++){
        factor[i] = factor[i-1]*2;
    }
    ll bits[35] = {0};
    for(ll i = 0;i < n;i++){
        ll s = ara[i];
        ll j = 0;
        while(s > 0){
            if(s%2 == 1){
                bits[j]++;
            }
            s = s/2;
            j++;
        }
    }
    ll ans = 0;
    for(ll i = 0;i < n;i++){
        ll cbits[35] = {0};
        ll s = ara[i];
        ll j = 0;
        while(s > 0){
            if(s%2 == 1){
                cbits[j]++;
            }
            s = s/2;
            j++;
        }
        ll x = 0;
        for(ll j = 0;j < 35;j++){
            // if(cbits[j] == bits[j]){
            //     continue;
            // }
            if(cbits[j] == 1){
                x+= (n-(bits[j]))*factor[j];
            }
            else if(cbits[j] == 0){
                x+= bits[j]*factor[j];
            }
        }
        ans = max(ans,x);
    }
    cout<<ans<<endl;
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