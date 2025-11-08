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
    ll n,k;
    cin>>n>>k;
    ll a[n+1],b[n+1];
    vector<ll>sum;
    map<ll,ll>mp;
    for(ll i = 0;i < n;i++){
        cin>>a[i];
    }
    for(ll i = 0;i < n;i++){
        cin>>b[i];
        sum.push_back(a[i]+b[i]);
    }
    // for(ll i = 0;i < n;i++){
    //     cout<<sum[i]<<" ";
    // }
    // cout<<endl;
    // //sort(all(sum));
    // sort(rall(sum));
    // for(ll i = 0;i < n;i++){
    //     cout<<sum[i]<<" ";
    // }
    // cout<<endl;
    ll ans = 0;
    vector<ll>small;
    for(ll i = 0;i < n;i++){
        small.push_back(min(a[i],b[i]));
        ans+=max(a[i],b[i]);
    }
    sort(rall(small));
    for(ll i = 0;i < k-1;i++){
        ans+=small[i];
    }
    //ll ans = 0;
    // ll j = 0;
    // for(ll i = 0;i < k-1;i++){
        
    //     ans+=sum[i];
    //     mp[sum[i]]++;
    // }
    // for(ll i = 0;i < n;i++){
    //     if(mp[a[i]+b[i]] > 0){
    //         mp[a[i]+b[i]]--;
    //     }
    //     else{
    //         ans+= max(a[i],b[i]);
    //     }
    // }
    cout<<ans+1<<endl;
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