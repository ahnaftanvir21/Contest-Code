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
    vector<ll>even,odd,ara;
    for(ll i = 0;i < n;i++){
        ll s;
        cin>>s;
        ara.push_back(s);
    }
    sort(all(ara));
    if(ara[0]%2 == ara[n-1]%2){
        cout<<"0\n";
        return;
    }
    ll e1,e2,o1,o2;
    e1 = o1 = e2 = o2 =  n;
    for(ll i = 0;i < n;i++){
        if(ara[i] % 2 == 0){
            e1 = i;
            break;
        }
    }
    for(ll i = 0;i < n;i++){
        if(ara[i] % 2 == 0){
            e2 = n - (i+1);
        }
    }
    ll p1 = e1+e2;
    for(ll i = 0;i < n;i++){
        if(ara[i] % 2 == 1){
            o1 = i;
            break;
        }
    }
    for(ll i = 0;i < n;i++){
        if(ara[i] % 2 == 1){
            o2 = n - (i+1);
        }
    }
    cout<<min(p1, o1+o2)<<endl;
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