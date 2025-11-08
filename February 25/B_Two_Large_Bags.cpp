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
    ll ara[n+2];
    map<ll,ll>mp;
    vector<ll>a;
    for(ll i = 0;i < n;i++){
        cin>>ara[i];
        mp[ara[i]]++;
        // if(mp[ara[i]] == 0){
        //     a.push_back(ara[i]);
        // }
    }
    //sort(all(a));
    ll f = 0;
    ll cnt = 0;
    ll prev = 0;
    for(auto m: mp){
        ll i = m.first;
        ll y = m.second;
        //cout<<i<<" "<<y<<endl;
        //cout<<"cnt"<<cnt<<endl;
        if(i-1 != prev){
            //cout<<"hello"<<endl;
            ll x = i-prev-1;
            x = x * 2;
            if(x <= cnt){
                cnt = cnt-x;
            }
            else{
                if(cnt % 2 != 0){
                    f = 1;
                    break;
                }
                cnt = 0;
            }
        }
        if(y >= 2){
            cnt+=y-2;
        }
        else{
            if(cnt < 1){
                f = 1;
                break;
            }
            else{
                cnt--;
            }
        }
        prev = i;
    }
    //cout<<cnt<<endl;
    if(f == 1 || cnt%2 != 0){
        cout<<"No\n";
    }
    else{
        cout<<"Yes\n";
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