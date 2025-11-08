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
    ll n;
    cin>>n;
    //cout<<n<<endl;
    char st[10];
    cin>>st;
    double a,b;
    //cout<<st[1]-'0'<<endl;
    if(strlen(st) == 6){
        a = (st[1]-'0')*10+(st[2]-'0');
        b = (((st[4]-'0')*10+(st[5]-'0')));
    }
    else{
        a = (st[1]-'0')+(((st[3]-'0')*10+(st[4]-'0'))/100);
        b = (((st[3]-'0')*10+(st[4]-'0')));
    }
    a = a+(b/100);
    //cout<<a<<endl;
    ll ans = 0;
    double sum = a;
    for(ll i = 0;i < n;i++){
        char sp[100];
        cin>>sp;
        double x,y;
        if(strlen(sp) == 6){
            x = (sp[1]-'0')*10+(sp[2]-'0');
            y = ((sp[4]-'0')*10+(sp[5]-'0'));
        }
        else{
            x = (sp[1]-'0');
            y = ((sp[3]-'0')*10+(sp[4]-'0'));
        }
        x = x+(y/100);
        sum += x;
        int p = sum;
        if(p != sum){
            ans++;
        }
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