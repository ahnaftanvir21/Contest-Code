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
ll N=2e6+1;

vector<ll>primes;
void sieve(int N){
    bool f[N+1];
    f[1] = true;
    for(ll i = 2;i*i <= N;i++){
        if(!f[i]){
            //primes.push_back(i);
            for(ll j = i*i;j <= N;j+= i){
                f[j] = true; 
            }
        }
    }
    for(ll i = 2;i <= N;i++){
        if(!f[i]){
            primes.push_back(i);
            //cout<<i<<" ";
        }
    }
}

int eupi(ll n){
    ll res = n;
    ll sqr = sqrt(n);
    for(ll i = 0;i <= primes.size() && primes[i] <= sqr;i++){
        if(n%primes[i] == 0){
            while(n%primes[i] == 0){
                n = n/primes[i];
            }
            sqr = sqrt(n);
            res = res/ primes[i];
            res*= primes[i] - 1;
        }
    }
    if(n != 1){
        res/= n;
        res*=n-1;
   }
   return res;
}
 
void testCases (ll tt)
{
    
    cout<<eupi(tt)<<endl;
}
 
 
int32_t main()
{
    fastio();
    // srand(time(NULL));
    sieve(N);
    //int testcases = 1;
    //tcin >> testcases;
    ll a,b;
    cin>>a>>b;
    for (ll tt = a; tt <= b; tt++)
    {
        cout<<eupi(tt)<<endl;
    }
 
    return 0;
}