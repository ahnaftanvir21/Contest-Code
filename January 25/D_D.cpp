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
    
}
 
 
int32_t main()
{
    fastio();
    // srand(time(NULL));
 
    // int testcases = 1;
    // cin >> testcases;
    // for (int tt = 1; tt <= testcases; tt++)
    // {
    //     testCases (tt);
    // }
    int n,w;
    cin>>n>>w;
    vector<ll>G[w+1];
    map<pair<ll,ll>,ll>mp;
    map<ll,pair<ll,ll>>ms;
    for(ll i = 0;i < n;i++){
        ll x,y;
        cin>>x>>y;
        G[x].push_back(y);
        ms[i+1] = {x,y};
    }
    //cout<<"done";
    ll mn = 900000000000;
    for(ll i = 1;i <= w;i++){
        sort(all(G[i]));
        if(G[i].size() < mn){
            mn = G[i].size();
        }
    }
    //cout<<mn<<endl;
    for(ll i = 0;i < mn;i++){
        ll mx = 0;
        for(ll j = 1;j <= w;j++){
            mx = max(G[j][i],mx);
        }
        for(ll j = 1;j <= w;j++){
            mp[{j,G[j][i]}] = mx;
            //cout<<j<<" "<<G[j][i]<<endl;
        }
        //cout<<mx<<" ";
    }
    cout<<"\n";
    ll q;
    cin>>q;
    while(q--){
        ll t,p;
        cin>>t>>p;
        ll x,y;
        x= ms[p].first;
        y=ms[p].second;
        //cout<<x<<" "<<y<<" "<<mp[{x,y}]<<endl;
        if(mp[{x,y}] > t || mp[{x,y}] == 0){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}