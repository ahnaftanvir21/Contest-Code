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
    char st[n+1];
    cin>>st;
    ll ara[n+1];
    ll cnt = 0;
    for(ll i = 0;i < n;i++){
        cin>>ara[i];
        if(st[i] == '0'){
            cnt++;
        }
    }
    ll sum[n+1];
    sum[0] = 0;
    if(ara[0] > 0){
        sum[0] = ara[0];
    }
    ll mx=ara[0];
    ll m = 0;
    for(ll i = 1;i < n;i++){
        if(st[i] == '0'){ 
            sum[i] = 0;
        }
        else if(sum[i-1] + ara[i] > 0){
            sum[i] = sum[i-1]+ara[i];
        }
        else{
            sum[i] = 0;
        }
        if(mx < sum[i]){
            mx = sum[i];
            m = i;
        }
    }
    if(mx > k){
        cout<<"NO\n";
    }
    else if(mx == k){
        cout<<"YES\n";
        for(ll i = 1;i < n;i++){
            if(st[i] == '0' && sum[i] == 0){
                ara[i] = sum[i-1]*(-1);
            }
        }
        for(ll i = 0;i < n;i++){
            cout<<ara[i]<<" ";
        }
        cout<<endl;
    }
    else{
        if(cnt == 0){
            cout<<"No\n";
        }
        else{
            cout<<"YES\n";
            ll x = 0;
            ll s[n+1];
            for(ll j = n-1;j >= 0;j--){
                if(st[j] == '0'){
                    ll p;
                    if(j == 0){
                        p = 0;
                    }
                    else{
                        p = sum[j-1];
                    }
                    ll ans = k-(p+x);
                    ara[j] = ans;
                    st[j] = '1';
                    break;
                }
                else{
                    if(x+ara[j] > 0){
                        x+=ara[j];
                    }
                    else{
                        x = 0;
                    }
                }
            }
            for(ll i = 1;i < n;i++){
                if(st[i] == '0'){
                    ara[i] = sum[i-1]*(-1);
                }
            }
            for(ll i = 0;i < n;i++){
                cout<<ara[i]<<" ";
            }
            cout<<endl;
        }
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