#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2100,mod = 1e9+7;
int n,k,dp[N][N];
int f(int pre,int i){
    if(i == k){
        return 1;
    }
    if(dp[i][pre] != -1){
        return dp[i][pre];
    }
    int ans = 0;
    for(int j = pre;j <= n;j+=pre){
        ans = (ans+f(j,i+1))%mod;
    }
    return dp[i][pre] = ans;

}
void test(int tt){
    memset(dp,-1,sizeof dp);
    cin>>n>>k;
    cout<<f(1,0)<<endl;
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