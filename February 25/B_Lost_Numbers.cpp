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
    ll ara[] = {4,8,15,16,23,42};
    map<ll,pair<ll,ll>>mp;
    map<ll,ll>mark;
    for(ll i = 0;i < 6;i++){
        for(ll j = 0;j < 6;j++){
            mp[ara[i]*ara[j]] = {ara[i],ara[j]};
        }
    }
    ll a,b,c;
    cout<<"? 1 2"<<endl;
    cin>>a;
    cout<<"? 2 3"<<endl;
    cin>>b;
    vector<ll>p;
    ll ans[10];
    p.push_back(mp[a].first);
    p.push_back(mp[a].second);
    if(mp[b].first == p[0]){
        ans[1] = p[0];
        ans[0] = p[1];
        ans[2] = mp[b].second;
    }
    else if(mp[b].first == p[1]){
        ans[0] = p[0];
        ans[1] = p[1];
        ans[2] = mp[b].second;
    }
    else if(mp[b].second == p[0]){
        ans[0] = p[1];
        ans[1] = p[0];
        ans[2] = mp[b].first;
    }
    else{
        ans[0] = p[0];
        ans[1] = p[1];
        ans[2] = mp[b].first;
    }
    cout<<"? 3 4"<<endl;
    ll s;
    cin>>s;
    ans[3] = s/ans[2];
    cout<<"? 4 5"<<endl;
    cin>>s;
    ans[4] = s/ans[3];
    for(ll i = 0;i < 5;i++){
        mark[ans[i]] = 1;
    }
    for(ll i = 0;i < 6;i++){
        if(mark[ara[i]] == 0){
            ans[5] = ara[i];
            break; 
        }
    }
    cout<<"! ";
    for(ll i = 0;i < 6;i++){
        cout<<ans[i];
        if(i != 5){
            cout<<" ";
        }
    }
    cout<<endl;

}
 
 
int32_t main()
{
    //fastio();
    // srand(time(NULL));
 
    int testcases = 1;
    //cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        testCases (tt);
    }
 
    return 0;
}