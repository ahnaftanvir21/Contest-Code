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
    ll mn = inf;
    ll x = 9;
    for(ll i = 1;i <= 9;i++){
        ll cnt = 0;
        ll a = n;
        //cout<<x<<endl;
        //cout<<"here\n";
        ll f = 0;
        while(f == 0){
            cnt++;
            //cout<<"do\n";
            //ll f = 0;
            ll b = a;
            //cout<<b<<endl;
            while(b > 0){
                //cout<<"here "<<b<<endl;
                if(b % 10 == 7){
                    f = 1;
                    break;
                }
                b = b/10;
            }
            a = a+x;
            if(f == 1){
                mn = min(cnt,mn);
                break;
            }
        }
        a = a+x;
        x = x*10 + 9;
        //cout<<x<<endl;
    }
    cout<<mn-1<<endl;

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