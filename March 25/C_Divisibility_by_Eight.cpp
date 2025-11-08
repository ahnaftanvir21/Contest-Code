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
    char st[500];
    cin>>st;
    ll l = strlen(st);
    ll f = 0;
    ll ans = 0;
    if(l > 2){
        for(ll i = 0;i < l;i++){
            if((st[i]-'0') % 8 == 0){   
                ans = st[i]-'0';
                f = 1;
                break;
            }
            for(ll j = i+1;j < l;j++){
                for(ll k = j+1;k < l;k++){
                    ll a,b,c;
                    a = st[i]-'0';
                    b = st[j]-'0';
                    c = st[k]-'0';
                    ll y = a*10+b;
                    ll z = b*10+c;
                    ll x = a*100+b*10+c;
                    ll s = a*10+c;
                    if(x % 8 == 0){
                        ans = x;
                        f = 1;
                    }
                    else if(y % 8 == 0){
                        ans = y;
                        f = 1;
                    }
                    else if(z % 8 == 0){
                        ans = z;
                        f = 1;
                    }
                    else if(s % 8 == 0){
                        ans = s;
                        f = 1;
                    }
                }
            }
        }
    }
    else if(l == 2){
        ll a,b;
        a = st[0]-'0';
        b = st[1]-'0';
        ll x = a*10+b;
        if(x % 8 == 0){
            f = 1;
            ans = x;
        }
        else if(a%8 == 0){
            f = 1;
            ans = a;
        }
        else if(b%8 ==0){
            f = 1;
            ans = b;
        }
    }
    else{
        ll a = st[0]-'0';
        if(a%8 == 0){
            f = 1;
            ans = a;
        } 
    }
    if(f == 1){
        cout<<"YES\n";
        cout<<ans<<endl;
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
    //cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        testCases (tt);
    }
 
    return 0;
}