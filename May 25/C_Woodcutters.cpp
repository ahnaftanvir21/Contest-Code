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
ll n;
vector<pair<ll,ll>>ara;
map<ll,ll>mp;
bool inleft(ll i){
    if(i == 0){
        return true;
    }
    ll x,h,xp,hp;
    x = ara[i].first;
    h = ara[i].second;
    xp = ara[i-1].first;
    hp = ara[i-1].second;
    if(mp[i-1] == 1){
        if(xp + hp < x-h){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(xp < x-h){
            return true;
        }
        else{
            return false;
        }
    }

}
bool inright(ll i){
    if(i == n-1){
        return true;
    }
    ll x,h,xn,hn;
    x = ara[i].first;
    h = ara[i].second;
    xn = ara[i+1].first;
    hn = ara[i+1].second;
    if(x+h < xn){
        return true;
    }
    else{
        return false;
    }
}
void testCases (int tt)
{
    
    cin>>n;
    for(ll i  = 0;i < n;i++){
        ll x,h;
        cin>>x>>h;
        ara.push_back({x,h});
    }
    ll ans = 0;
    for(ll i = 0;i < n;i++){
        if(inleft(i)){
            mp[i] = -1;
            ans++;
        }
        else if(inright(i)){
            mp[i] = 1;
            ans++;
        }
        //cout<<mp[i]<<endl;
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