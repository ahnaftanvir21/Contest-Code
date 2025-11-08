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
    ll w,h,a,b;
    cin>>w>>h>>a>>b;
    ll x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if(min(x1,x2)+a <= max(x1,x2)){
        ll p = abs(min(x1,x2)+a - max(x1,x2));
        if(p%a == 0){
            cout<<"Yes\n";
        }
        else if((max(y1,y2)-min(y1,y2)+b) % b == 0 && min(y1,y2)+b <= max(y1,y2)){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    else{
        if((max(y1,y2)-min(y1,y2)+b) % b == 0){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
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