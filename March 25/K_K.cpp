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
    vector<char> pr;
    while(n--){
        string st;
        cin>>st;
        for(ll i = 0;i < st.size();i++){
            pr.push_back(st[i]);
            if(st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U' || st[i] == 'Y'){
                break;
            }
        }
        if(n != 0){
            pr.push_back('.');
        }
    }
    ll l = pr.size();
    ll c = l;
    while(c-- && pr[c] != '.'){
        l--;
    }
    ll ty = 0;
    ll prev = 0;
    for(ll i = l-1;i >= 0;i--){
        if(pr[i] == '.'){
            ll j = i-1;
            while(i-- && pr[j] != '.'){
                
            }
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