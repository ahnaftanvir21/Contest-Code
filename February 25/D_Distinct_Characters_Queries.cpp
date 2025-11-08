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
    string st;
    cin>>st;
    vector<set<ll>>pos(26);
    for(ll i = 0;i < st.size();i++){
        pos[st[i]-'a'].insert(i);
    }
    ll q;
    cin>>q;
    while(q--){
        ll a;
        cin>>a;
        if(a == 1){
            ll p;
            cin>>p;
            p--;
            char c;
            cin>>c;
            pos[st[p] - 'a'].erase(p);
            st[p] = c;
            pos[st[p] - 'a'].insert(p);
        }
        else{
            ll l,r;
            cin>>l>>r;
            l--;r--;
            ll ans = 0;
            for(ll c = 0;c < 26;c++){
                auto s = pos[c].lower_bound(l);
                if(s != pos[c].end() && *s <= r){
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
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