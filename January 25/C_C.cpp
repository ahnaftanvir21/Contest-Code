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
    ll n,q;
    cin>>n>>q;
    map<ll,ll>mp,mc;
    for(ll i = 0;i <= n;i++){
        mp[i] = i;
        mc[i] = 1;
    }
    ll ara[n+2] = {1};
    //cout<<ara[1]<<endl;
    ll cnt = 0;
    while(q--){
        ll k;
        cin>>k;
        if(k == 2){
            cout<<cnt<<endl;
        }
        else{
            ll a,b;
            cin>>a>>b;
            ll p = mp[a];
            if(mc[p] == 2){
                cnt--;
            }
            mc[p]--;
            if(mc[b] == 1){
                cnt++;
            }
            mc[b]++;
            mp[a] = b;
        }
    }
    return 0;
}