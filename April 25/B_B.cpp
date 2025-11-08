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
ll h,m;
void timeup(){
    m++;
    if(m > 59){
        m = 0;
        h++;
        if(h > 23){
            h = 0;
        }
    }
} 
ll isright(){
    ll a = m/10;
    ll b = h%10;
    ll newm = (h%10)*10 + (m%10);
    ll newh = h-(h%10)+m/10;
    if(newm < 59 && newh < 24){
        return 1;
    }
    else{
        return 0;
    }
}
void testCases(int tt)
{
    cin>>h>>m;
    while(isright() != 1){
        //cout<<h<<" "<<m<<endl;
        timeup();
    }
    cout<<h<<" "<<m<<endl;
    // ll a = m/10;
    // ll b = h%10;
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