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

const int N = 1e7 + 9;
vector<int> prime;
bitset<N> f;
void sieve(){
  int n = N - 9;
  f[1] = true;
  for (int i = 2; i * i <= n; i++) {
    if (!f[i]) {
      for (int j = i * i; j <= n; j += i) {
        f[j] = true;
      }
    }
  }
  for (int i = 2; i <= n; i++) {
    if (!f[i]) {
      prime.push_back(i);
    }
  }
  //cout << prime.size() << '\n';
}

// vector<ll>prime;
// int sieve()
// {
//     ll n;
//     n = 5e6+5;
//     bool f[n];
//     f[1] = true;
//     for(ll i = 2;i*i <= n;i++){
//         if(!f[i]){
//             //primes.push_back(i);
//             for(ll j = i*i;j <= n;j+= i){
//                 f[j] = true; 
//             }
//         }
//     }
//     for(ll i = 2;i <= n;i++){
//         if(!f[i]){
//             prime.push_back(i);
//         }
//     }
//     cout<<prime.size()<<endl;
    
// } 
void testCases (int tt)
{
    ll n;
    cin>>n;
    vector<ll>ara;
    for(ll i = 0;i < n;i++){
        ll c;
        cin>>c;
        ara.push_back(c);
    }
    sort(rall(ara));
    ll cnt = 0;
    for(ll i = 0;i < n;i++){
        if(ara[i] > prime[i]){
            cnt+=(ara[i]-prime[i]);
        }
    }
    ll ans = 0;
    for(ll i = 0;i < n;i++){
        if(ara[i] < prime[i]){
            ll p = prime[i]-ara[i];
            if(p > cnt){
                ans++;
            }
            else{
                cnt = cnt-p;
            }
        }
    }
    cout<<ans<<endl;
}
 
 
int32_t main()
{
    fastio();
    // srand(time(NULL));
    sieve();
    int testcases = 1;
    cin >> testcases;
    for (int tt = 1; tt <= testcases; tt++)
    {
        testCases (tt);
    }
 
    return 0;
}