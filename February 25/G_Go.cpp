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
    //cout<<n<<endl;
    ll ara[n+1][n+1];
    for(ll i = 0;i < n;i++){
        for(ll j = 0;j < n;j++){
            char ch;
            cin>>ch;
            ll p = ch-'0';
            ara[i][j] = p;
            //cout<<ara[i][j];
        }
        //cout<<endl;
    }
    ll ans = 0;
    for(ll i = 0;i < n;i++){
        for(ll j = 0;j < n;j++){
            ll x,y;
            x = i;
            y = j;
            ll a = 0;
            for(ll k = 0;k < n;k++){
                x = x%n;
                a = a*10 + ara[x][y];
                x++;
            }
            x = i;
            ll b = 0;
            for(ll k = 0;k < n;k++){
                y = y%n;
                b= b*10 + ara[x][y];
                y++;
            }
            y = j;
            ll c = 0;
            for(ll k = 0;k < n;k++){
                x = x %n;
                y = y %n;
                c = c*10 + ara[x][y];
                x++;
                y++;
            }
            x = i;
            y = j;
            for(ll k = 0;k < n;k++){
                x = x %n;
                y = y %n;
                c = c*10 + ara[x][y];
                x++;
                y++;
            }
            ans = max(ans,a);
            ans = max(ans,b);
            ans = max(ans,c);
        }
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