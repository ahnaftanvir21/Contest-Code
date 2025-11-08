#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 4e4+9;
const int mod = 1e9+7;
bool is_pall(int n){
    int rn = 0;
    int p = n;
    while(p > 0){
        int x = p %10;
        rn = rn*10+x;
        p/=10;
    }
    if(rn == n){
        return true;
    }
    else return false;
}
vector<int>pall;
// int f(int n){
//     if(n == 0){
//         return 1;
//     }
//     int ans = 0;
//     for(int i = 0; i < pall.size();i++){
//         if(n-pall[i] >= 0 && is_pall(n-pall[i])){
//             ans+=f(n-pall[i]);
//         }
//         else{
//             break;
//         }
//     }
//     return ans;
// }
int dp[N];
void test(int tt){
    int n;
    cin>>n;
    int i = 0;
    cout<<dp[n]<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    for(int i = 1;i < N;i++){
        if(is_pall(i)){
            pall.push_back(i);
        }
    }
    dp[0] = 1;
    for(auto p: pall){
        for(int i = p;i < N;i++){
            dp[i] += dp[i-p];
            dp[i]%=mod;
        }
    }
    //cout<<pall.size()<<endl;
    cin>>t;
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}