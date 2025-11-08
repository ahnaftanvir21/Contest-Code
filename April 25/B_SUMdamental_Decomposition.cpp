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
    ll n,x;
    cin>>n>>x;
    if(x == 0){
        if(n == 1){
            cout<<"-1\n";
        }
        else{
            if(n%2 == 0){
                cout<<n<<endl;
            }
            else{
                cout<<n-2+5<<endl;
            }
        }
    }
    else if(x == 1){
        if(n%2 == 0){
            cout<<5+(n-2)<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    else{
        ll p = x;
        //ll s = 0;
        ll c = 1;
        ll cnt = 0;
        while(p > 0){
            if(p%2 == 1){
                cnt++;
            }
            p = p/2;
            //c = c*2;
        }
        if(cnt < n){
            if((n-cnt) % 2 == 0){
                cout<<x+(n-cnt)<<endl;
            }
            else{
                cout<<x+(n-cnt)+1<<endl;
            }
        }
        else{
            cout<<x<<endl;
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