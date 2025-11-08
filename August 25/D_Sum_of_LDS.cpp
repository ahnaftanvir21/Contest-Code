#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
void test(int tt){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i = 0;i < n;i++){
        cin>>p[i];
    }
    int ans = 1;
    vector<int>dp(n,0);
    dp[0] = 1;
    for(int i = 1;i < n;i++){
        if(p[i] > p[i-1]){
            dp[i] = dp[i-1]+1;
        }
        else{
            dp[i] = dp[i-1]+(i+1);
        }
        ans+=dp[i];
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
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}