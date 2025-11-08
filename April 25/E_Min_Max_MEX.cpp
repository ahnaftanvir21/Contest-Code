#include<bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
#define endl '\n'
#define ll int
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define mem(a,b) memset(a, b, sizeof(a) )
#define sq(a) ((a) * (a))
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const int MX = 2e5+123;
//const ll infLL = 9000000000000000000;
const int MOD = 1e9+7;
vector<int>ara(300005);
ll find(ll n, ll x, ll k)
{
    ll cnt = 0;
    ll i = 0;
    if(x == 0){
        return 1;
    }
    set<ll>st;
    for(ll i = 0;i < x;i++){
        st.insert(i);
    }
    int found = 0;
    for(int i = 0;i < n;i++){
        if(st.count(ara[i])) st.erase(ara[i]);
        if(st.empty()){
            found++;
            for(ll j = 0;j < x;j++){
                st.insert(j);
            }
        }
    }
    return found >= k;
}
 
void testCases (int tt)
{
    ll n,k;
    cin>>n>>k;
    //ll ara[n+1];
    for(ll i = 0;i < n;i++){
        cin>>ara[i];
    }
    //cout<<tt<<endl;
    ll low,high;
    low = 0;
    high = n;
    ll ans = low;
    while(low <= high){
        ll mid = (low+high)/2;
        //ll b = find(n,mid+1,k);
        if(find(n,mid,k)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<ans<<endl;
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