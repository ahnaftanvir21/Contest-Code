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
    ll ara[2*n+5];
    for(ll i = 0;i < 2*n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+2*n);
    vector<ll>a;
    for(ll i = 0,j = (2*n)-1;i < n;i++,j--){
        a.push_back(ara[j]);
        a.push_back(ara[i]);
    }
    ll sum = 0;
    for(ll i = 0;i < 2*n;i+=2){
        sum +=(a[i]-a[i+1]);
    }
    if(sum > a[0]){
        cout<<sum;
        for(ll i = 0;i < n*2;i++){
            cout<<" "<<a[i];
        }
    }
    else if(sum < a[0]){
        ll p = a[0] - sum;
        cout<<a[0];
        a[0] += p;
        for(ll i = 0;i < 2*n;i++){
            cout<<" "<<a[i];
        }
    }
    else{
        cout<<ara[(2*n)-1];
        ll s = 0;
        for(ll i = 1;i < 2*n;i+=2){
            s += (ara[i]-ara[i-1]);
        }
        //cout<<s<<endl;
        ll p = ara[(2*n)-1] - s;
        ara[(2*n)-1]+=p;
        for(ll j = 2*n-1;j >= 0;j--){
            cout<<" "<<ara[j];
        }
    }
    cout<<endl;
    // cout<<sum<<endl;
    // for(ll i = 0;i < 2*n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
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