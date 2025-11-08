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
    ll a[n+1];
    ll b[n+1];
    ll apos[n+1];
    ll bpos[n+1];
    vector<pair<ll,ll>>ans;
    for(ll i = 1;i <= n;i++){
        cin>>a[i];
        apos[a[i]] = i;
    }
    for(ll i = 1;i <= n;i++){
        cin>>b[i];
        bpos[b[i]] = i;
    }
    ll f = 1;
    ll cnt = 0;
    for(ll i = 1;i <= n;i++){
        if(a[i] == b[i]){
            cnt++;
        }
       ll x = bpos[a[i]];
       if(a[x] != b[i]){
        f = 0;
        break;
       }
    }
    if(n % 2 == 0 && cnt > 0){
        f = 0;
    }
    else if(n % 2 == 1 && cnt > 1){
        f = 0;
    }
    if(f == 1){
        for(ll i = 1;i <= n;i++){
            if(a[i] == b[i] && i != (n/2)+1){
                ll c = (n/2)+1;
                swap(a[i],a[c]);
                swap(b[i],b[c]);
                ans.push_back({i,c});
                apos[a[i]] = i;
                apos[a[c]] = c;
                bpos[b[i]] = i;
                bpos[b[c]] = c;
            }
            ll x = bpos[a[i]];
            ll y = n+1-i;
            if(x == y){
                continue;
            }
            swap(a[x],a[y]);
            swap(b[x],b[y]);
            apos[a[x]] = x;
            apos[a[y]] = y;
            bpos[b[x]] = x;
            bpos[b[y]] = y;
            ans.push_back({x,y});
        }
        cout<<ans.size()<<endl;
        for(ll i = 0;i < ans.size();i++){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
        
    }
    else{
        cout<<"-1\n";
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