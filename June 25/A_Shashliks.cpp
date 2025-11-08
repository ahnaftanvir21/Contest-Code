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
    ll k,a,b,x,y;
    cin>>k>>a>>b>>x>>y;
    //first
    int p,p1;
    p = ((k-a)/x)+1;
    if(k-a < 0){
        p = 0;
    }
    int mx = k -(p*x);
    p1 = ((mx-b)/y)+1;
    if(mx-b < 0){
        p1 = 0;
    }
    int cnt1 = p+p1;
    //second
    p = ((k-b)/y)+1;
    if(k-b < 0){
        p = 0;
    }
    mx = k -(p*y);
    p1 = ((mx-a)/x)+1;
    if(mx-a < 0){
        p1 = 0;
    }
    int cnt2 = p1+p;
    cout<<max(cnt1,cnt2)<<endl;
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