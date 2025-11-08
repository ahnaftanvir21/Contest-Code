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
ll N = 4e5;
map<ll,ll>mp;
 
void testCases (int tt)
{
    ll n;
    cin>>n;
    if(mp[(n*(n+1))/2] == 1){
        cout<<"-1"<<endl;
    }
    else{
        ll ara[n+2];
        for(ll i  = 1;i <= n;i++){
            ara[i] = i;
        }
        ll sum = 0;
        for(ll i = 1;i <= n;i++){
            if(mp[sum+ara[i]] == 1){
                swap(ara[i],ara[i+1]);
            }
            sum+=ara[i];
        }
        for(ll i = 1;i <= n;i++){
            cout<<ara[i];
            if(i != n){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
 
 
int32_t main()
{
    fastio();
    // srand(time(NULL));
    for(ll i = 1;i <= N;i++){
        mp[i*i] = 1;
    }
    int testcases = 1;
    cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        testCases (tt);
    }
 
    return 0;
}