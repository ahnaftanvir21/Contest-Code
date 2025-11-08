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
    int n;
    cin>>n;
    int ara[10000] = {0};
    ll mn,mx;
    vector<pair<ll,ll>>a;
    for(int i = 0;i < n;i++){
        int l,r;
        cin>>l>>r;
        a.push_back({l,r});
        for( int j = l;j <= r;j++){
            ara[j]++;
        }
    }
    int ans = -1;
    for(ll i = 0;i < n;i++){
        int l,r;
        l = a[i].first;
        r = a[i].second;
        int p = 1;
        for(int j = l;j <= r;j++){
            if(ara[j]-1 == 0){
                p = 0;
                break;
            }
        }
        if(p == 1){
            ans = i+1;
            break;
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