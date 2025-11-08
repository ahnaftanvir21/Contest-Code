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
int ara[] = {11,111,1111,11111,111111,1111111,11111111,111111111};
map<int,int>mp;
int sol(int n){
    int p = -1;
    if(n == 0){
        return 1;
    }
    if(mp[n] != 0){
        return mp[n];
    }
    for(int i = 0;i < 8;i++){
        if(n-ara[i] >= 0){
            int s = sol(n-ara[i]);
            if(s == 1){
                p = 1;
            }
        }
    }
    mp[n] = p;
    if(p == 1){
        return 1;
    }
    else{
        return -1;
    }
}
 
void testCases (int tt)
{
    int n;
    cin>>n;
    if(n > 1099){
        cout<<"YES\n";
        return;
    }
    int ans = sol(n);
    if(ans == 1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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