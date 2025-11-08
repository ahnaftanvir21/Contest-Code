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
    int n;
    cin>>n;
    string st;
    cin>>st;
    int dp1[n+1] = {0};
    int dp0[n+1] = {0};
    int ans = 0;
    for(int i = 1;i <= n;i++){
        if(st[i-1] == '0'){
            dp1[i] = dp0[i-1];
            dp0[i] = dp1[i-1] + 1;
        }
        else if(st[i-1] == '1'){
            dp1[i] = dp1[i-1] + 1;
            dp0[i] = dp0[i-1]; 
        }
        ans += dp1[i];
        //cout<<dp1[i]<<" "<<dp0[i]<<endl;

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