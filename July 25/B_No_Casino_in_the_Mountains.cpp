#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test(int tt){
    int n,k;
    cin>>n>>k;
    int cnt,ans,peak;
    cnt = ans = peak = 0;
    int ara[n+1];
    for(int i = 0;i < n;i++){
        cin>>ara[i];
    }
    for(int i = 0;i < n;i++){
        if(peak == 1){
            peak = 0;
            continue;
        }
        else{
            if(ara[i] == 0){
                cnt++;
            }
            else{
                cnt = 0;
            }
            if(cnt == k){
                //cout<<i<<endl;
                peak = 1;
                ans++;
                cnt = 0;
            }
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
    for(int i = 1;i <= t;i++){
        test(i);
    }
    return 0;
}