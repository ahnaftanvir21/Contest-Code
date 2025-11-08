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
    ll n = 1;
    ll p = 0;
    ll a,b,c;
    a = b = c = 1;
    vector<ll>x;
    for(ll i = 0;i < 30;i++){
        //a = a*2;
        b = 1;
        for(ll j = 0;a*b < 1e18;j++){
            //b = b*3;
            c = 1;
            for(ll k = 0;a*b*c < 1e18;k++){
                //c = c *3;
                x.push_back(a*b*c);
                c = c*5;
            }
            b = b*3;
        }
        a = a*2;
    }
    sort(all(x));
    //cout<<x.size()<<endl;
    cout<<"The 1500'th ugly number is "<<x[1500-1]<<"."<<endl;
    // for(ll i = 0;i < x.size();i++){
    //     cout<<x[i]<<endl;
    // }
}
 
 
int32_t main()
{
    //fastio();
    // srand(time(NULL));
 
    int testcases = 1;
    //cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        testCases (tt);
    }
 
    return 0;
}