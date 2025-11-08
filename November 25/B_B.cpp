#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+9;
int n,T,d[N];
int dp[N];
int fun(int i,int t){
    if(t > T) return -1e9;
    if(i == n){
        return 0;
    }
    if(dp[i] != -1){
        return dp[i];
    }
    int ans = fun(i+1,t+d[i])+100;
    ans = max(fun(i+1,t+((double)d[i]/1.5))+75,ans);
    ans = max(fun(i+1,t+d[i]/2)+50,ans);
    return dp[i] = ans;
}
void test(int tt){
    //int n,T;
    cin>>n>>T;
    memset(dp,-1,sizeof dp);
    for(int i = 0;i < n;i++){
        cin>>d[i];
    }
    cout<<fun(0,0)<<endl;
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