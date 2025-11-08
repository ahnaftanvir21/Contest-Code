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
    ll n,q;
    cin>>n;
    ll ara[n+1];
    for(ll i = 0;i < n;i++){
        cin>>ara[i];
    }
    cin>>q;
    ll update[n+1] = {0};
    ll up = 0;
    ll indi = 0;
    for(ll j = 1;j <= q;j++){
        ll x;
        cin>>x;
        if(x == 1){
            cin>>up;
            indi = j;
        }
        else if(x == 2){
            ll i,p;
            cin>>i>>p;
            i--;
            if(update[i] < indi){
                ara[i] = up;
                update[i] = indi;
            }
            ara[i] += p;
        }
        else if(x == 3){
            ll i;
            cin>>i;
            i--;
            if(update[i] < indi){
                ara[i] = up;
                update[i] = indi;
            }
            cout<<ara[i]<<endl;
        }
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