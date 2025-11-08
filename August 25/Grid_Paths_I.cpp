#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e3+9;
const int mod = 1e9+7;
int n;
string st[N];
int dp[N][N];
int sol(int i,int j){
    if(i == n && j == n && st[i-1][j-1] == '.'){
        return 1;
    }
    if(i > n || j > n){
        return 0;
    }
    if(st[i-1][j-1] == '*'){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int ans = (sol(i+1,j)+sol(i,j+1))%mod;
    return dp[i][j] =  ans;
}
void test(int tt){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>st[i];
    }
    memset(dp,-1,sizeof dp);
    cout<<sol(1,1)<<endl;

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