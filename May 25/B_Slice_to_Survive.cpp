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
ll sol(ll n,ll m){
    if(n == 0 || m == 0){
        return MX;
    }
    //cout<<n<<" "<<m<<" ";
    ll a = 0;
    while(n > 1){
        if(n % 2 == 0){
            n = n/2;
        }
        else{
            n = (n/2)+1;
        }
        //n = n/2;
        a++;
    }
    while(m > 1){
        if(m%2 == 0){
            m = m/2;
        }
        else{
            m = (m/2) + 1;
        }
        a++;
    }
    //cout<<a<<endl;
    return a;
}
 
void testCases (int tt)
{
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll p,q,r,s,t;
    p = sol(a,m);
    q = sol(n-a+1,m);
    r = sol(n,b);
    s = sol(n,m-b+1);
    ll ans = min(p,q);
    ans = min(ans,r);
    ans = min(ans,s);
    cout<<ans+1<<endl;

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