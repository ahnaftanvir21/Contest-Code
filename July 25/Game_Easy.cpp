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
    int dp[2*n +5] = {0},dx[2*n+5] = {0};
    vector<int>a;
    int sum = 0;
    int s[n+2];
    for(int i = 0;i < n;i++){
        int x;
        cin>>x;
        sum+=x;
        a.push_back(x);
    }
    sort(rall(a));
    s[0] = a[0];
    int c = 0;
    for(int i = 0;i < n;i++){
        c+=a[i];
        s[i+1] = c;
    }
    int q = n-1;
    int extra[n+2] = {0};
    int m = 0;
    int ex[n+2] = {0};
    for(int i = 1;i <= n;i++){
        m+=q;
        q--;
        extra[i] = m;
        ex[i] = ex[i-1]+i;
        //cout<<extra[i]<<" ";
    }
    //cout<<endl;
    int i = 0;
    int x = 0;
    int k;
        for(int k = 1;k <= 2*n;k++){
            int ans = 0;
            for(int i = 1;i <= k;i++){
                int ex = k-i;
                int p = min(ex,i-1);
                int d = s[i];
                if(i > n){
                    d = sum;
                }
                int y = min(n,i);
                int cal = d+p*y- (p*(p+1))/2;
                ans = max(ans,cal);
            }
            cout<<ans<<" ";
        }
    cout<<endl;
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