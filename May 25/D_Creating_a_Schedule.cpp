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
    ll ara[m+1];
    for(ll i = 0;i < m;i++){
        cin>>ara[i];
    }
    sort(ara,ara+m);
    //map<ll,pair<ll,ll>>mp;
    ll p = 0;
    ll x = 0;
    for(ll i = 0;i < n;i++){
        ll a,b;
        if(i%2 == 0){
            a = ara[0+p];
            b = ara[(m-1)-p];
        }
        else{
            a = ara[(m-1)-p];
            b = ara[0+p];
            p++;
        }
        cout<<a<<" "<<b<<" "<<a<<" "<<b<<" "<<a<<" "<<b<<endl;
        //x+=5*abs(a/100 - b/100);
    }
    //cout<<x<<endl;
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