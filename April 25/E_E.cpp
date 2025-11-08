#include<bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
#define endl '\n'
#define ll long long
#define int long long
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()as
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
    ll H,W,N,h,w;
    cin>>H>>W>>N>>h>>w;
    ll ara[H+1][W+1];
    ll uniq[H+1][W+1];
    ll un = 0;
    map<ll,ll>mp;
    for(ll i = 0;i < H;i++){
        for(ll j = 0;j < W;j++){
            cin>>ara[i][j];
            if(mp[ara[i][j]] == 0){
                un++;
                mp[ara[i][j]] = 1;
            }
            uniq[i][j] = un;
        }
    }
    ll dp[H+1][W+1] = {0};
    for(ll i = 0;i < H;i++){
        for(ll j = 0;j < W;j++){
            if(i < h && j < w){
                dp[i][j] = uniq[i][j];
            }
            ll x,y;
            x = i+h;
            y = j+w;
            if(y > W-1){
                y = y%W;
                x++;
                if(x > H-1){
                    continue;
                }
            }
            dp[x][y] = uniq[x][y] -  
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