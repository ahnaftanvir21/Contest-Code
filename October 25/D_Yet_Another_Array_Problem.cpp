#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int>primes;
bool is_prime(int n){
    for(int i = 2;i*i <= n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
void test(int tt){
    int n;
    cin>>n;
    int ara[n+2];
    for(int i = 0;i < n;i++){
        cin>>ara[i];
    }
    int g = ara[0];
    for(int i = 0;i < n;i++){
        g = __gcd(ara[i],g);
    }
    int ans = -1;
    for(auto p: primes){
        if(g%p != 0){
            ans = p;
            break;
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    cin>>t;
    for(int i = 2;i <= 1000;i++){
        if(is_prime(i)){
            primes.push_back(i);
            //cout<<i<<endl;
        }
    }
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}