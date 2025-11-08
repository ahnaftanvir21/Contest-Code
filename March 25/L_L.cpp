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
    ll r,c,k;
    cin>>r>>c>>k;
    char st[2000],st1[2000];
    ll f = 0;
    for(ll i = 0;i < r;i++){
        cin>>st>>st1;
        ll n = 0;
        ll p = 0;
        for(ll j = 0;j < c;j++){
            if(st[j] != '*'){
                p = 1;
            }
        }
        for(ll j = 0;j < k;j++){
            if(st1[j] == '*'){
                n = 1;
            }
        }
        if(n == 1 && p == 1){
            f = 1;
        }
    }
    if(f == 1){
        cout<<"N\n";
    }
    else{
        cout<<"Y\n";
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