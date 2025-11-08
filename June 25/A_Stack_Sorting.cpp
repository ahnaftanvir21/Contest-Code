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
    ll ara[k+1];
    //map<ll,ll>mp;
    int sm = inf;
    int mx = 0;
    for(ll i = 1;i <= k;i++){
        cin>>ara[i];
        //mp[ara[i]] = 1;
        sm = min(ara[i],sm);
        mx = max(ara[i],mx);
    }
    vector<ll>a;
    sm = mx = ara[1];
    map<int,int>mp;
    for(int i = 1;i <= k;i++){
      mp[ara[i]] = 1;
      //cout<<ara[i]<<" ";
      a.push_back(ara[i]);
    }
    for(int i = sm-1;i > 0;i--){
      if(mp[i] == 0){
        //cout<<i<<" ";
        a.push_back(i);
        mp[i] = 1;
      }
    }
    for(int i = k-1;i > 0;i--){
      for(int j = ara[i]-1;j > ara[i+1];j--){
        if(mp[j] == 0){
          //cout<<j<<" ";
          a.push_back(j);
          mp[j] = 1;
        }
      }
    }
    for(int i = n;i > mx;i--){
      if(mp[i] == 0){
        //cout<<i<<" ";
        a.push_back(i);
        mp[i] = 1;
      }
    }
    //cout<<endl;
    stack<ll>st;
    int x = 1;
    for(int i = 0;i < n;i++){
        if(a[i] != x){
            st.push(a[i]);
            //cout<<i<<" p\n";
        }
        else if(x == a[i]){
            //cout<<x<<"!\n";
            x++;
            while(!st.empty() && st.top() == x){
            st.pop();
            //cout<<x<<"?\n";
            x++;
            }
        }
    }
    if(x-1 != n){
        cout<<"-1\n";
    }
    else{
        for(int i = 0;i < n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
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