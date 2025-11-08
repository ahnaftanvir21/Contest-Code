#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
const int N = 1e6+9;
int dp[N];
int sol(int i){
    if(i == 0){
        return 1;
    }
    if(dp[i] != -1){
        return dp[i];
    }
    int ans = 0;
    for(int j = 1;j <= 6;j++){
        if(i-j >= 0){
            ans += ((sol(i-j))%mod);
            ans = ans%mod;
        }
    }
    return dp[i] = ans;

}
void test(int tt){
    int n;
    cin>>n;
    memset(dp, -1, sizeof dp);
    cout<<sol(n)<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    //cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}