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
const int N = 105;
int dp[N][N];
int a[N];
int n;
void testCases (int tt)
{
    cin>>n;
    for(int i = 1;i <= n;i++){
        cin>>a[i];
    }
    memset(dp , 0, sizeof dp);
    int mx = 0;
    for(int i = 1;i <= n;i++){
        dp[i][0] = mx;
        mx = max(dp[i][0],mx);
        if(a[i] == 1 || a[i] == 3){
            dp[i][1] = max(dp[i-1][0]+1,dp[i-1][2]+1);
            mx = max(dp[i][1],mx);
        }
        if(a[i] == 2 || a[i] == 3){
            dp[i][2] = max(dp[i-1][0]+1,dp[i-1][1]+1);
            mx = max(dp[i][2],mx);
        }
    }
    cout<<n-mx<<endl;
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