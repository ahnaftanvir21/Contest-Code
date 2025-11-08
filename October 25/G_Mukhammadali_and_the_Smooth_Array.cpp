#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 8e3+9;
void test(int tt){
    int n;
    cin>>n;
    int a[n],c[n];
    int dp[n];
    //memset(dp,-1,sizeof dp);
    for(int i = 0;i < n;i++){
        cin>>a[i];
    }
    int total = 0;
    for(int i = 0;i < n;i++){
        cin>>c[i];
        total += c[i];
    }
    int mx_cost = 0;
    for(int i = 0;i < n;i++){
        dp[i] = c[i];
        for(int j = 0;j < i;j++){
            if(a[j] <= a[i]){
                dp[i] = max(dp[i],dp[j]+c[i]);
            }
        }
        //cout<<dp[i]<<" ";
        mx_cost = max(mx_cost,dp[i]);
    }
    cout<<total - mx_cost<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}